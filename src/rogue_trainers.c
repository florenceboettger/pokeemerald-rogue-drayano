#include "global.h"
#include "constants/event_objects.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/weather.h"
#include "gba/isagbprint.h"

#include "event_data.h"
#include "event_object_movement.h"
#include "malloc.h"
#include "party_menu.h"
#include "random.h"

#include "rogue.h"
#include "rogue_adventurepaths.h"
#include "rogue_controller.h"
#include "rogue_pokedex.h"
#include "rogue_query.h"
#include "rogue_query_script.h"
#include "rogue_settings.h"
#include "rogue_trainers.h"

struct TrainerHeldItemScratch
{
    bool8 hasLeftovers : 1;
    bool8 hasShellbell : 1;
#ifdef ROGUE_EXPANSION
    bool8 hasMegaStone : 1;
    bool8 hasZCrystal : 1;
#endif
};

struct TrainerPartyScratch
{
    struct TrainerHeldItemScratch heldItems;
    struct Pokemon* party;
    u16 trainerNum;
    bool8 shouldRegenerateQuery;
    bool8 allowItemEvos;
    bool8 allowWeakLegends;
    bool8 allowStrongLegends;
    bool8 forceLegends;
    bool8 preferStrongSpecies;
    u8 evoLevel;
    u8 partyCapacity;
    u8 partyCount;
    u8 subsetIndex;
    u8 subsetSampleCount;
    u8 fallbackCount;
};

static u16 SampleNextSpecies(struct TrainerPartyScratch* scratch);

static bool8 UseCompetitiveMoveset(struct TrainerPartyScratch* scratch, u8 monIdx, u8 totalMonCount);
static bool8 SelectNextPreset(struct TrainerPartyScratch* scratch, u16 species, u8 monIdx, struct RogueMonPreset* outPreset);
static void ModifyTrainerMonPreset(struct RogueMonPreset* preset);
static void ReorderPartyMons(struct TrainerPartyScratch* scratch, struct Pokemon *party, u8 monCount);

bool8 Rogue_IsBossTrainer(u16 trainerNum)
{
    const struct RogueTrainer* trainer = Rogue_GetTrainer(trainerNum);
    return (trainer->trainerFlags & TRAINER_FLAG_CLASS_ANY_MAIN_BOSS) != 0;
}

bool8 Rogue_IsMiniBossTrainer(u16 trainerNum)
{
    const struct RogueTrainer* trainer = Rogue_GetTrainer(trainerNum);
    return (trainer->trainerFlags & TRAINER_FLAG_CLASS_MINI_BOSS) != 0;
}

bool8 Rogue_IsRivalTrainer(u16 trainerNum)
{
    // TODO
    return FALSE;
}

bool8 Rogue_IsAnyBossTrainer(u16 trainerNum)
{
    return Rogue_IsBossTrainer(trainerNum) || Rogue_IsMiniBossTrainer(trainerNum);
}

bool8 Rogue_IsKeyTrainer(u16 trainerNum)
{
    return Rogue_IsBossTrainer(trainerNum) || Rogue_IsRivalTrainer(trainerNum);
}

static u8 GetTrainerLevel(u16 trainerNum)
{
    if(Rogue_IsBossTrainer(trainerNum))
    {
        return Rogue_CalculateBossMonLvl();
    }

    if(Rogue_IsMiniBossTrainer(trainerNum))
    {
        return Rogue_CalculateMiniBossMonLvl();
    }

    return Rogue_CalculateTrainerMonLvl();
}

const struct RogueTrainer* Rogue_GetTrainer(u16 trainerNum)
{
    // TODO - TRAINER_ROGUE_DYNAMIC
    AGB_ASSERT(trainerNum < gRogueTrainerCount);
    return &gRogueTrainers[trainerNum];
}

struct RogueBattleMusic const* Rogue_GetTrainerMusic(u16 trainerNum)
{
    const struct RogueTrainer* trainer = Rogue_GetTrainer(trainerNum);
    return &gRogueTrainerMusic[trainer->musicPlayer];
}

const u8* Rogue_GetTrainerString(u16 trainerNum, u8 textId)
{
    const struct RogueTrainer* trainer = Rogue_GetTrainer(trainerNum);
    const u8* str = NULL;

    if(trainer->encounterText == NULL || trainer->encounterTextCount == 0)
        return NULL;

    // For boss trainers we're going to predictably jump up the string tables, so custom text can optionally be added for later states
    // In order: gyms, e4, champ, final champ
    if(Rogue_IsAnyBossTrainer(trainerNum))
    {
        u8 offset = 0;

        if(gRogueRun.currentDifficulty >= ROGUE_FINAL_CHAMP_DIFFICULTY)
            offset = 3;
        else if(gRogueRun.currentDifficulty >= ROGUE_CHAMP_START_DIFFICULTY)
            offset = 2;
        else if(gRogueRun.currentDifficulty >= ROGUE_ELITE_START_DIFFICULTY)
            offset = 1;

        offset = min(offset, trainer->encounterTextCount - 1);

        for(; offset > 0; --offset)
        {
            str = trainer->encounterText[TRAINER_STRING_COUNT * offset + textId];
            if(str != NULL)
                return str;
        }

        // Fallback to offset 0 (TODO should fallback to a sensible default tbh)
        return trainer->encounterText[textId];
    }
    else
    {
        // TODO
        // Predictably randomise per trainer id instance?
    }

    return NULL;
}

bool8 Rogue_GetTrainerFlag(u16 trainerNum)
{
    return FlagGet(TRAINER_FLAGS_START + trainerNum);
}

u16 Rogue_GetTrainerObjectEventGfx(u16 trainerNum)
{
    const struct RogueTrainer* trainer = Rogue_GetTrainer(trainerNum);
    return trainer->objectEventGfx;
}

u16 Rogue_GetTrainerNumFromObjectEvent(struct ObjectEvent *curObject)
{
    u8 i;

    // TODO - Could check the script?? (Was having issues though)

    // Grab the trainer which matches the gfx
    for(i = 0; i < gRogueTrainerCount; ++i)
    {
        if(curObject->graphicsId == Rogue_GetTrainerObjectEventGfx(i))
        {
            return i;
        }
    }

    return gRogueTrainerCount;
}

u16 Rogue_GetTrainerNumFromLastInteracted()
{
    u8 lastTalkedId = VarGet(VAR_LAST_TALKED);
    u8 objEventId = GetObjectEventIdByLocalIdAndMap(lastTalkedId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);

    if(objEventId < OBJECT_EVENTS_COUNT)
    {
        return Rogue_GetTrainerNumFromObjectEvent(&gObjectEvents[objEventId]);
    }

    return TRAINER_NONE;
}

u8 Rogue_GetTrainerWeather(u16 trainerNum)
{
    const struct RogueTrainer* trainer = Rogue_GetTrainer(trainerNum);
    u8 weatherType = WEATHER_NONE;

    if(Rogue_IsAnyBossTrainer(trainerNum) && trainer != NULL)
    {
        switch (Rogue_GetConfigRange(DIFFICULTY_RANGE_TRAINER))
        {
        case DIFFICULTY_LEVEL_EASY:
            weatherType = WEATHER_NONE;
            break;
        
        case DIFFICULTY_LEVEL_MEDIUM:
            if(gRogueRun.currentDifficulty > 2)
                weatherType = trainer->preferredWeather;
            break;
        
        case DIFFICULTY_LEVEL_HARD:
            if(gRogueRun.currentDifficulty > 0)
                weatherType = trainer->preferredWeather;
            break;
        
        case DIFFICULTY_LEVEL_BRUTAL:
            weatherType = trainer->preferredWeather;
            break;
        }
    }

    if(weatherType == WEATHER_DEFAULT)
    {
        weatherType = gRogueTypeWeatherTable[trainer->typeAssignment];
    }

    return weatherType;
}

