// from https://github.com/hedara90/pokeemerald-expansion/tree/print-mons-json

#include "global.h"
#include "battle.h"
#include "battle_main.h"
#include "pokemon.h"
#include "test/test.h"
#include "constants/abilities.h"
#include "rogue.h"
#include "rogue_baked.h"

TEST("Print data")
{
    u32 endVal = NUM_SPECIES;
    DebugPrint("[");
    for (u32 i = 1; i < endVal; i++)
    {
        const struct SpeciesInfo *currSpecies = &gSpeciesInfo[i];

        //  Detect if species has data
        if (currSpecies->baseHP == 0)
            continue;

        //  Start printing species data
        DebugPrint("\t{");
        //  Print species name
        DebugPrintf("\t\t\"speciesName\": \"%S\",", currSpecies->speciesName);

        //  Print types
        if (currSpecies->types[0] != currSpecies->types[1])
            DebugPrintf("\t\t\"types\": [\"%S\", \"%S\"],", gTypeNames[currSpecies->types[0]], gTypeNames[currSpecies->types[1]]);
        else
            DebugPrintf("\t\t\"types\": [\"%S\"],", gTypeNames[currSpecies->types[0]]);

        //  Print stats
        DebugPrint("\t\t\"stats\": {");
        DebugPrintf("\t\t\t\"hp\": %u,", currSpecies->baseHP);
        DebugPrintf("\t\t\t\"attack\": %u,", currSpecies->baseAttack);
        DebugPrintf("\t\t\t\"defense\": %u,", currSpecies->baseDefense);
        DebugPrintf("\t\t\t\"spAttack\": %u,", currSpecies->baseSpAttack);
        DebugPrintf("\t\t\t\"spDefense\": %u,", currSpecies->baseSpDefense);
        DebugPrintf("\t\t\t\"speed\": %u", currSpecies->baseSpeed);
        DebugPrint("\t\t},");

        //  Print abilities
        if (currSpecies->abilities[0] != currSpecies->abilities[1] && currSpecies->abilities[1] != ABILITY_NONE)
            DebugPrintf("\t\t\"abilities\": [\"%S\", \"%S\"],", gAbilityNames[currSpecies->abilities[0]], gAbilityNames[currSpecies->abilities[1]]);
        else
            DebugPrintf("\t\t\"abilities\": [\"%S\"],", gAbilityNames[currSpecies->abilities[0]]);
        if (currSpecies->abilities[2] != ABILITY_NONE)
            DebugPrintf("\t\t\"hiddenAbility\": \"%S\",", gAbilityNames[currSpecies->abilities[2]]);

        //  Various data
        DebugPrintf("\t\t\"catchRate\": %u,", currSpecies->catchRate);
        DebugPrintf("\t\t\"expYield\": %u,", currSpecies->expYield);
        DebugPrintf("\t\t\"eggCycles\": %u,", currSpecies->eggCycles);
        DebugPrintf("\t\t\"monCategory\": \"%S\",", currSpecies->categoryName);
        DebugPrintf("\t\t\"natDexNum\": %u,", currSpecies->natDexNum);
        if (currSpecies->formSpeciesIdTable != NULL) {
            DebugPrint("\t\t\"forms\": [");
            for (u32 j = 0; currSpecies->formSpeciesIdTable[j] != FORM_SPECIES_END; j++) {
                if (currSpecies->formSpeciesIdTable[j + 1] != FORM_SPECIES_END)
                    DebugPrintf("\t\t\t%u,", currSpecies->formSpeciesIdTable[j]);
                else
                    DebugPrintf("\t\t\t%u", currSpecies->formSpeciesIdTable[j]);
            }
            DebugPrint("\t\t],");
        }
        if (currSpecies->formChangeTable != NULL) {
            struct FormChange formChange;
            Rogue_ModifyFormChange(i, 0, &formChange);
            DebugPrint("\t\t\"formChanges\": [");
            for (u32 j = 0; TRUE; j++) {
                if (formChange.method == FORM_CHANGE_TERMINATOR)
                    break;

                u16 targetSpecies = formChange.targetSpecies;
                Rogue_ModifyFormChange(i, j + 1, &formChange);
                if (formChange.method != FORM_CHANGE_TERMINATOR)
                    DebugPrintf("\t\t\t%u,", targetSpecies);
                else
                    DebugPrintf("\t\t\t%u", targetSpecies);
            }
            DebugPrint("\t\t],");
        }

        //  Print forms
        if (currSpecies->isMegaEvolution)
            DebugPrint("\t\t\"form\": \"mega\",");
        else if (currSpecies->isPrimalReversion)
            DebugPrint("\t\t\"form\": \"primalReversion\",");
        else if (currSpecies->isUltraBeast)
            DebugPrint("\t\t\"form\": \"ultraBurst\",");
        else if (currSpecies->isGigantamax)
            DebugPrint("\t\t\"form\": \"gigantamax\",");
        else if (currSpecies->isTeraForm)
            DebugPrint("\t\t\"form\": \"tera\",");
        else if (currSpecies->isAlolanForm)
            DebugPrint("\t\t\"form\": \"alola\",");
        else if (currSpecies->isGalarianForm)
            DebugPrint("\t\t\"form\": \"galar\",");
        else if (currSpecies->isHisuianForm)
            DebugPrint("\t\t\"form\": \"hisui\",");
        else if (currSpecies->isPaldeanForm)
            DebugPrint("\t\t\"form\": \"paldea\",");

        DebugPrintf("\t\t\"internalId\": %u", i);

        if (i == endVal - 1)
            DebugPrint("\t}");
        else
            DebugPrint("\t},");
    }
    DebugPrint("]");
}
