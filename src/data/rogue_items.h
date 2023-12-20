#include "graphics.h"

extern const u8 gItemDesc_LinkCable[];
extern const u8 gItemDesc_QuestLog[];
extern const u8 gItemDesc_HealingFlask[];
extern const u8 gItemDesc_RidingWhistle[];
extern const u8 gItemDesc_GoldRidingWhistle[];
extern const u8 gItemDesc_CGear[];
extern const u8 gItemDesc_BuildingSupplies[];
extern const u8 gItemDesc_PokeblockDispenser[];

extern const u8 gItemDesc_NormalPokeblock[];
extern const u8 gItemDesc_FightingPokeblock[];
extern const u8 gItemDesc_FlyingPokeblock[];
extern const u8 gItemDesc_PoisonPokeblock[];
extern const u8 gItemDesc_GroundPokeblock[];
extern const u8 gItemDesc_RockPokeblock[];
extern const u8 gItemDesc_BugPokeblock[];
extern const u8 gItemDesc_GhostPokeblock[];
extern const u8 gItemDesc_SteelPokeblock[];
extern const u8 gItemDesc_FirePokeblock[];
extern const u8 gItemDesc_WaterPokeblock[];
extern const u8 gItemDesc_GrassPokeblock[];
extern const u8 gItemDesc_ElectricPokeblock[];
extern const u8 gItemDesc_PsychicPokeblock[];
extern const u8 gItemDesc_IcePokeblock[];
extern const u8 gItemDesc_DragonPokeblock[];
extern const u8 gItemDesc_DarkPokeblock[];
extern const u8 gItemDesc_FairyPokeblock[];
extern const u8 gItemDesc_ShinyPokeblock[];
extern const u8 gItemDesc_StatPokeblock[];

extern const u8 gItemDesc_ShopPriceCharm[];
extern const u8 gItemDesc_ShopPriceCurse[];
extern const u8 gItemDesc_FlinchCharm[];
extern const u8 gItemDesc_FlinchCurse[];
extern const u8 gItemDesc_CritCharm[];
extern const u8 gItemDesc_CritCurse[];
extern const u8 gItemDesc_ShedSkinCharm[];
extern const u8 gItemDesc_ShedSkinCurse[];
extern const u8 gItemDesc_WildIVCharm[];
extern const u8 gItemDesc_WildIVCurse[];
extern const u8 gItemDesc_CatchingCharm[];
extern const u8 gItemDesc_CatchingCurse[];
extern const u8 gItemDesc_GraceCharm[];
extern const u8 gItemDesc_GraceCurse[];
extern const u8 gItemDesc_WildCharm[];
extern const u8 gItemDesc_WildCurse[];
extern const u8 gItemDesc_PriorityCharm[];
extern const u8 gItemDesc_PriorityCurse[];
extern const u8 gItemDesc_EndureCharm[];
extern const u8 gItemDesc_EndureCurse[];
extern const u8 gItemDesc_PartyCurse[];
extern const u8 gItemDesc_EverstoneCurse[];
extern const u8 gItemDesc_BattleItemCurse[];
extern const u8 gItemDesc_SpeciesClauseCurse[];
extern const u8 gItemDesc_ItemShuffleCurse[];

