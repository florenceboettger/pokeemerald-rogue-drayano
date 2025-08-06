// from https://github.com/hedara90/pokeemerald-expansion/tree/print-mons-json

#include "global.h"
#include "battle.h"
#include "battle_main.h"
#include "pokemon.h"
#include "test/test.h"
#include "constants/abilities.h"
#include "rogue.h"

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
        if (currSpecies->isMegaEvolution || currSpecies->isGigantamax)
            DebugPrintf("\t\t\"internalId\": %u,", i);
        else
            DebugPrintf("\t\t\"internalId\": %u", i);

        //  Print forms
        if (currSpecies->isMegaEvolution)
            DebugPrint("\t\t\"form\": \"mega\"");
        else if (currSpecies->isGigantamax)
            DebugPrint("\t\t\"form\": \"gigantamax\"");

        if (i == endVal - 1)
            DebugPrint("\t}");
        else
            DebugPrint("\t},");
    }
    DebugPrint("]");
}