static u8 CalculateLvlFor(u8 difficulty)
{
    if(FlagGet(FLAG_ROGUE_GAUNTLET_MODE))
    {
        return MAX_LEVEL;
    }

    // Gym leaders lvs 15 -> 85
    if(difficulty <= 7)
    {
        return min(100, 15 + 10 * difficulty);
    }
    else
    {
        // Both champions are lvl 100
        difficulty -= 7; // (1 - 6)
        return min(100, 85 + 3 * difficulty);
    }
}

u8 Rogue_CalculatePlayerMonLvl()
{
    return Rogue_CalculateBossMonLvl() - gRogueRun.currentLevelOffset;
}

u8 Rogue_CalculateTrainerMonLvl()
{
    u8 difficultyModifier = Rogue_GetEncounterDifficultyModifier();
    u8 startLvl;
    u8 playerLvl;

    if(gRogueRun.currentDifficulty == 0)
    {
        startLvl = 5;
        playerLvl = max(5, Rogue_CalculatePlayerMonLvl() / 2); // climb slowly for difficulty 1
    }
    else
    {
        startLvl = CalculateLvlFor(gRogueRun.currentDifficulty - 1);
        playerLvl = Rogue_CalculatePlayerMonLvl();
    }

    switch (difficultyModifier)
    {
    case ADVPATH_SUBROOM_ROUTE_CALM:
        // Lag behind
        return startLvl;

    case ADVPATH_SUBROOM_ROUTE_AVERAGE:
        // Average of 2 so gap becomes larger as you reach level cap
        return (startLvl + playerLvl) / 2;

    case ADVPATH_SUBROOM_ROUTE_TOUGH:
        // Scale with player level
        return max(startLvl, playerLvl > 5 ? playerLvl - 5 : 5);

    default:
        AGB_ASSERT(FALSE);
        return playerLvl;
    }
}

u8 Rogue_CalculateMiniBossMonLvl()
{
    return Rogue_CalculatePlayerMonLvl() - 5;
}

u8 Rogue_CalculateBossMonLvl()
{
    return CalculateLvlFor(gRogueRun.currentDifficulty);
}

u8 Rogue_GetTrainerTypeAssignment(u16 trainerNum)
{
    const struct RogueTrainer* trainer = Rogue_GetTrainer(trainerNum);
    return trainer->typeAssignment;
}

u16 Rogue_GetTrainerTypeGroupId(u16 trainerNum)
{
    if(Rogue_IsBossTrainer(trainerNum))
    {
        const struct RogueTrainer* trainer = Rogue_GetTrainer(trainerNum);

        // We're gonna always use the trainer's assigned type to prevent dupes
        // The history buffer will be wiped between stages to allow for types to re-appear later e.g. juan can appear as gym and wallace can appear as champ
        u8 type = trainer->typeAssignmentGroup;

        // None type trainers are unqiue, so we don't care about the type repeat
        if(type != TYPE_NONE)
            return type;
    }

    // Just avoid repeating this trainer
    return NUMBER_OF_MON_TYPES + trainerNum;
}

bool8 Rogue_UseCustomPartyGenerator(u16 trainerNum)
{
    return TRUE;
}


static u16 GetTrainerHistoryKey(u16 trainerNum)
{
    if(Rogue_IsBossTrainer(trainerNum))
    {
        // We're gonna always use the trainer's assigned type to prevent dupes
        // The history buffer will be wiped between stages to allow for types to re-appear later e.g. juan can appear as gym and wallace can appear as champ
        u16 type = Rogue_GetTrainerTypeAssignment(trainerNum);

        // None type trainers are unqiue, so we don't care about the type repeat
        if(type == TYPE_NONE)
            return NUMBER_OF_MON_TYPES + trainerNum;

        return type;
    }

    // Just avoid repeating this trainer
    return trainerNum;
}

static void GetGlobalFilterFlags(u32* includeFlags, u32* excludeFlags)
{
    *includeFlags = TRAINER_FLAG_NONE;
    *excludeFlags = TRAINER_FLAG_NONE;

    if(Rogue_GetConfigToggle(DIFFICULTY_TOGGLE_TRAINER_ROGUE))
        *includeFlags |= TRAINER_FLAG_REGION_ROGUE;

    if(Rogue_GetConfigToggle(DIFFICULTY_TOGGLE_TRAINER_KANTO))
        *includeFlags |= TRAINER_FLAG_REGION_KANTO;

    if(Rogue_GetConfigToggle(DIFFICULTY_TOGGLE_TRAINER_JOHTO))
        *includeFlags |= TRAINER_FLAG_REGION_JOHTO;

    if(Rogue_GetConfigToggle(DIFFICULTY_TOGGLE_TRAINER_HOENN))
        *includeFlags |= TRAINER_FLAG_REGION_HOENN;

#ifdef ROGUE_EXPANSION
    if(Rogue_GetConfigToggle(DIFFICULTY_TOGGLE_TRAINER_SINNOH))
        *includeFlags |= TRAINER_FLAG_REGION_SINNOH;

    if(Rogue_GetConfigToggle(DIFFICULTY_TOGGLE_TRAINER_UNOVA))
        *includeFlags |= TRAINER_FLAG_REGION_UNOVA;

    if(Rogue_GetConfigToggle(DIFFICULTY_TOGGLE_TRAINER_KALOS))
        *includeFlags |= TRAINER_FLAG_REGION_KALOS;

    if(Rogue_GetConfigToggle(DIFFICULTY_TOGGLE_TRAINER_ALOLA))
        *includeFlags |= TRAINER_FLAG_REGION_ALOLA;

    if(Rogue_GetConfigToggle(DIFFICULTY_TOGGLE_TRAINER_GALAR))
        *includeFlags |= TRAINER_FLAG_REGION_GALAR;
#endif

    // TODO - Rework this flag
    if(FlagGet(FLAG_ROGUE_RAINBOW_MODE))
        *excludeFlags |= TRAINER_FLAG_MISC_RAINBOW_EXCLUDE;
    else
        *excludeFlags |= TRAINER_FLAG_MISC_RAINBOW_ONLY;

    if(*includeFlags == TRAINER_FLAG_NONE)
    {
        // Safety fallback (Should never reach here)
        AGB_ASSERT(FALSE);
        *includeFlags = TRAINER_FLAG_REGION_DEFAULT;
    }
}