const struct RogueItem gRogueItems[ITEM_ROGUE_ITEM_COUNT] =
{
    [ITEM_LINK_CABLE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Link Cable"),
#else
        .name = _("LINK CABLE"),
#endif
        .itemId = ITEM_LINK_CABLE,
        .price = 2100,
        .description = gItemDesc_LinkCable,
        .pocket = POCKET_HELD_ITEMS,
        .iconImage = gItemIcon_ExpShare,
        .iconPalette = gItemIconPalette_ExpShare,
    },

    [ITEM_QUEST_LOG - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Quest Book"),
#else
        .name = _("QUEST BOOK"),
#endif
        .itemId = ITEM_QUEST_LOG,
        .price = 0,
        .description = gItemDesc_QuestLog,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .fieldUseFunc = ItemUseOutOfBattle_QuestLog,
        .iconImage = gItemIcon_QuestBook,
        .iconPalette = gItemIconPalette_QuestBook,
    },

    [ITEM_HEALING_FLASK - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Healing Flask"),
#else
        .name = _("HEALING FLASK"),
#endif
        .itemId = ITEM_HEALING_FLASK,
        .price = 0,
        .description = gItemDesc_HealingFlask,
        .pocket = POCKET_KEY_ITEMS,
        .registrability = TRUE,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_HealingFlask,
        .iconImage = gItemIcon_Potion,
        .iconPalette = gItemIconPalette_HealingFlask,
    },

    [ITEM_BASIC_RIDING_WHISTLE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Poké Whistle"),
#else
        .name = _("POKé WHISTLE"),
#endif
        .itemId = ITEM_BASIC_RIDING_WHISTLE, 
        .price = 0,
        .description = gItemDesc_RidingWhistle,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_RideMon,
        .secondaryId = RIDE_WHISTLE_BASIC,
        .registrability = TRUE,
        .iconImage = gItemIcon_PokeWhistle,
        .iconPalette = gItemIconPalette_PokeWhistleBasic,
    },

    [ITEM_GOLD_RIDING_WHISTLE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Gold Whistle"),
#else
        .name = _("GOLD WHISTLE"),
#endif
        .itemId = ITEM_GOLD_RIDING_WHISTLE,
        .price = 0,
        .description = gItemDesc_GoldRidingWhistle,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_RideMon,
        .secondaryId = RIDE_WHISTLE_GOLD,
        .registrability = TRUE,
        .iconImage = gItemIcon_PokeWhistle,
        .iconPalette = gItemIconPalette_PokeWhistleGold,
    },

    [ITEM_C_GEAR - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("C-Gear"),
#else
        .name = _("C-GEAR"),
#endif
        .itemId = ITEM_C_GEAR,
        .price = 0,
        .description = gItemDesc_CGear,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CGear,
        .secondaryId = 0,
        .registrability = TRUE,
        .iconImage = gItemIcon_CGear,
        .iconPalette = gItemIconPalette_CGear,
    },
    
    [ITEM_BUILDING_SUPPLIES - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Build Parts"),
#else
        .name = _("BUILD PARTS"),
#endif
        .itemId = ITEM_BUILDING_SUPPLIES,
        .price = 0,
        .description = gItemDesc_BuildingSupplies,
        .pocket = POCKET_KEY_ITEMS,
        .registrability = FALSE,
        .iconImage = gItemIcon_CGear,
        .iconPalette = gItemIconPalette_CGear, // todo - need to fixup
        //.iconImage = gItemIcon_OaksParcel,
        //.iconPalette = gItemIconPalette_OaksParcel,
    },
    [ITEM_POKEBLOCK_DISPENSER - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("{POKEBLOCK} Spray"),
#else
        .name = _("{POKEBLOCK} SPRAY"),
#endif
        .itemId = ITEM_POKEBLOCK_DISPENSER,
        .price = 0,
        .description = gItemDesc_PokeblockDispenser,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .registrability = TRUE,
        .iconImage = gItemIcon_PokeblockCase,
        .iconPalette = gItemIconPalette_PokeblockCase,
    },

    // Pokeblock
    //
    [ITEM_POKEBLOCK_NORMAL - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Normal {POKEBLOCK}"),
#else
        .name = _("NORMAL {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_NORMAL,
        .secondaryId = TYPE_NORMAL,
        .price = 0,
        .description = gItemDesc_NormalPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockNormal,
    },
    [ITEM_POKEBLOCK_FIGHTING - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Fight. {POKEBLOCK}"),
#else
        .name = _("FIGHT. {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_FIGHTING,
        .secondaryId = TYPE_FIGHTING,
        .price = 0,
        .description = gItemDesc_FightingPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockFighting,
    },
    [ITEM_POKEBLOCK_FLYING - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Flying {POKEBLOCK}"),
#else
        .name = _("FLYING {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_FLYING,
        .secondaryId = TYPE_FLYING,
        .price = 0,
        .description = gItemDesc_FlyingPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockFlying,
    },
    [ITEM_POKEBLOCK_POISON - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Poison {POKEBLOCK}"),
#else
        .name = _("POISON {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_POISON,
        .secondaryId = TYPE_POISON,
        .price = 0,
        .description = gItemDesc_PoisonPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockPoison,
    },
    [ITEM_POKEBLOCK_GROUND - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Ground {POKEBLOCK}"),
#else
        .name = _("GROUND {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_GROUND,
        .secondaryId = TYPE_GROUND,
        .price = 0,
        .description = gItemDesc_GroundPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockGround,
    },
    [ITEM_POKEBLOCK_ROCK - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Rock {POKEBLOCK}"),
#else
        .name = _("ROCK {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_ROCK,
        .secondaryId = TYPE_ROCK,
        .price = 0,
        .description = gItemDesc_RockPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockRock,
    },
    [ITEM_POKEBLOCK_BUG - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Bug {POKEBLOCK}"),
#else
        .name = _("BUG {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_BUG,
        .secondaryId = TYPE_BUG,
        .price = 0,
        .description = gItemDesc_BugPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockBug,
    },
    [ITEM_POKEBLOCK_GHOST - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Ghost {POKEBLOCK}"),
#else
        .name = _("GHOST {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_GHOST,
        .secondaryId = TYPE_GHOST,
        .price = 0,
        .description = gItemDesc_GhostPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockGhost,
    },
    [ITEM_POKEBLOCK_STEEL - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Steel {POKEBLOCK}"),
#else
        .name = _("STEEL {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_STEEL,
        .secondaryId = TYPE_STEEL,
        .price = 0,
        .description = gItemDesc_SteelPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockSteel,
    },
    [ITEM_POKEBLOCK_FIRE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Fire {POKEBLOCK}"),
#else
        .name = _("FIRE {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_FIRE,
        .secondaryId = TYPE_FIRE,
        .price = 0,
        .description = gItemDesc_FirePokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockFire,
    },
    [ITEM_POKEBLOCK_WATER - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Water {POKEBLOCK}"),
#else
        .name = _("WATER {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_WATER,
        .secondaryId = TYPE_WATER,
        .price = 0,
        .description = gItemDesc_WaterPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockWater,
    },
    [ITEM_POKEBLOCK_GRASS - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Grass {POKEBLOCK}"),
#else
        .name = _("GRASS {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_GRASS,
        .secondaryId = TYPE_GRASS,
        .price = 0,
        .description = gItemDesc_GrassPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockGrass,
    },
    [ITEM_POKEBLOCK_ELECTRIC - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Elec. {POKEBLOCK}"),
#else
        .name = _("ELEC. {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_ELECTRIC,
        .secondaryId = TYPE_ELECTRIC,
        .price = 0,
        .description = gItemDesc_ElectricPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockElectric,
    },
    [ITEM_POKEBLOCK_PSYCHIC - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Psychic {POKEBLOCK}"),
#else
        .name = _("PSYCHIC {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_PSYCHIC,
        .secondaryId = TYPE_PSYCHIC,
        .price = 0,
        .description = gItemDesc_PsychicPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockPsychic,
    },
    [ITEM_POKEBLOCK_ICE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Ice {POKEBLOCK}"),
#else
        .name = _("ICE {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_ICE,
        .secondaryId = TYPE_ICE,
        .price = 0,
        .description = gItemDesc_IcePokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockIce,
    },
    [ITEM_POKEBLOCK_DRAGON - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Dragon {POKEBLOCK}"),
#else
        .name = _("DRAGON {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_DRAGON,
        .secondaryId = TYPE_DRAGON,
        .price = 0,
        .description = gItemDesc_DragonPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockDragon,
    },
    [ITEM_POKEBLOCK_DARK - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Dark {POKEBLOCK}"),
#else
        .name = _("DARK {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_DARK,
        .secondaryId = TYPE_DARK,
        .price = 0,
        .description = gItemDesc_DarkPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockDark,
    },
#ifdef ROGUE_EXPANSION
    [ITEM_POKEBLOCK_FAIRY - ITEM_ROGUE_ITEM_FIRST] =
    {
        .name = _("Fairy {POKEBLOCK}"),
        .itemId = ITEM_POKEBLOCK_FAIRY,
        .secondaryId = TYPE_FAIRY,
        .price = 0,
        .description = gItemDesc_FairyPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockFairy,
    },
#endif
    [ITEM_POKEBLOCK_SHINY - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Shiny {POKEBLOCK}"),
#else
        .name = _("SHINY {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_SHINY,
        .secondaryId = TYPE_MYSTERY, // just fill in with a placeholder
        .price = 0,
        .description = gItemDesc_ShinyPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_PokeblockShiny,
        .iconPalette = gItemIconPalette_PokeblockShiny,
    },
    [ITEM_POKEBLOCK_HP - ITEM_ROGUE_ITEM_FIRST] =
    {
        .name = _("HP {POKEBLOCK}"),
        .itemId = ITEM_POKEBLOCK_HP,
        .secondaryId = TYPE_NONE,
        .price = 0,
        .description = gItemDesc_StatPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockStat,
    },
    [ITEM_POKEBLOCK_ATK - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Atk {POKEBLOCK}"),
#else
        .name = _("ATK {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_ATK,
        .secondaryId = TYPE_NONE,
        .price = 0,
        .description = gItemDesc_StatPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockStat,
    },
    [ITEM_POKEBLOCK_DEF - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Def {POKEBLOCK}"),
#else
        .name = _("DEF {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_DEF,
        .secondaryId = TYPE_NONE,
        .price = 0,
        .description = gItemDesc_StatPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockStatAlt,
    },
    [ITEM_POKEBLOCK_SPEED - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Speed {POKEBLOCK}"),
#else
        .name = _("SPEED {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_SPEED,
        .secondaryId = TYPE_NONE,
        .price = 0,
        .description = gItemDesc_StatPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockStatAlt,
    },
    [ITEM_POKEBLOCK_SPATK - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Sp.Atk {POKEBLOCK}"),
#else
        .name = _("SP.ATK {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_SPATK,
        .secondaryId = TYPE_NONE,
        .price = 0,
        .description = gItemDesc_StatPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockStat,
    },
    [ITEM_POKEBLOCK_SPDEF - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Sp.Def {POKEBLOCK}"),
#else
        .name = _("SP.DEF {POKEBLOCK}"),
#endif
        .itemId = ITEM_POKEBLOCK_SPDEF,
        .secondaryId = TYPE_NONE,
        .price = 0,
        .description = gItemDesc_StatPokeblock,
        .pocket = POCKET_POKEBLOCK,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Pokeblock,
        .registrability = FALSE,
        .iconImage = gItemIcon_Pokeblock,
        .iconPalette = gItemIconPalette_PokeblockStatAlt,
    },


    // Charms
    //
    [ITEM_SHOP_PRICE_CHARM - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Discount Charm"),
#else
        .name = _("DISCOUNT CHARM"),
#endif
        .itemId = ITEM_SHOP_PRICE_CHARM,
        .price = 0,
        .description = gItemDesc_ShopPriceCharm,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCharm,
        .iconPalette = gItemIconPalette_RogueCharm,
    },

    [ITEM_FLINCH_CHARM - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Flinch Charm"),
#else
        .name = _("FLINCH CHARM"),
#endif
        .itemId = ITEM_FLINCH_CHARM,
        .price = 0,
        .description = gItemDesc_FlinchCharm,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCharm,
        .iconPalette = gItemIconPalette_RogueCharm,
    },

    [ITEM_CRIT_CHARM - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Crit Charm"),
#else
        .name = _("CRIT CHARM"),
#endif
        .itemId = ITEM_CRIT_CHARM,
        .price = 0,
        .description = gItemDesc_CritCharm,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCharm,
        .iconPalette = gItemIconPalette_RogueCharm,
    },

    [ITEM_SHED_SKIN_CHARM - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Shed Skin Charm"),
#else
        .name = _("SHED SKIN CHARM"),
#endif
        .itemId = ITEM_SHED_SKIN_CHARM,
        .price = 0,
        .description = gItemDesc_ShedSkinCharm,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCharm,
        .iconPalette = gItemIconPalette_RogueCharm,
    },

    [ITEM_WILD_IV_CHARM - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Strength Charm"),
#else
        .name = _("STRENGTH CHARM"),
#endif
        .itemId = ITEM_WILD_IV_CHARM,
        .price = 0,
        .description = gItemDesc_WildIVCharm,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCharm,
        .iconPalette = gItemIconPalette_RogueCharm,
    },

    [ITEM_CATCHING_CHARM - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Catching Charm"),
#else
        .name = _("CATCHING CHARM"),
#endif
        .itemId = ITEM_CATCHING_CHARM,
        .price = 0,
        .description = gItemDesc_CatchingCharm,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCharm,
        .iconPalette = gItemIconPalette_RogueCharm,
    },

    [ITEM_GRACE_CHARM - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Grace Charm"),
#else
        .name = _("GRACE CHARM"),
#endif
        .itemId = ITEM_GRACE_CHARM,
        .price = 0,
        .description = gItemDesc_GraceCharm,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCharm,
        .iconPalette = gItemIconPalette_RogueCharm,
    },

    [ITEM_WILD_ENCOUNTER_CHARM - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Wild Charm"),
#else
        .name = _("WILD CHARM"),
#endif
        .itemId = ITEM_WILD_ENCOUNTER_CHARM,
        .price = 0,
        .description = gItemDesc_WildCharm,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCharm,
        .iconPalette = gItemIconPalette_RogueCharm,
    },

    [ITEM_MOVE_PRIORITY_CHARM - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Priority Charm"),
#else
        .name = _("PRIORITY CHARM"),
#endif
        .itemId = ITEM_MOVE_PRIORITY_CHARM,
        .price = 0,
        .description = gItemDesc_PriorityCharm,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCharm,
        .iconPalette = gItemIconPalette_RogueCharm,
    },

    [ITEM_ENDURE_CHARM - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Endure Charm"),
#else
        .name = _("ENDURE CHARM"),
#endif
        .itemId = ITEM_ENDURE_CHARM,
        .price = 0,
        .description = gItemDesc_EndureCharm,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCharm,
        .iconPalette = gItemIconPalette_RogueCharm,
    },


    [ITEM_SHOP_PRICE_CURSE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Discount Curse"),
#else
        .name = _("DISCOUND CURSE"),
#endif
        .itemId = ITEM_SHOP_PRICE_CURSE,
        .price = 0,
        .description = gItemDesc_ShopPriceCurse,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCurse,
        .iconPalette = gItemIconPalette_RogueCurse,
    },

    [ITEM_FLINCH_CURSE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Flinch Curse"),
#else
        .name = _("FLINCH CURSE"),
#endif
        .itemId = ITEM_FLINCH_CURSE,
        .price = 0,
        .description = gItemDesc_FlinchCurse,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCurse,
        .iconPalette = gItemIconPalette_RogueCurse,
    },

    [ITEM_CRIT_CURSE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Crit Curse"),
#else
        .name = _("CRIT CURSE"),
#endif
        .itemId = ITEM_CRIT_CURSE,
        .price = 0,
        .description = gItemDesc_CritCurse,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCurse,
        .iconPalette = gItemIconPalette_RogueCurse,
    },

    [ITEM_SHED_SKIN_CURSE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Shed Skin Curse"),
#else
        .name = _("SHED SKIN CURSE"),
#endif
        .itemId = ITEM_SHED_SKIN_CURSE,
        .price = 0,
        .description = gItemDesc_ShedSkinCurse,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCurse,
        .iconPalette = gItemIconPalette_RogueCurse,
    },

    [ITEM_WILD_IV_CURSE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Strength Curse"),
#else
        .name = _("STRENGTH CURSE"),
#endif
        .itemId = ITEM_WILD_IV_CURSE,
        .price = 0,
        .description = gItemDesc_WildIVCurse,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCurse,
        .iconPalette = gItemIconPalette_RogueCurse,
    },

    [ITEM_CATCHING_CURSE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Catching Curse"),
#else
        .name = _("CATCHING CURSE"),
#endif
        .itemId = ITEM_CATCHING_CURSE,
        .price = 0,
        .description = gItemDesc_CatchingCurse,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCurse,
        .iconPalette = gItemIconPalette_RogueCurse,
    },

    [ITEM_GRACE_CURSE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Grace Curse"),
#else
        .name = _("GRACE CURSE"),
#endif
        .itemId = ITEM_GRACE_CURSE,
        .price = 0,
        .description = gItemDesc_GraceCurse,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCurse,
        .iconPalette = gItemIconPalette_RogueCurse,
    },

    [ITEM_WILD_ENCOUNTER_CURSE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Wild Curse"),
#else
        .name = _("WILD CURSE"),
#endif
        .itemId = ITEM_WILD_ENCOUNTER_CURSE,
        .price = 0,
        .description = gItemDesc_WildCurse,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCurse,
        .iconPalette = gItemIconPalette_RogueCurse,
    },

    [ITEM_PARTY_CURSE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Capacity Curse"),
#else
        .name = _("CAPACITY CURSE"),
#endif
        .itemId = ITEM_PARTY_CURSE,
        .price = 0,
        .description = gItemDesc_PartyCurse,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCurse,
        .iconPalette = gItemIconPalette_RogueCurse,
    },

    [ITEM_EVERSTONE_CURSE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Everstone Curse"),
#else
        .name = _("EVERSTONE CURSE"),
#endif
        .itemId = ITEM_EVERSTONE_CURSE,
        .price = 0,
        .description = gItemDesc_EverstoneCurse,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCurse,
        .iconPalette = gItemIconPalette_RogueCurse,
    },

    [ITEM_BATTLE_ITEM_CURSE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Embargo Curse"),
#else
        .name = _("EMBARGO CURSE"),
#endif
        .itemId = ITEM_BATTLE_ITEM_CURSE,
        .price = 0,
        .description = gItemDesc_BattleItemCurse,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCurse,
        .iconPalette = gItemIconPalette_RogueCurse,
    },

    [ITEM_SPECIES_CLAUSE_CURSE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Species Curse"),
#else
        .name = _("SPECIES CURSE"),
#endif
        .itemId = ITEM_SPECIES_CLAUSE_CURSE,
        .price = 0,
        .description = gItemDesc_SpeciesClauseCurse,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCurse,
        .iconPalette = gItemIconPalette_RogueCurse,
    },

    [ITEM_ITEM_SHUFFLE_CURSE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Shuffle Curse"),
#else
        .name = _("SHUFFLE CURSE"),
#endif
        .itemId = ITEM_ITEM_SHUFFLE_CURSE,
        .price = 0,
        .description = gItemDesc_ItemShuffleCurse,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCurse,
        .iconPalette = gItemIconPalette_RogueCurse,
    },

    [ITEM_MOVE_PRIORITY_CURSE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Priority Curse"),
#else
        .name = _("PRIORITY CURSE"),
#endif
        .itemId = ITEM_MOVE_PRIORITY_CURSE,
        .price = 0,
        .description = gItemDesc_PriorityCurse,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCurse,
        .iconPalette = gItemIconPalette_RogueCurse,
    },

    [ITEM_ENDURE_CURSE - ITEM_ROGUE_ITEM_FIRST] =
    {
#ifdef ROGUE_EXPANSION
        .name = _("Endure Curse"),
#else
        .name = _("ENDURE CURSE"),
#endif
        .itemId = ITEM_ENDURE_CURSE,
        .price = 0,
        .description = gItemDesc_EndureCurse,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .registrability = FALSE,
        .iconImage = gItemIcon_RogueCurse,
        .iconPalette = gItemIconPalette_RogueCurse,
    },
    
    [ITEM_TR01 - ITEM_ROGUE_ITEM_FIRST] =
    {
        .name = _("TR"),
        .itemId = ITEM_TR01,
        .price = 1000,
        .description = gText_DexEmptyString,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .registrability = FALSE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .iconImage = gItemIcon_TM,
        .iconPalette = gItemIconPalette_FightingTMHM,
    },
    [ITEM_TR50 - ITEM_ROGUE_ITEM_FIRST] =
    {
        .name = _("TR"),
        .itemId = ITEM_TR50,
        .price = 1000,
        .description = gText_DexEmptyString,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .registrability = FALSE,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .iconImage = gItemIcon_TM,
        .iconPalette = gItemIconPalette_FightingTMHM,
    },
};