static u16 Rogue_ChooseBossTrainerId(u16 difficulty, u16* historyBuffer, u16 historyBufferCapacity)
{
    u8 i;
    u32 includeFlags;
    u32 excludeFlags;
    u16 trainerNum = gRogueTrainerCount;

    RogueTrainerQuery_Begin();

    while(trainerNum == gRogueTrainerCount)
    {
        // Populate query
        //
        RogueTrainerQuery_Reset(QUERY_FUNC_INCLUDE);

        // Only include trainers we want
        includeFlags = TRAINER_FLAG_NONE;
        if(difficulty >= ROGUE_CHAMP_START_DIFFICULTY)
            includeFlags |= TRAINER_FLAG_CLASS_CHAMP;
        else if(difficulty >= ROGUE_ELITE_START_DIFFICULTY)
            includeFlags |= TRAINER_FLAG_CLASS_ELITE;
        else
            includeFlags |= TRAINER_FLAG_CLASS_GYM;

        RogueTrainerQuery_ContainsTrainerFlag(QUERY_FUNC_INCLUDE, includeFlags);

        GetGlobalFilterFlags(&includeFlags, &excludeFlags);
        RogueTrainerQuery_ContainsTrainerFlag(QUERY_FUNC_INCLUDE, includeFlags);
        RogueTrainerQuery_ContainsTrainerFlag(QUERY_FUNC_EXCLUDE, excludeFlags);

        // Exclude any types we've already encountered
        for(i = 0; i < historyBufferCapacity; ++i)
        {
            if(historyBuffer[i] != INVALID_HISTORY_ENTRY)
                RogueTrainerQuery_IsOfTypeGroup(QUERY_FUNC_EXCLUDE, historyBuffer[i]);
        }

        // Select random
        //
        RogueWeightQuery_Begin();
        {
            RogueWeightQuery_FillWeights(1);

            if(RogueWeightQuery_HasAnyWeights())
            {
                trainerNum = RogueWeightQuery_SelectRandomFromWeights(RogueRandom());
            }
            else
            {
                // Usually, this isn't intentional, so assert here
                AGB_ASSERT(FALSE);

                // We've exhausted the options, so wipe and try again
                memset(&historyBuffer[0], INVALID_HISTORY_ENTRY, sizeof(u16) * historyBufferCapacity);
            }
        }
        RogueWeightQuery_End();
    }

    RogueTrainerQuery_End();

    HistoryBufferPush(&historyBuffer[0], historyBufferCapacity, Rogue_GetTrainerTypeGroupId(trainerNum));
    return trainerNum;
}

void Rogue_ChooseBossTrainersForNewAdventure()
{
    u8 difficulty;
    u16 trainerNum;
    u16 historyBuffer[ROGUE_MAX_BOSS_COUNT];

    memset(&gRogueRun.bossTrainerNums[0], TRAINER_NONE, sizeof(u16) * ARRAY_COUNT(gRogueRun.bossTrainerNums));
    memset(&historyBuffer[0], INVALID_HISTORY_ENTRY, sizeof(u16) * ARRAY_COUNT(historyBuffer));

    DebugPrint("Picking trainers");

    for(difficulty = 0; difficulty < ROGUE_MAX_BOSS_COUNT; ++difficulty)
    {
        // Clear the history buffer, as we track based on types
        // In rainbow mode, the type can only appear once though
        if(!FlagGet(FLAG_ROGUE_RAINBOW_MODE))
        {
            switch(difficulty)
            {
                case ROGUE_ELITE_START_DIFFICULTY:
                case ROGUE_CHAMP_START_DIFFICULTY:
                    memset(&historyBuffer[0], INVALID_HISTORY_ENTRY, sizeof(u16) * ARRAY_COUNT(historyBuffer));
                    break;
            }
        }

        trainerNum = Rogue_ChooseBossTrainerId(difficulty, historyBuffer, ARRAY_COUNT(historyBuffer));
        gRogueRun.bossTrainerNums[difficulty] = trainerNum;

        DebugPrintf("    [%d] = %d '%s'", difficulty, trainerNum, gRogueTrainers[trainerNum].trainerName);
    }
}

u16 Rogue_NextMinibossTrainerId()
{
    // TODO
    return 0;
    //u16 trainerNum = NextTrainerNum(TRAINER_NUM_MINIBOSS_START, TRAINER_NUM_MINIBOSS_END, &gRogueAdvPath.miniBossHistoryBuffer[0], ARRAY_COUNT(gRogueAdvPath.miniBossHistoryBuffer));
    //const struct RogueTrainer* trainer = Rogue_GetTrainer(trainerNum);
//
    //if(trainer != NULL)
    //{
    //    HistoryBufferPush(&gRogueAdvPath.miniBossHistoryBuffer[0], ARRAY_COUNT(gRogueAdvPath.miniBossHistoryBuffer), GetTrainerHistoryKey(trainerNum));
    //}
//
    //return trainerNum;
}

u16 Rogue_NextRouteTrainerId(u16* historyBuffer, u16 bufferCapacity)
{
    // TODO
    return 0;
    //u16 trainerNum = NextTrainerNum(TRAINER_NUM_ROUTE_TRAINER_START, TRAINER_NUM_ROUTE_TRAINER_END, historyBuffer, bufferCapacity);
    //const struct RogueTrainer* trainer = Rogue_GetTrainer(trainerNum);
//
    //if(trainer != NULL)
    //{
    //    HistoryBufferPush(historyBuffer, bufferCapacity, GetTrainerHistoryKey(trainerNum));
    //}
//
    //return trainerNum;
}

void Rogue_GetPreferredElite4Map(u16 trainerNum, s8* mapGroup, s8* mapNum)
{
    u8 type = Rogue_GetTrainerTypeAssignment(trainerNum);
    *mapGroup = gRogueTypeToEliteRoom[type].group;
    *mapNum = gRogueTypeToEliteRoom[type].num;
}

static void ConfigurePartyScratchSettings(u16 trainerNum, struct TrainerPartyScratch* scratch)
{
    // Configure evos, strong presets and legend settings
    switch (Rogue_GetConfigRange(DIFFICULTY_RANGE_TRAINER))
    {
    case DIFFICULTY_LEVEL_EASY:
        if(gRogueRun.currentDifficulty >= 8)
        {
            scratch->allowItemEvos = TRUE;
            scratch->allowWeakLegends = TRUE;
        }
        break;

    case DIFFICULTY_LEVEL_MEDIUM:
        if(gRogueRun.currentDifficulty >= 8)
        {
            scratch->allowStrongLegends = TRUE;
            scratch->preferStrongSpecies = TRUE;
        }
        else if(gRogueRun.currentDifficulty >= 7)
        {
            scratch->allowWeakLegends = TRUE;
        }
        if(gRogueRun.currentDifficulty >= 4)
        {
            scratch->allowItemEvos = TRUE;
        }
        break;

    case DIFFICULTY_LEVEL_HARD:
        if(gRogueRun.currentDifficulty >= 5)
        {
            scratch->allowStrongLegends = TRUE;
            scratch->preferStrongSpecies = TRUE;
        }
        else if(gRogueRun.currentDifficulty >= 2)
        {
            scratch->allowWeakLegends = TRUE;
            scratch->allowItemEvos = TRUE;
        }
        break;

    case DIFFICULTY_LEVEL_BRUTAL:
        if(gRogueRun.currentDifficulty >= 2)
        {
            scratch->allowStrongLegends = TRUE;
            scratch->preferStrongSpecies = TRUE;
        }
        else if(gRogueRun.currentDifficulty >= 1)
        {
            scratch->allowWeakLegends = TRUE;
            scratch->allowItemEvos = TRUE;
        }
        break;
    }
}

static u8 CalculateMonFixedIV(u16 trainerNum)
{
    u8 fixedIV;

    switch (Rogue_GetConfigRange(DIFFICULTY_RANGE_TRAINER))
    {
    case DIFFICULTY_LEVEL_EASY:
        fixedIV = 0;
        break;

    case DIFFICULTY_LEVEL_MEDIUM:
        if(Rogue_IsKeyTrainer(trainerNum))
        {
            if(gRogueRun.currentDifficulty >= 6)
                fixedIV = 16;
            else if(gRogueRun.currentDifficulty >= 5)
                fixedIV = 10;
            else if(gRogueRun.currentDifficulty >= 4)
                fixedIV = 8;
            else if(gRogueRun.currentDifficulty >= 3)
                fixedIV = 6;
            else
                fixedIV = 0;
        }
        else
        {
            fixedIV = 0;
        }
        break;

    case DIFFICULTY_LEVEL_HARD:
        if(Rogue_IsKeyTrainer(trainerNum))
        {
            if(gRogueRun.currentDifficulty >= 12)
                fixedIV = 31;
            else if(gRogueRun.currentDifficulty >= 8)
                fixedIV = 21;
            else if(gRogueRun.currentDifficulty >= 6)
                fixedIV = 19;
            else if(gRogueRun.currentDifficulty >= 3)
                fixedIV = 15;
            else if(gRogueRun.currentDifficulty >= 1)
                fixedIV = 11;
            else
                fixedIV = 5;
        }
        else
        {
            fixedIV = (gRogueRun.currentDifficulty > 8) ? 13 : 5;
        }
        break;

    case DIFFICULTY_LEVEL_BRUTAL:
        if(Rogue_IsKeyTrainer(trainerNum))
        {
            // Bosses are cracked a LOT sooner
            if(gRogueRun.currentDifficulty >= 5)
                fixedIV = 31;
            else if(gRogueRun.currentDifficulty >= 3)
                fixedIV = 21;
            else if(gRogueRun.currentDifficulty >= 1)
                fixedIV = 19;
            else
                fixedIV = 15;
        }
        else
        {
            // Regular trainers scale like hard mode bosses
            if(gRogueRun.currentDifficulty >= 12)
                fixedIV = 31;
            else if(gRogueRun.currentDifficulty >= 8)
                fixedIV = 21;
            else if(gRogueRun.currentDifficulty >= 6)
                fixedIV = 19;
            else if(gRogueRun.currentDifficulty >= 3)
                fixedIV = 15;
            else if(gRogueRun.currentDifficulty >= 1)
                fixedIV = 11;
            else
                fixedIV = 5;
        }
        break;
    }

    return fixedIV;
}


static u8 ShouldTrainerOptimizeCoverage(u16 trainerNum)
{
    switch (Rogue_GetConfigRange(DIFFICULTY_RANGE_TRAINER))
    {
    case DIFFICULTY_LEVEL_EASY:
        return FALSE;

    case DIFFICULTY_LEVEL_MEDIUM:
        if(Rogue_IsKeyTrainer(trainerNum))
        {
            if(gRogueRun.currentDifficulty >= 5)
                return TRUE;
            else
                return FALSE;
        }
        else
        {
            // Misc trainers just have any mons they can
            return FALSE;
        }

    case DIFFICULTY_LEVEL_HARD:
        if(Rogue_IsKeyTrainer(trainerNum))
        {
            if(gRogueRun.currentDifficulty >= 3)
                return TRUE;
            else
                return FALSE;
        }
        else
        {
            // Normal trainers start to optimize coverage from E4 onward
            if(gRogueRun.currentDifficulty >= 8)
                return TRUE;
            else
                return FALSE;
        }

    case DIFFICULTY_LEVEL_BRUTAL:
        return TRUE;
    }

    // Should never get here
    AGB_ASSERT(FALSE);
    return FALSE;
}

static u8 CalculatePartyMonCount(u16 trainerNum, u8 monCapacity)
{
    u8 monCount;

    if(Rogue_IsAnyBossTrainer(trainerNum))
    {
        if(FlagGet(FLAG_ROGUE_GAUNTLET_MODE))
            monCount = 6;
        else
        {
            switch (Rogue_GetConfigRange(DIFFICULTY_RANGE_TRAINER))
            {
            case DIFFICULTY_LEVEL_EASY:
            case DIFFICULTY_LEVEL_MEDIUM:
                if(gRogueRun.currentDifficulty == 0)
                    monCount = 3;
                else if(gRogueRun.currentDifficulty <= 2)
                    monCount = 4;
                else if(gRogueRun.currentDifficulty <= 5)
                    monCount = 5;
                else
                    monCount = 6;
                break;
            
            case DIFFICULTY_LEVEL_HARD:
                if(gRogueRun.currentDifficulty == 0)
                    monCount = 4;
                else if(gRogueRun.currentDifficulty == 1)
                    monCount = 5;
                else
                    monCount = 6;
                break;
            
            case DIFFICULTY_LEVEL_BRUTAL:
                monCount = 6;
                break;
            }
        }
    }
    else
    {
        u8 minMonCount;
        u8 maxMonCount;
        // TODO - Exp trainer support

        if(gRogueRun.currentDifficulty <= 1)
        {
            minMonCount = 1;
            maxMonCount = 2;
        }
        else if(gRogueRun.currentDifficulty <= 2)
        {
            minMonCount = 1;
            maxMonCount = 3;
        }
        else if(gRogueRun.currentDifficulty <= 11)
        {
            minMonCount = 2;
            maxMonCount = 4;
        }
        else
        {
            minMonCount = 3;
            maxMonCount = 4;
        }

        monCount = minMonCount + RogueRandomRange(maxMonCount - minMonCount, FLAG_SET_SEED_TRAINERS);
    }

    //if(trainerPtr->monGenerators->generatorFlags & TRAINER_GENERATOR_FLAG_MIRROR_ANY)
    //{
    //    monCount = gPlayerPartyCount;
    //}

    monCount = min(monCount, monCapacity);
    return monCount;
}

u8 Rogue_CreateTrainerParty(u16 trainerNum, struct Pokemon* party, u8 monCapacity, bool8 firstTrainer)
{
    u8 i;
    u8 monCount;
    u8 level;
    u8 fixedIV;
    u16 species;
    struct TrainerPartyScratch scratch;

    level = GetTrainerLevel(trainerNum);
    fixedIV = CalculateMonFixedIV(trainerNum);
    monCount = CalculatePartyMonCount(trainerNum, monCapacity);

    // Fill defaults before we configure the scratch
    scratch.trainerNum = trainerNum;
    scratch.party = party;
    scratch.partyCapacity = monCapacity;
    scratch.partyCount = 0;
    scratch.shouldRegenerateQuery = TRUE;
    scratch.subsetIndex = 0;
    scratch.subsetSampleCount = 0;
    scratch.fallbackCount = 0;
    scratch.forceLegends = FALSE;
    scratch.evoLevel = level;
    scratch.allowItemEvos = FALSE;
    scratch.allowStrongLegends = FALSE;
    scratch.allowWeakLegends = FALSE;
    scratch.preferStrongSpecies = FALSE;

    ConfigurePartyScratchSettings(trainerNum, &scratch);

    // Generate team
    {
        struct RogueMonPreset preset;

        RogueMonQuery_Begin();

        for(i = 0; i < monCount; ++i)
        {
            species = SampleNextSpecies(&scratch);

            if(RogueDebug_GetConfigToggle(DEBUG_TOGGLE_TRAINER_LVL_5))
                CreateMon(&party[i], species, 5, fixedIV, FALSE, 0, OT_ID_RANDOM_NO_SHINY, 0);
            else
                CreateMon(&party[i], species, level, fixedIV, FALSE, 0, OT_ID_RANDOM_NO_SHINY, 0);

            if(UseCompetitiveMoveset(&scratch, i, monCount) && SelectNextPreset(&scratch, species, i, &preset))
            {
                ModifyTrainerMonPreset(&preset);
                Rogue_ApplyMonPreset(&party[i], level, &preset);
            }

            ++scratch.partyCount;
        }

        RogueMonQuery_End();

        ReorderPartyMons(&scratch, party, monCount);
    }

    // Debug steal team
    if(RogueDebug_GetConfigToggle(DEBUG_TOGGLE_STEAL_TEAM))
    {
        u8 i;
        u16 exp = Rogue_ModifyExperienceTables(1, 100);

        for(i = 0; i < PARTY_SIZE; ++i)
        {
            ZeroMonData(&gPlayerParty[i]);
        }

        gPlayerPartyCount = monCount;

        for(i = 0; i < gPlayerPartyCount; ++i)
        {
            CopyMon(&gPlayerParty[i], &party[i], sizeof(gPlayerParty[i]));

            SetMonData(&gPlayerParty[i], MON_DATA_EXP, &exp);
            CalculateMonStats(&gPlayerParty[i]);
        }
    }

    return monCount;
}

static u16 GetSimilarCheckSpecies(u16 species)
{
#ifdef ROGUE_EXPANSION
    u16 baseSpecies = GET_BASE_SPECIES_ID(species);

    switch (baseSpecies)
    {
    case SPECIES_DEOXYS:
    case SPECIES_BURMY:
    case SPECIES_WORMADAM:
    case SPECIES_SHELLOS:
    case SPECIES_GASTRODON:
    case SPECIES_ROTOM:
    case SPECIES_GIRATINA:
    case SPECIES_SHAYMIN:
    case SPECIES_ARCEUS:
    case SPECIES_BASCULIN:
    case SPECIES_DARMANITAN:
    case SPECIES_DARMANITAN_GALARIAN:
    case SPECIES_DEERLING:
    case SPECIES_SAWSBUCK:
    case SPECIES_TORNADUS:
    case SPECIES_THUNDURUS:
    case SPECIES_LANDORUS:
    case SPECIES_KYUREM:
    case SPECIES_KELDEO:
    case SPECIES_MELOETTA:
    case SPECIES_GENESECT:
    case SPECIES_VIVILLON:
    case SPECIES_FLABEBE:
    case SPECIES_FLOETTE:
    case SPECIES_FLORGES:
    case SPECIES_FURFROU:
    case SPECIES_MEOWSTIC:
    case SPECIES_HOOPA:
    case SPECIES_ORICORIO:
    case SPECIES_LYCANROC:
    case SPECIES_SILVALLY:
    case SPECIES_NECROZMA:
    case SPECIES_TOXTRICITY:
    case SPECIES_SINISTEA:
    case SPECIES_POLTEAGEIST:
    case SPECIES_ALCREMIE:
    case SPECIES_INDEEDEE:
    case SPECIES_ZACIAN:
    case SPECIES_ZAMAZENTA:
    case SPECIES_URSHIFU:
    case SPECIES_CALYREX:
        return baseSpecies;
    }
#endif

    return species;
}

bool8 PartyContainsBaseSpecies(struct Pokemon *party, u8 partyCount, u16 species)
{
    u8 i;
    u16 s;

#ifdef ROGUE_EXPANSION
    species = GET_BASE_SPECIES_ID(species);
#endif

    for(i = 0; i < partyCount; ++i)
    {
        s = GetMonData(&party[i], MON_DATA_SPECIES);
#ifdef ROGUE_EXPANSION
        s = GET_BASE_SPECIES_ID(s);
#endif

        if(s == species)
            return TRUE;
    }

    return FALSE;
}

bool8 PartyContainsSimilarSpecies(struct Pokemon *party, u8 partyCount, u16 species)
{
    u8 i;
    u16 s;

    species = GetSimilarCheckSpecies(species);

    for(i = 0; i < partyCount; ++i)
    {
        s = GetSimilarCheckSpecies(GetMonData(&party[i], MON_DATA_SPECIES));

        if(s == species)
            return TRUE;
    }

    return FALSE;
}

static bool8 FilterOutDuplicateMons(u16 elem, void* usrData)
{
    struct TrainerPartyScratch* scratch = (struct TrainerPartyScratch*)usrData;
    return !PartyContainsSimilarSpecies(scratch->party, scratch->partyCount, elem);
}

static void SetupQueryScriptVars(struct QueryScriptContext* context, struct TrainerPartyScratch* scratch)
{
    if(ShouldTrainerOptimizeCoverage(scratch->trainerNum))
    {
        RogueQueryScript_SetupVarsForParty(context, scratch->party, scratch->partyCount);
    }
    else
    {
        RogueQueryScript_SetupVarsForParty(context, NULL, 0);
    }
}

static u8 SelectFallbackTypeFor(u8 type, u8 counter)
{
    switch(type)
    {
        case TYPE_DARK:
            switch (counter % 2)
            {
            case 0:
                return TYPE_FIGHTING;
            
            case 1:
                return TYPE_PSYCHIC;
            }
            break;

        case TYPE_PSYCHIC:
            switch (counter % 2)
            {
            case 0:
                return TYPE_GHOST;
            
            case 1:
                return TYPE_DARK;
            }
            break;

        case TYPE_STEEL:
            switch (counter % 2)
            {
            case 0:
                return TYPE_GROUND;
            
            case 1:
                return TYPE_DRAGON;
            }
            break;

        case TYPE_FIGHTING:
            switch (counter % 2)
            {
            case 0:
                return TYPE_ROCK;
            
            case 1:
                return TYPE_NORMAL;
            }
            break;

        case TYPE_GHOST:
            switch (counter % 2)
            {
            case 0:
                return TYPE_POISON;
            
            case 1:
                return TYPE_BUG;
            }
            break;

        case TYPE_DRAGON:
            switch (counter % 2)
            {
            case 0:
                return TYPE_FIRE;
            
            case 1:
                return TYPE_WATER;
            }
            break;

        case TYPE_FIRE:
            switch (counter % 2)
            {
            case 0:
                return TYPE_GROUND;
            
            case 1:
                return TYPE_ROCK;
            }
            break;

        case TYPE_FLYING:
            switch (counter % 2)
            {
            case 0:
                return TYPE_NORMAL;
            
            case 1:
                return TYPE_ELECTRIC;
            }
            break;

        case TYPE_ICE:
            switch (counter % 2)
            {
            case 0:
                return TYPE_WATER;
            
            case 1:
                return TYPE_PSYCHIC;
            }
            break;

        case TYPE_NORMAL:
            switch (counter % 2)
            {
            case 0:
                return TYPE_FIGHTING;
            
            case 1:
                return TYPE_GHOST;
            }
            break;
    }

    return TYPE_NONE;
}

static u32 CalculateFallbackTypeFlags(struct TrainerPartyScratch* scratch)
{
    struct RogueTrainer const* trainer = &gRogueTrainers[scratch->trainerNum];
    u8 currentType = trainer->typeAssignment;

    if(scratch->fallbackCount < 10)
    {
        u8 i;

        // Predictably fallback to the next nearest type
        for(i = 0; i < scratch->fallbackCount; ++i)
            currentType = SelectFallbackTypeFor(currentType, scratch->trainerNum + i);
    }
    else
    {
        // If we've gotten this far, yikes!
        AGB_ASSERT(FALSE);
        currentType = TYPE_NONE;
    }

    // Allow everything
    if(currentType == TYPE_NONE)
        return MON_TYPE_VAL_TO_FLAGS(NUMBER_OF_MON_TYPES) - 1;

    // Only allow current type
    return MON_TYPE_VAL_TO_FLAGS(currentType);
}

static u16 SampleNextSpeciesInternal(struct TrainerPartyScratch* scratch)
{
    u16 species;
    struct RogueTrainer const* trainer = &gRogueTrainers[scratch->trainerNum];

    if(scratch->shouldRegenerateQuery)
    {
        u32 fallbackTypeFlags = 0;
        bool8 customScript = FALSE;
        struct RogueTeamGeneratorSubset const* currentSubset = NULL;

        scratch->shouldRegenerateQuery = FALSE;

        if(scratch->subsetIndex < trainer->teamGenerator.subsetCount)
        {
            currentSubset = &trainer->teamGenerator.subsets[scratch->subsetIndex];
        }

        // Execute initialisation
        if(trainer->teamGenerator.queryScriptOverride != NULL)
        {
            struct QueryScriptContext scriptContext;

            // Start with empty, expect override script to set valid species
            RogueMonQuery_Reset(QUERY_FUNC_EXCLUDE);

            RogueQueryScript_SetupScript(&scriptContext, trainer->teamGenerator.queryScriptOverride);
            SetupQueryScriptVars(&scriptContext, scratch);
            RogueQueryScript_Execute(&scriptContext);
            customScript = TRUE;
        }
        else
        {
            RogueMonQuery_IsSpeciesActive();
        }

        if(currentSubset != NULL)
        {
            RogueMonQuery_EvosContainType(QUERY_FUNC_INCLUDE, currentSubset->includedTypeMask);
        }
        else
        {
            fallbackTypeFlags = CalculateFallbackTypeFlags(scratch);
            RogueMonQuery_EvosContainType(QUERY_FUNC_INCLUDE, fallbackTypeFlags);
        }

        // Transform and evolve mons to valid evos (Don't do this for custom scripts for now, as our only use case is glitch mode)
        if(!customScript)
        {
            RogueMonQuery_TransformIntoEggSpecies();
            RogueMonQuery_TransformIntoEvos(scratch->evoLevel, scratch->allowItemEvos, FALSE);
        }

        if(scratch->preferStrongSpecies)
        {
            RogueMonQuery_ContainsPresetFlags(QUERY_FUNC_INCLUDE, MON_FLAG_STRONG);
        }

        if(scratch->forceLegends)
        {
            RogueMonQuery_IsLegendary(QUERY_FUNC_INCLUDE);
        }

        // Specific legendary filter
        {
            // Not allowed any legendary
            if(!scratch->forceLegends && !scratch->allowWeakLegends && !scratch->allowStrongLegends)
                RogueMonQuery_IsLegendary(QUERY_FUNC_EXCLUDE);

            // Only allowed strong legends
            else if(!scratch->allowWeakLegends && scratch->allowStrongLegends)
                RogueMonQuery_IsLegendaryWithPresetFlags(QUERY_FUNC_INCLUDE, MON_FLAG_STRONG);

            // Only allowed weak legends
            else if(scratch->allowWeakLegends && !scratch->allowStrongLegends)
                RogueMonQuery_IsLegendaryWithPresetFlags(QUERY_FUNC_EXCLUDE, MON_FLAG_STRONG);
        }


        if(currentSubset != NULL)
        {
            RogueMonQuery_IsOfType(QUERY_FUNC_INCLUDE, currentSubset->includedTypeMask);
            RogueMonQuery_IsOfType(QUERY_FUNC_EXCLUDE, currentSubset->excludedTypeMask);
        }
        else
        {
            RogueMonQuery_IsOfType(QUERY_FUNC_INCLUDE, fallbackTypeFlags);
        }

        // Execute post process script
        if(trainer->teamGenerator.queryScriptPost != NULL)
        {
            struct QueryScriptContext scriptContext;
            RogueQueryScript_SetupScript(&scriptContext, trainer->teamGenerator.queryScriptPost);
            SetupQueryScriptVars(&scriptContext, scratch);
            RogueQueryScript_Execute(&scriptContext);
        }
    }

    // Remove any mons already in the party
    RogueMonQuery_CustomFilter(FilterOutDuplicateMons, scratch);

    species = SPECIES_NONE;

    RogueWeightQuery_Begin();

    if(trainer->teamGenerator.weightScript != NULL)
    {
        struct QueryScriptContext scriptContext;
        RogueQueryScript_SetupScript(&scriptContext, trainer->teamGenerator.weightScript);
        SetupQueryScriptVars(&scriptContext, scratch);
        RogueWeightQuery_CalculateWeights(RogueQueryScript_CalculateWeightsCallback, &scriptContext);
    }
    else
    {
        RogueWeightQuery_FillWeights(1);
    }

    if(RogueWeightQuery_HasAnyWeights())
    {
        species = RogueWeightQuery_SelectRandomFromWeights(RogueRandom());
    }

    RogueWeightQuery_End();

    return species;
}

static u16 SampleNextSpecies(struct TrainerPartyScratch* scratch)
{
    u16 species;
    struct RogueTrainer const* trainer = &gRogueTrainers[scratch->trainerNum];

    do
    {
        // If we have valid subsets remaining and we're a boss, force the final mons to be legends
        if(scratch->subsetIndex < trainer->teamGenerator.subsetCount && Rogue_IsBossTrainer(scratch->trainerNum))
        {
            if(gRogueRun.currentDifficulty == ROGUE_MAX_BOSS_COUNT - 1 && scratch->partyCount == 4)
            {
                scratch->forceLegends = TRUE;
                scratch->shouldRegenerateQuery = TRUE;
            }
            else if(gRogueRun.currentDifficulty == ROGUE_MAX_BOSS_COUNT - 2 && scratch->partyCount == 5)
            {
                scratch->forceLegends = TRUE;
                scratch->shouldRegenerateQuery = TRUE;
            }
        }
        else
        {
            scratch->forceLegends = FALSE;
        }

        species = SampleNextSpeciesInternal(scratch);

        if(species == SPECIES_NONE)
        {
            // Just put it to some really high number if we failed, as we need to move to the next subset
            scratch->subsetSampleCount = 128;
        }

        if(scratch->subsetIndex < trainer->teamGenerator.subsetCount)
        {
            ++scratch->subsetSampleCount;
            if(scratch->subsetSampleCount >= trainer->teamGenerator.subsets[scratch->subsetIndex].maxSamples)
            {
                ++scratch->subsetIndex;
                scratch->subsetSampleCount = 0;
                scratch->shouldRegenerateQuery = TRUE;

                if(scratch->subsetIndex >= trainer->teamGenerator.subsetCount)
                {
                    ++scratch->fallbackCount;
                }
            }
        }
        else
        {
            if(scratch->fallbackCount == 255)
            {
                // If we've got here, we must've ran out in options in the fallback/all type subset
                AGB_ASSERT(FALSE);
                return SPECIES_MAGIKARP;
            }
            else if(scratch->fallbackCount != 0)
            {
                ++scratch->fallbackCount;
                scratch->shouldRegenerateQuery = TRUE;
            }
        }
    }
    while(species == SPECIES_NONE);

    return species;
}

static bool8 UseCompetitiveMoveset(struct TrainerPartyScratch* scratch, u8 monIdx, u8 totalMonCount)
{
    bool8 preferCompetitive = FALSE;
    bool8 result = FALSE;
    u8 difficultyLevel = gRogueRun.currentDifficulty;
    u8 difficultyModifier = 1; // TODO - GetRoomTypeDifficulty();

    //if(sTrainerScratch->monGenerator.generatorFlags & TRAINER_GENERATOR_FLAG_MIRROR_EXACT)
    //{
    //    // Exact mirror force competitive set and we'll override it later
    //    return TRUE;
    //}

    if(gRogueAdvPath.currentRoomType == ADVPATH_ROOM_LEGENDARY || difficultyModifier == 2) // HARD
    {
        // For regular trainers, Last and first mon can have competitive sets
        preferCompetitive = (monIdx == 0 || monIdx == (totalMonCount - 1));
    }

#ifdef ROGUE_FEATURE_AUTOMATION
    if(Rogue_AutomationGetFlag(AUTO_FLAG_TRAINER_FORCE_COMP_MOVESETS))
    {
        return TRUE;
    }
#endif

    if(FlagGet(FLAG_ROGUE_GAUNTLET_MODE))
    {
        return Rogue_IsAnyBossTrainer(scratch->trainerNum);
    }

    switch (Rogue_GetConfigRange(DIFFICULTY_RANGE_TRAINER))
    {
    case DIFFICULTY_LEVEL_EASY:
        return FALSE;

    case DIFFICULTY_LEVEL_MEDIUM:
        // Start using competitive movesets on 3rd gym
        if(difficultyLevel == 0) // Last mon has competitive set
            return FALSE;
        else if(difficultyLevel == 1)
            return (preferCompetitive || Rogue_IsAnyBossTrainer(scratch->trainerNum)) && monIdx == (totalMonCount - 1);
        else
            return (preferCompetitive || Rogue_IsAnyBossTrainer(scratch->trainerNum));

    case DIFFICULTY_LEVEL_HARD:
        if(difficultyLevel == 0) // Last mon has competitive set
            return (preferCompetitive || Rogue_IsAnyBossTrainer(scratch->trainerNum)) && monIdx == (totalMonCount - 1);
        else if(difficultyLevel == 1)
            return (preferCompetitive || Rogue_IsAnyBossTrainer(scratch->trainerNum));
        else
            return TRUE;

    case DIFFICULTY_LEVEL_BRUTAL:
        return TRUE;
    }

    return FALSE;
}

static bool8 SelectNextPreset(struct TrainerPartyScratch* scratch, u16 species, u8 monIdx, struct RogueMonPreset* outPreset)
{
    u8 i;
    u8 presetCount = gPresetMonTable[species].presetCount;

    // Exact mirror copy trainer party
    //if(sTrainerScratch->monGenerator.generatorFlags & TRAINER_GENERATOR_FLAG_MIRROR_EXACT)
    //{
    //    outPreset->allowMissingMoves = TRUE;
    //    outPreset->heldItem = GetMonData(&gPlayerParty[monIdx], MON_DATA_HELD_ITEM);
    //    outPreset->abilityNum = GetMonAbility(&gPlayerParty[monIdx]);
    //    outPreset->hiddenPowerType = CalcMonHiddenPowerType(&gPlayerParty[monIdx]);
    //    outPreset->flags = 0;
//
    //    for(i = 0; i < MAX_MON_MOVES; ++i)
    //        outPreset->moves[i] = GetMonData(&gPlayerParty[monIdx], MON_DATA_MOVE1 + i);
//
    //    return TRUE;
    //}

    if(presetCount != 0)
    {
        const struct RogueMonPreset* currPreset;
        bool8 isPresetValid;
        u8 randOffset = (presetCount == 1 ? 0 : RogueRandomRange(presetCount, FLAG_SET_SEED_TRAINERS));
        
        // Work from random offset and attempt to find the best preset which slots into this team
        // If none is found, we will use the last option and adjust below
        for(i = 0; i < presetCount; ++i)
        {
            currPreset = &gPresetMonTable[species].presets[((randOffset + i) % presetCount)];
            isPresetValid = TRUE;

            if(currPreset->heldItem == ITEM_LEFTOVERS && scratch->heldItems.hasLeftovers)
            {
                isPresetValid = FALSE;
            }

            if(currPreset->heldItem == ITEM_SHELL_BELL && scratch->heldItems.hasShellbell)
            {
                isPresetValid = FALSE;
            }

#ifdef ROGUE_EXPANSION
            if(!IsMegaEvolutionEnabled())
            {
                // Special case for primal reversion
                if(currPreset->heldItem == ITEM_RED_ORB || currPreset->heldItem == ITEM_BLUE_ORB)
                {
                    isPresetValid = FALSE;
                }
            }

            if(scratch->heldItems.hasMegaStone || !IsMegaEvolutionEnabled())
            {
                if(currPreset->heldItem >= ITEM_VENUSAURITE && currPreset->heldItem <= ITEM_DIANCITE)
                {
                    isPresetValid = FALSE;
                }
            }

            if(scratch->heldItems.hasZCrystal || !IsZMovesEnabled())
            {
                if(currPreset->heldItem >= ITEM_NORMALIUM_Z && currPreset->heldItem <= ITEM_ULTRANECROZIUM_Z)
                {
                    isPresetValid = FALSE;
                }
            }
#endif

            if(isPresetValid)
            {
                break;
            }
        }

        memcpy(outPreset, currPreset, sizeof(struct RogueMonPreset));

        // Swap out limited count items, if they already exist
        if(!isPresetValid)
        {
            if(outPreset->heldItem == ITEM_LEFTOVERS && scratch->heldItems.hasLeftovers)
            {
                // Swap left overs to shell bell
                outPreset->heldItem = ITEM_SHELL_BELL;
            }

            if(outPreset->heldItem == ITEM_SHELL_BELL && scratch->heldItems.hasShellbell)
            {
                // Swap shell bell to NONE (i.e. berry)
                outPreset->heldItem = ITEM_NONE;
            }

#ifdef ROGUE_EXPANSION
            if(!IsMegaEvolutionEnabled())
            {
                // Special case for primal reversion
                if(currPreset->heldItem == ITEM_RED_ORB || currPreset->heldItem == ITEM_BLUE_ORB)
                {
                    outPreset->heldItem = ITEM_NONE;
                }
            }

            if(scratch->heldItems.hasMegaStone || !IsMegaEvolutionEnabled())
            {
                if(currPreset->heldItem >= ITEM_VENUSAURITE && currPreset->heldItem <= ITEM_DIANCITE)
                {
                    outPreset->heldItem = ITEM_NONE;
                }
            }

            if(scratch->heldItems.hasZCrystal || !IsZMovesEnabled())
            {
                if(currPreset->heldItem >= ITEM_NORMALIUM_Z && currPreset->heldItem <= ITEM_ULTRANECROZIUM_Z)
                {
                    outPreset->heldItem = ITEM_NONE;
                }
            }
#endif
        }

        if(outPreset->heldItem == ITEM_NONE)
        {
            // Swap empty item to a berry either lum or sitrus
            outPreset->heldItem = RogueRandomRange(2, FLAG_SET_SEED_TRAINERS) == 0 ? ITEM_LUM_BERRY : ITEM_SITRUS_BERRY;
        }
        else if(outPreset->heldItem == ITEM_LEFTOVERS)
        {
            scratch->heldItems.hasLeftovers = TRUE;
        }
        else if(outPreset->heldItem == ITEM_SHELL_BELL)
        {
            scratch->heldItems.hasShellbell = TRUE;
        }
#ifdef ROGUE_EXPANSION
        else if(currPreset->heldItem >= ITEM_VENUSAURITE && currPreset->heldItem <= ITEM_DIANCITE)
        {
            scratch->heldItems.hasMegaStone = TRUE;
        }
        else if(currPreset->heldItem >= ITEM_NORMALIUM_Z && currPreset->heldItem <= ITEM_ULTRANECROZIUM_Z)
        {
            scratch->heldItems.hasZCrystal = TRUE;
        }
#endif

        return TRUE;
    }

    return FALSE;
}


static bool8 MonPresetHasChoiceItem(struct RogueMonPreset* preset)
{
    return preset->heldItem == ITEM_CHOICE_BAND
#ifdef ROGUE_EXPANSION
        || preset->heldItem == ITEM_CHOICE_SPECS
        || preset->heldItem == ITEM_CHOICE_SCARF
#endif
    ;
}

static u8 MonPresetCountMoves(struct RogueMonPreset* preset)
{
    u8 i;
    u8 count = 0;

    for(i = 0; i < MAX_MON_MOVES; ++i)
    {
        if(preset->moves[i] != MOVE_NONE)
            ++count;
    }

    return count;
}

static bool8 MonPresetReplaceMove(struct RogueMonPreset* preset, u16 fromMove, u16 toMove)
{
    u8 i;

    for(i = 0; i < MAX_MON_MOVES; ++i)
    {
        if(preset->moves[i] == fromMove)
            preset->moves[i] == toMove;
    }
}

static void ModifyTrainerMonPreset(struct RogueMonPreset* preset)
{
#ifndef ROGUE_EXPANSION
    // Vanilla only: AI can't use trick
    if(MonPresetReplaceMove(preset, MOVE_TRICK, MOVE_NONE))
        preset->allowMissingMoves = TRUE;
#endif

    // Edge case to handle scarfed ditto
    if(MonPresetHasChoiceItem(preset) && (MonPresetCountMoves(preset) > 2))
    {
        // Need to make sure this mon only has attacking moves
        u8 i = 0;
        preset->allowMissingMoves = TRUE;

        for(i = 0; i < MAX_MON_MOVES; ++i)
        {
            if(gBattleMoves[preset->moves[i]].power == 0)
                preset->moves[i] = MOVE_NONE;
        }
    }
}

static void SwapMons(u8 aIdx, u8 bIdx, struct Pokemon *party)
{
    if(aIdx != bIdx)
    {
        struct Pokemon tempMon;
        CopyMon(&tempMon, &party[aIdx], sizeof(struct Pokemon));

        CopyMon(&party[aIdx], &party[bIdx], sizeof(struct Pokemon));
        CopyMon(&party[bIdx], &tempMon, sizeof(struct Pokemon));
    }
}

// + go to the front - go to the back
s16 CalulcateMonSortScore(struct Pokemon* mon)
{
    s16 score = 0;
    u16 species = GetMonData(mon, MON_DATA_SPECIES);
    u16 item = GetMonData(mon, MON_DATA_HELD_ITEM);

#ifdef ROGUE_EXPANSION
    if(((item >= ITEM_VENUSAURITE && item <= ITEM_DIANCITE) || (item >= ITEM_NORMALIUM_Z && item <= ITEM_ULTRANECROZIUM_Z)))
    {
        score -= 20;
    }
#endif

    if(RoguePokedex_IsSpeciesLegendary(species))
    {
        score -= 20;
    }

    if(RoguePokedex_GetSpeciesBST(species) >= 540)
    {
        // Put high BST mons in the back of the party
        score -= 10;
    }

    // Early pri moves
    //
    if(MonKnowsMove(mon, MOVE_FAKE_OUT))
    {
        score += 1;
    }
    if(MonKnowsMove(mon, MOVE_LIGHT_SCREEN))
    {
        score += 1;
    }
    if(MonKnowsMove(mon, MOVE_REFLECT))
    {
        score += 1;
    }
    if(MonKnowsMove(mon, MOVE_SPIKES))
    {
        score += 1;
    }

    if(MonKnowsMove(mon, MOVE_TAUNT))
    {
        score += 1;
    }

    if(MonKnowsMove(mon, MOVE_TRICK))
    {
        score += 1;
    }

    if(MonKnowsMove(mon, MOVE_TOXIC))
    {
        score += 1;
    }

    if(MonKnowsMove(mon, MOVE_BATON_PASS))
    {
        score += 1;

        // Only prioritse sub if we want to baton pass out
        if(MonKnowsMove(mon, MOVE_SUBSTITUTE))
        {
            score += 1;
        }
    }

#ifdef ROGUE_EXPANSION
    if(MonKnowsMove(mon, MOVE_U_TURN))
    {
        score += 1;
    }

    if(MonKnowsMove(mon, MOVE_FLIP_TURN))
    {
        score += 1;
    }

    if(MonKnowsMove(mon, MOVE_PARTING_SHOT))
    {
        score += 1;
    }

    if(MonKnowsMove(mon, MOVE_VOLT_SWITCH))
    {
        score += 1;
    }

    if(MonKnowsMove(mon, MOVE_TOXIC_SPIKES))
    {
        score += 1;
    }

    if(MonKnowsMove(mon, MOVE_STEALTH_ROCK))
    {
        score += 1;
    }

    if(MonKnowsMove(mon, MOVE_STICKY_WEB))
    {
        score += 1;
    }

    if(MonKnowsMove(mon, MOVE_TRICK_ROOM))
    {
        score += 1;
    }
#endif

    return score;
}

static void ReorderPartyMons(struct TrainerPartyScratch* scratch, struct Pokemon *party, u8 monCount)
{
    bool8 keepExistingLead = FALSE;
    bool8 reorganiseParty = FALSE;
    bool8 clampLeadScore = FALSE;

    if(Rogue_IsAnyBossTrainer(scratch->trainerNum))
    {
        if(!FlagGet(FLAG_ROGUE_GAUNTLET_MODE) && Rogue_GetConfigRange(DIFFICULTY_RANGE_TRAINER) < DIFFICULTY_LEVEL_HARD && gRogueRun.currentDifficulty < 8)
        {
            // Prior to E4 we don't want to force forward the best lead mon
            // We just want to push final mons to the back
            clampLeadScore = TRUE;
        }

        reorganiseParty = TRUE;
    }
    else
    {
        // Basic trainers don't care and can do whatever with their team order
        reorganiseParty = FALSE;
    }

    if(reorganiseParty)
    {
        u16 i;
        s16 scoreA, scoreB;
        bool8 anySwaps;
        u16 startIndex = keepExistingLead ? 1 : 0;
        u16 sortLength = monCount - 1;

        // Bubble sort party
        while(sortLength != 0)
        {
            anySwaps = FALSE;

            for(i = startIndex; i < monCount - 1; ++i)
            {
                scoreA = CalulcateMonSortScore(&party[i]);
                scoreB = CalulcateMonSortScore(&party[i + 1]);

                if(clampLeadScore)
                {
                    scoreA = min(scoreA, 0);
                    scoreB = min(scoreB, 0);
                }
                
                if(scoreB > scoreA)
                {
                    anySwaps = TRUE;
                    SwapMons(i, i + 1, party);
                }
            }
        
            if(anySwaps)
                --sortLength;
            else
                sortLength = 0;
        }
    }
}