const u16 gTutorMoves[] =
{
    [TUTOR_MOVE_MEGA_PUNCH] = MOVE_MEGA_PUNCH,
    [TUTOR_MOVE_SWORDS_DANCE] = MOVE_SWORDS_DANCE,
    [TUTOR_MOVE_MEGA_KICK] = MOVE_MEGA_KICK,
    [TUTOR_MOVE_BODY_SLAM] = MOVE_BODY_SLAM,
    [TUTOR_MOVE_DOUBLE_EDGE] = MOVE_DOUBLE_EDGE,
    [TUTOR_MOVE_COUNTER] = MOVE_COUNTER,
    [TUTOR_MOVE_SEISMIC_TOSS] = MOVE_SEISMIC_TOSS,
    [TUTOR_MOVE_MIMIC] = MOVE_MIMIC,
    [TUTOR_MOVE_METRONOME] = MOVE_METRONOME,
    [TUTOR_MOVE_SOFT_BOILED] = MOVE_SOFT_BOILED,
    [TUTOR_MOVE_DREAM_EATER] = MOVE_DREAM_EATER,
    [TUTOR_MOVE_THUNDER_WAVE] = MOVE_THUNDER_WAVE,
    [TUTOR_MOVE_EXPLOSION] = MOVE_EXPLOSION,
    [TUTOR_MOVE_ROCK_SLIDE] = MOVE_ROCK_SLIDE,
    [TUTOR_MOVE_SUBSTITUTE] = MOVE_SUBSTITUTE,
    [TUTOR_MOVE_DYNAMIC_PUNCH] = MOVE_DYNAMIC_PUNCH,
    [TUTOR_MOVE_ROLLOUT] = MOVE_ROLLOUT,
    [TUTOR_MOVE_PSYCH_UP] = MOVE_PSYCH_UP,
    [TUTOR_MOVE_SNORE] = MOVE_SNORE,
    [TUTOR_MOVE_ICY_WIND] = MOVE_ICY_WIND,
    [TUTOR_MOVE_ENDURE] = MOVE_ENDURE,
    [TUTOR_MOVE_MUD_SLAP] = MOVE_MUD_SLAP,
    [TUTOR_MOVE_ICE_PUNCH] = MOVE_ICE_PUNCH,
    [TUTOR_MOVE_SWAGGER] = MOVE_SWAGGER,
    [TUTOR_MOVE_SLEEP_TALK] = MOVE_SLEEP_TALK,
    [TUTOR_MOVE_SWIFT] = MOVE_SWIFT,
    [TUTOR_MOVE_DEFENSE_CURL] = MOVE_DEFENSE_CURL,
    [TUTOR_MOVE_THUNDER_PUNCH] = MOVE_THUNDER_PUNCH,
    [TUTOR_MOVE_FIRE_PUNCH] = MOVE_FIRE_PUNCH,
    [TUTOR_MOVE_FURY_CUTTER] = MOVE_FURY_CUTTER,
#ifdef ROGUE_DRAYANO // additional tutor moves defined in party_menu.h
    [TUTOR_MOVE_ACROBATICS] = MOVE_ACROBATICS,
    [TUTOR_MOVE_AIR_CUTTER] = MOVE_AIR_CUTTER,
    [TUTOR_MOVE_AIR_SLASH] = MOVE_AIR_SLASH,
    [TUTOR_MOVE_AURA_SPHERE] = MOVE_AURA_SPHERE,
    [TUTOR_MOVE_AURORA_VEIL] = MOVE_AURORA_VEIL,
    [TUTOR_MOVE_BLAZE_KICK] = MOVE_BLAZE_KICK,
    [TUTOR_MOVE_BODY_PRESS] = MOVE_BODY_PRESS,
    [TUTOR_MOVE_BRAVE_BIRD] = MOVE_BRAVE_BIRD,
    [TUTOR_MOVE_BREAKING_SWIPE] = MOVE_BREAKING_SWIPE,
    [TUTOR_MOVE_BRUTAL_SWING] = MOVE_BRUTAL_SWING,
    [TUTOR_MOVE_BUG_BUZZ] = MOVE_BUG_BUZZ,
    [TUTOR_MOVE_BULLDOZE] = MOVE_BULLDOZE,
    [TUTOR_MOVE_BURNING_JEALOUSY] = MOVE_BURNING_JEALOUSY,
    [TUTOR_MOVE_COACHING] = MOVE_COACHING,
    [TUTOR_MOVE_CORROSIVE_GAS] = MOVE_CORROSIVE_GAS,
    [TUTOR_MOVE_COVET] = MOVE_COVET,
    [TUTOR_MOVE_CROSS_POISON] = MOVE_CROSS_POISON,
    [TUTOR_MOVE_CRUNCH] = MOVE_CRUNCH,
    [TUTOR_MOVE_DARK_PULSE] = MOVE_DARK_PULSE,
    [TUTOR_MOVE_DARKEST_LARIAT] = MOVE_DARKEST_LARIAT,
    [TUTOR_MOVE_DAZZLING_GLEAM] = MOVE_DAZZLING_GLEAM,
    [TUTOR_MOVE_DEFOG] = MOVE_DEFOG,
    [TUTOR_MOVE_DRACO_METEOR] = MOVE_DRACO_METEOR,
    [TUTOR_MOVE_DRAGON_DANCE] = MOVE_DRAGON_DANCE,
    [TUTOR_MOVE_DRAGON_PULSE] = MOVE_DRAGON_PULSE,
    [TUTOR_MOVE_DRAIN_PUNCH] = MOVE_DRAIN_PUNCH,
    [TUTOR_MOVE_DRAINING_KISS] = MOVE_DRAINING_KISS,
    [TUTOR_MOVE_DRILL_RUN] = MOVE_DRILL_RUN,
    [TUTOR_MOVE_DUAL_WINGBEAT] = MOVE_DUAL_WINGBEAT,
    [TUTOR_MOVE_EARTH_POWER] = MOVE_EARTH_POWER,
    [TUTOR_MOVE_ELECTROWEB] = MOVE_ELECTROWEB,
    [TUTOR_MOVE_ENCORE] = MOVE_ENCORE,
    [TUTOR_MOVE_ENERGY_BALL] = MOVE_ENERGY_BALL,
    [TUTOR_MOVE_EXPANDING_FORCE] = MOVE_EXPANDING_FORCE,
    [TUTOR_MOVE_THUNDER_FANG] = MOVE_THUNDER_FANG,
    [TUTOR_MOVE_ICE_FANG] = MOVE_ICE_FANG,
    [TUTOR_MOVE_FIRE_FANG] = MOVE_FIRE_FANG,
    [TUTOR_MOVE_FLAME_CHARGE] = MOVE_FLAME_CHARGE,
    [TUTOR_MOVE_FLARE_BLITZ] = MOVE_FLARE_BLITZ,
    [TUTOR_MOVE_FLASH_CANNON] = MOVE_FLASH_CANNON,
    [TUTOR_MOVE_FLING] = MOVE_FLING,
    [TUTOR_MOVE_FLIP_TURN] = MOVE_FLIP_TURN,
    [TUTOR_MOVE_FOUL_PLAY] = MOVE_FOUL_PLAY,
    [TUTOR_MOVE_FROST_BREATH] = MOVE_FROST_BREATH,
    [TUTOR_MOVE_GIGA_IMPACT] = MOVE_GIGA_IMPACT,
    [TUTOR_MOVE_GRASSY_GLIDE] = MOVE_GRASSY_GLIDE,
    [TUTOR_MOVE_HEAL_BELL] = MOVE_HEAL_BELL,
    [TUTOR_MOVE_HEAT_CRASH] = MOVE_HEAT_CRASH,
    [TUTOR_MOVE_HEAT_WAVE] = MOVE_HEAT_WAVE,
    [TUTOR_MOVE_HELPING_HAND] = MOVE_HELPING_HAND,
    [TUTOR_MOVE_HEX] = MOVE_HEX,
    [TUTOR_MOVE_HIGH_HORSEPOWER] = MOVE_HIGH_HORSEPOWER,
    [TUTOR_MOVE_HONE_CLAWS] = MOVE_HONE_CLAWS,
    [TUTOR_MOVE_HURRICANE] = MOVE_HURRICANE,
    [TUTOR_MOVE_HYPER_VOICE] = MOVE_HYPER_VOICE,
    [TUTOR_MOVE_ICICLE_SPEAR] = MOVE_ICICLE_SPEAR,
    [TUTOR_MOVE_IRON_DEFENSE] = MOVE_IRON_DEFENSE,
    [TUTOR_MOVE_IRON_HEAD] = MOVE_IRON_HEAD,
    [TUTOR_MOVE_KNOCK_OFF] = MOVE_KNOCK_OFF,
    [TUTOR_MOVE_LASH_OUT] = MOVE_LASH_OUT,
    [TUTOR_MOVE_LEAF_STORM] = MOVE_LEAF_STORM,
    [TUTOR_MOVE_LEECH_LIFE] = MOVE_LEECH_LIFE,
    [TUTOR_MOVE_LIQUIDATION] = MOVE_LIQUIDATION,
    [TUTOR_MOVE_LOW_SWEEP] = MOVE_LOW_SWEEP,
    [TUTOR_MOVE_METEOR_BEAM] = MOVE_METEOR_BEAM,
    [TUTOR_MOVE_MISTY_EXPLOSION] = MOVE_MISTY_EXPLOSION,
    [TUTOR_MOVE_MYSTICAL_FIRE] = MOVE_MYSTICAL_FIRE,
    [TUTOR_MOVE_NASTY_PLOT] = MOVE_NASTY_PLOT,
    [TUTOR_MOVE_PHANTOM_FORCE] = MOVE_PHANTOM_FORCE,
    [TUTOR_MOVE_POLTERGEIST] = MOVE_POLTERGEIST,
    [TUTOR_MOVE_OUTRAGE] = MOVE_OUTRAGE,
    [TUTOR_MOVE_PLAY_ROUGH] = MOVE_PLAY_ROUGH,
    [TUTOR_MOVE_POISON_JAB] = MOVE_POISON_JAB,
    [TUTOR_MOVE_POLLEN_PUFF] = MOVE_POLLEN_PUFF,
    [TUTOR_MOVE_POWER_GEM] = MOVE_POWER_GEM,
    [TUTOR_MOVE_POWER_WHIP] = MOVE_POWER_WHIP,
    [TUTOR_MOVE_PSYCHIC_FANGS] = MOVE_PSYCHIC_FANGS,
    [TUTOR_MOVE_PSYCHO_CUT] = MOVE_PSYCHO_CUT,
    [TUTOR_MOVE_PSYSHOCK] = MOVE_PSYSHOCK,
    [TUTOR_MOVE_RISING_VOLTAGE] = MOVE_RISING_VOLTAGE,
    [TUTOR_MOVE_ROCK_CLIMB] = MOVE_ROCK_CLIMB,
    [TUTOR_MOVE_ROOST] = MOVE_ROOST,
    [TUTOR_MOVE_SCALD] = MOVE_SCALD,
    [TUTOR_MOVE_SCALE_SHOT] = MOVE_SCALE_SHOT,
    [TUTOR_MOVE_SCORCHING_SANDS] = MOVE_SCORCHING_SANDS,
    [TUTOR_MOVE_SEED_BOMB] = MOVE_SEED_BOMB,
    [TUTOR_MOVE_SHADOW_CLAW] = MOVE_SHADOW_CLAW,
    [TUTOR_MOVE_SIGNAL_BEAM] = MOVE_SIGNAL_BEAM,
    [TUTOR_MOVE_SKITTER_SMACK] = MOVE_SKITTER_SMACK,
    [TUTOR_MOVE_SLUDGE_WAVE] = MOVE_SLUDGE_WAVE,
    [TUTOR_MOVE_SMART_STRIKE] = MOVE_SMART_STRIKE,
    [TUTOR_MOVE_SNARL] = MOVE_SNARL,
    [TUTOR_MOVE_SOLAR_BLADE] = MOVE_SOLAR_BLADE,
    [TUTOR_MOVE_SPIKES] = MOVE_SPIKES,
    [TUTOR_MOVE_STEALTH_ROCK] = MOVE_STEALTH_ROCK,
    [TUTOR_MOVE_STEEL_ROLLER] = MOVE_STEEL_ROLLER,
    [TUTOR_MOVE_STOMPING_TANTRUM] = MOVE_STOMPING_TANTRUM,
    [TUTOR_MOVE_STONE_EDGE] = MOVE_STONE_EDGE,
    [TUTOR_MOVE_SUPERPOWER] = MOVE_SUPERPOWER,
    [TUTOR_MOVE_SYNTHESIS] = MOVE_SYNTHESIS,
    [TUTOR_MOVE_TAIL_SLAP] = MOVE_TAIL_SLAP,
    [TUTOR_MOVE_TAILWIND] = MOVE_TAILWIND,
    [TUTOR_MOVE_GRASSY_TERRAIN] = MOVE_GRASSY_TERRAIN,
    [TUTOR_MOVE_MISTY_TERRAIN] = MOVE_MISTY_TERRAIN,
    [TUTOR_MOVE_ELECTRIC_TERRAIN] = MOVE_ELECTRIC_TERRAIN,
    [TUTOR_MOVE_PSYCHIC_TERRAIN] = MOVE_PSYCHIC_TERRAIN,
    [TUTOR_MOVE_TERRAIN_PULSE] = MOVE_TERRAIN_PULSE,
    [TUTOR_MOVE_THROAT_CHOP] = MOVE_THROAT_CHOP,
    [TUTOR_MOVE_TRI_ATTACK] = MOVE_TRI_ATTACK,
    [TUTOR_MOVE_TRICK] = MOVE_TRICK,
    [TUTOR_MOVE_TRICK_ROOM] = MOVE_TRICK_ROOM,
    [TUTOR_MOVE_TRIPLE_AXEL] = MOVE_TRIPLE_AXEL,
    [TUTOR_MOVE_U_TURN] = MOVE_U_TURN,
    [TUTOR_MOVE_VACUUM_WAVE] = MOVE_VACUUM_WAVE,
    [TUTOR_MOVE_VENOM_DRENCH] = MOVE_VENOM_DRENCH,
    [TUTOR_MOVE_VENOSHOCK] = MOVE_VENOSHOCK,
    [TUTOR_MOVE_VOLT_SWITCH] = MOVE_VOLT_SWITCH,
    [TUTOR_MOVE_WEATHER_BALL] = MOVE_WEATHER_BALL,
    [TUTOR_MOVE_WHIRLPOOL] = MOVE_WHIRLPOOL,
    [TUTOR_MOVE_WILD_CHARGE] = MOVE_WILD_CHARGE,
    [TUTOR_MOVE_WILL_O_WISP] = MOVE_WILL_O_WISP,
    [TUTOR_MOVE_WORK_UP] = MOVE_WORK_UP,
    [TUTOR_MOVE_X_SCISSOR] = MOVE_X_SCISSOR,
    [TUTOR_MOVE_ZEN_HEADBUTT] = MOVE_ZEN_HEADBUTT,
#endif
};

#define TUTOR_LEARNSET(moves) ((u32)(moves))
#define TUTOR(move) ((u64)1 << (TUTOR_##move))

static const u32 sTutorLearnsets[] =
{
    [SPECIES_NONE]          = (0),

    [SPECIES_BULBASAUR]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_IVYSAUR]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_VENUSAUR]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CHARMANDER]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_CHARMELEON]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_CHARIZARD]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SQUIRTLE]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_WARTORTLE]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_BLASTOISE]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_CATERPIE]      = TUTOR_LEARNSET(TUTOR(MOVE_SNORE)),

    [SPECIES_METAPOD]       = TUTOR_LEARNSET(0),

    [SPECIES_BUTTERFREE]    = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_WEEDLE]        = TUTOR_LEARNSET(0),

    [SPECIES_KAKUNA]        = TUTOR_LEARNSET(0),

    [SPECIES_BEEDRILL]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_PIDGEY]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_PIDGEOTTO]     = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_PIDGEOT]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_RATTATA]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_RATICATE]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SPEAROW]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_FEAROW]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_EKANS]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ARBOK]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PIKACHU]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_RAICHU]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SANDSHREW]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SANDSLASH]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_NIDORAN_F]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_NIDORINA]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_NIDOQUEEN]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_NIDORAN_M]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_NIDORINO]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_NIDOKING]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_CLEFAIRY]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SOFT_BOILED)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CLEFABLE]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SOFT_BOILED)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_VULPIX]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_NINETALES]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_JIGGLYPUFF]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_WIGGLYTUFF]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ZUBAT]         = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_GOLBAT]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_ODDISH]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_GLOOM]         = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_VILEPLUME]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_PARAS]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_PARASECT]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_VENONAT]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_VENOMOTH]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_DIGLETT]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_DUGTRIO]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_MEOWTH]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_PERSIAN]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_PSYDUCK]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_GOLDUCK]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_MANKEY]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_PRIMEAPE]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_GROWLITHE]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_ARCANINE]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_POLIWAG]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_POLIWHIRL]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_POLIWRATH]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ABRA]          = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KADABRA]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ALAKAZAM]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MACHOP]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_MACHOKE]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_MACHAMP]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_BELLSPROUT]    = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_WEEPINBELL]    = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_VICTREEBEL]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TENTACOOL]     = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TENTACRUEL]    = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_GEODUDE]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_GRAVELER]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_GOLEM]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_PONYTA]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BLAZE_KICK)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_RAPIDASH]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BLAZE_KICK)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SLOWPOKE]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SLOWBRO]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MAGNEMITE]     = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MAGNETON]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_FARFETCHD]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DODUO]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DODRIO]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SEEL]          = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_DEWGONG]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_GRIMER]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_MUK]           = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SHELLDER]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_CLOYSTER]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_GASTLY]        = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_HAUNTER]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_GENGAR]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_ONIX]          = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_DROWZEE]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HYPNO]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BODY_PRESS)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KRABBY]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_KINGLER]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_VOLTORB]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ELECTRODE]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_EXEGGCUTE]     = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_EXEGGUTOR]     = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CUBONE]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_MAROWAK]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_HITMONLEE]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_HITMONCHAN]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_LICKITUNG]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_KOFFING]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_WEEZING]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_RHYHORN]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_RHYDON]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_CHANSEY]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SOFT_BOILED)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TANGELA]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_KANGASKHAN]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_HORSEA]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SEADRA]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_GOLDEEN]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SEAKING]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_STARYU]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_STARMIE]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MR_MIME]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SCYTHER]       = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_JYNX]          = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_AURORA_VEIL)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ELECTABUZZ]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MAGMAR]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_PINSIR]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TAUROS]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_MAGIKARP]      = TUTOR_LEARNSET(0),

    [SPECIES_GYARADOS]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LAPRAS]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_DITTO]         = TUTOR_LEARNSET(0),

    [SPECIES_EEVEE]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_VAPOREON]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_JOLTEON]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_FLAREON]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BLAZE_KICK)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_PORYGON]       = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_OMANYTE]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_OMASTAR]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_KABUTO]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_KABUTOPS]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_AERODACTYL]    = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SNORLAX]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_ARTICUNO]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_AURORA_VEIL)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_ZAPDOS]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MOLTRES]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_DRATINI]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DRAGONAIR]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DRAGONITE]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MEWTWO]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MEW]           = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_AURORA_VEIL)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SOFT_BOILED)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CHIKORITA]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BAYLEEF]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MEGANIUM]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CYNDAQUIL]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_QUILAVA]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_TYPHLOSION]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_TOTODILE]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CROCONAW]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_FERALIGATR]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SENTRET]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_FURRET]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_HOOTHOOT]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_NOCTOWL]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_LEDYBA]        = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_LEDIAN]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SPINARAK]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ARIADOS]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CROBAT]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_CHINCHOU]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LANTURN]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PICHU]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CLEFFA]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SOFT_BOILED)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_IGGLYBUFF]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TOGEPI]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SOFT_BOILED)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TOGETIC]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SOFT_BOILED)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_NATU]          = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_XATU]          = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MAREEP]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_FLAAFFY]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_AMPHAROS]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BELLOSSOM]     = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MARILL]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_AZUMARILL]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SUDOWOODO]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_POLITOED]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_HOPPIP]        = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SKIPLOOM]      = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_JUMPLUFF]      = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_AIPOM]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SUNKERN]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SUNFLORA]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_YANMA]         = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_WOOPER]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_QUAGSIRE]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ESPEON]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_UMBREON]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_MURKROW]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SLOWKING]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MISDREAVUS]    = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_UNOWN]         = TUTOR_LEARNSET(0),

    [SPECIES_WOBBUFFET]     = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)),

    [SPECIES_GIRAFARIG]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PINECO]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_FORRETRESS]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_DUNSPARCE]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GLIGAR]        = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_STEELIX]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SNUBBULL]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GRANBULL]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_QWILFISH]      = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SCIZOR]        = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SHUCKLE]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_HERACROSS]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SNEASEL]       = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TEDDIURSA]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_URSARING]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SLUGMA]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_MAGCARGO]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SWINUB]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PILOSWINE]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_CORSOLA]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_REMORAID]      = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_OCTILLERY]     = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DELIBIRD]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_AURORA_VEIL)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_MANTINE]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SKARMORY]      = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_HOUNDOUR]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_HOUNDOOM]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_KINGDRA]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_PHANPY]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_DONPHAN]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PORYGON2]      = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_STANTLER]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SMEARGLE]      = TUTOR_LEARNSET(TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)),

    [SPECIES_TYROGUE]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_HITMONTOP]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SMOOCHUM]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ELEKID]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MAGBY]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_MILTANK]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BLISSEY]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SOFT_BOILED)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_RAIKOU]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ENTEI]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SUICUNE]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_LARVITAR]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PUPITAR]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_TYRANITAR]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LUGIA]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HO_OH]         = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CELEBI]        = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TREECKO]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_GROVYLE]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SCEPTILE]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_TORCHIC]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_COMBUSKEN]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BLAZE_KICK)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_BLAZIKEN]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_MUDKIP]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_MARSHTOMP]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SWAMPERT]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_POOCHYENA]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_MIGHTYENA]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ZIGZAGOON]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LINOONE]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_WURMPLE]       = TUTOR_LEARNSET(TUTOR(MOVE_SNORE)),

    [SPECIES_SILCOON]       = TUTOR_LEARNSET(0),

    [SPECIES_BEAUTIFLY]     = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_CASCOON]       = TUTOR_LEARNSET(0),

    [SPECIES_DUSTOX]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_LOTAD]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_LOMBRE]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_LUDICOLO]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SEEDOT]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_NUZLEAF]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SHIFTRY]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TAILLOW]       = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SWELLOW]       = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_WINGULL]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_PELIPPER]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_RALTS]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KIRLIA]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GARDEVOIR]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SURSKIT]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_MASQUERAIN]    = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SHROOMISH]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BRELOOM]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SLAKOTH]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_VIGOROTH]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SLAKING]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_NINCADA]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_NINJASK]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SHEDINJA]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_WHISMUR]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_LOUDRED]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_EXPLOUD]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_MAKUHITA]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_HARIYAMA]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_AZURILL]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_NOSEPASS]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SKITTY]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DELCATTY]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SABLEYE]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_MAWILE]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_ARON]          = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_LAIRON]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_AGGRON]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MEDITITE]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_MEDICHAM]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_ELECTRIKE]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MANECTRIC]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PLUSLE]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MINUN]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_VOLBEAT]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ILLUMISE]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ROSELIA]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_GULPIN]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SWALOT]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_CARVANHA]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SHARPEDO]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_WAILMER]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_WAILORD]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_NUMEL]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_CAMERUPT]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_TORKOAL]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SPOINK]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GRUMPIG]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SPINDA]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_TRAPINCH]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_VIBRAVA]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_FLYGON]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_CACNEA]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_CACTURNE]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SWABLU]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_ALTARIA]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_ZANGOOSE]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SEVIPER]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_LUNATONE]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SOLROCK]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_BARBOACH]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_WHISCASH]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_CORPHISH]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CRAWDAUNT]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BALTOY]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_CLAYDOL]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_LILEEP]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CRADILY]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ANORITH]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ARMALDO]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_FEEBAS]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_MILOTIC]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_CASTFORM]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KECLEON]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SHUPPET]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BANETTE]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DUSKULL]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_DUSCLOPS]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_TROPIUS]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CHIMECHO]      = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ABSOL]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_WYNAUT]        = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)),

    [SPECIES_SNORUNT]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_GLALIE]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                        #endif
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SPHEAL]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SEALEO]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_WALREIN]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_CLAMPERL]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_HUNTAIL]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_GOREBYSS]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_RELICANTH]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_LUVDISC]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_BAGON]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SHELGON]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SALAMENCE]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH) 
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_BELDUM]        = TUTOR_LEARNSET(0),

    [SPECIES_METANG]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_METAGROSS]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_REGIROCK]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_REGICE]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_REGISTEEL]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LATIAS]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LATIOS]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KYOGRE]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GROUDON]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR (MOVE_THUNDER_WAVE)),

    [SPECIES_RAYQUAZA]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_JIRACHI]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DEOXYS]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TURTWIG]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_GROTLE]        = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TORTERRA]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CHIMCHAR]      = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_MONFERNO]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_INFERNAPE]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_PIPLUP]        = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PRINPLUP]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_EMPOLEON]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_STARLY]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_STARAVIA]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_STARAPTOR]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_BIDOOF]        = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BIBAREL]       = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KRICKETOT]     = TUTOR_LEARNSET(TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SNORE)),

    [SPECIES_KRICKETUNE]    = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SHINX]         = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LUXIO]         = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LUXRAY]        = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BUDEW]         = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ROSERADE]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CRANIDOS]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_RAMPARDOS]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SHIELDON]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_BASTIODON]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_BURMY]         = TUTOR_LEARNSET(TUTOR(MOVE_SNORE)),

    [SPECIES_WORMADAM]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_MOTHIM]        = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_COMBEE]        = TUTOR_LEARNSET(TUTOR(MOVE_MUD_SLAP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER
                                            | TUTOR(MOVE_BUG_BUZZ))
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_VESPIQUEN]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_PACHIRISU]     = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BUIZEL]        = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_FLOATZEL]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_CHERUBI]       = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CHERRIM]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SHELLOS]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_GASTRODON]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_AMBIPOM]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DRIFLOON]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DRIFBLIM]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BUNEARY]       = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LOPUNNY]       = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MISMAGIUS]     = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HONCHKROW]     = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GLAMEOW]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_PURUGLY]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_CHINGLING]     = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_STUNKY]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SKUNTANK]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_BRONZOR]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_BRONZONG]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_BONSLY]        = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_MIME_JR]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HAPPINY]       = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CHATOT]        = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SPIRITOMB]     = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_GIBLE]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_GABITE]        = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_GARCHOMP]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MUNCHLAX]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_RIOLU]         = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_LUCARIO]       = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_HIPPOPOTAS]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_HIPPOWDON]     = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SKORUPI]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DRAPION]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CROAGUNK]      = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_TOXICROAK]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_CARNIVINE]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_FINNEON]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_LUMINEON]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_MANTYKE]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SNOVER]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ABOMASNOW]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_WEAVILE]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MAGNEZONE]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LICKILICKY]    = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_RHYPERIOR]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_TANGROWTH]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ELECTIVIRE]    = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MAGMORTAR]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_TOGEKISS]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_SOFT_BOILED)
                                        #endif
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_YANMEGA]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_LEAFEON]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_GLACEON]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_GLISCOR]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MAMOSWINE]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PORYGON_Z]     = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GALLADE]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PROBOPASS]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DUSKNOIR]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_FROSLASS]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ROTOM]         = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_UXIE]          = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MESPRIT]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_AZELF]         = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DIALGA]        = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PALKIA]        = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HEATRAN]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_REGIGIGAS]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GIRATINA]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CRESSELIA]     = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PHIONE]        = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_MANAPHY]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_DARKRAI]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SHAYMIN]       = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ARCEUS]        = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_VICTINI]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BLAZE_KICK)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SNIVY]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SERVINE]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SERPERIOR]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TEPIG]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PIGNITE]       = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_EMBOAR]        = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_OSHAWOTT]      = TUTOR_LEARNSET(TUTOR(MOVE_FURY_CUTTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DEWOTT]        = TUTOR_LEARNSET(TUTOR(MOVE_FURY_CUTTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SAMUROTT]      = TUTOR_LEARNSET(TUTOR(MOVE_FURY_CUTTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_PATRAT]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_WATCHOG]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LILLIPUP]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HERDIER]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_STOUTLAND]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PURRLOIN]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LIEPARD]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PANSAGE]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SIMISAGE]      = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PANSEAR]       = TUTOR_LEARNSET(TUTOR(MOVE_FIRE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SIMISEAR]      = TUTOR_LEARNSET(TUTOR(MOVE_FIRE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PANPOUR]       = TUTOR_LEARNSET(TUTOR(MOVE_ICE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SIMIPOUR]      = TUTOR_LEARNSET(TUTOR(MOVE_ICE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_MUNNA]         = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MUSHARNA]      = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PIDOVE]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_TRANQUILL]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_UNFEZANT]      = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_BLITZLE]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ZEBSTRIKA]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ROGGENROLA]    = TUTOR_LEARNSET(TUTOR(MOVE_EXPLOSION)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_BOLDORE]       = TUTOR_LEARNSET(TUTOR(MOVE_EXPLOSION)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_GIGALITH]      = TUTOR_LEARNSET(TUTOR(MOVE_EXPLOSION)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_WOOBAT]        = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SWOOBAT]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DRILBUR]       = TUTOR_LEARNSET(TUTOR(MOVE_MUD_SLAP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_EXCADRILL]     = TUTOR_LEARNSET(TUTOR(MOVE_MUD_SLAP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_AUDINO]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TIMBURR]       = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_GURDURR]       = TUTOR_LEARNSET(TUTOR(MOVE_DYNAMIC_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_CONKELDURR]    = TUTOR_LEARNSET(TUTOR(MOVE_DYNAMIC_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_TYMPOLE]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PALPITOAD]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SEISMITOAD]    = TUTOR_LEARNSET(TUTOR(MOVE_ICE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_THROH]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SAWK]          = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BLAZE_KICK)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SEWADDLE]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SWADLOON]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_LEAVANNY]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_VENIPEDE]      = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_WHIRLIPEDE]    = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SCOLIPEDE]     = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_COTTONEE]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_WHIMSICOTT]    = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PETILIL]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_LILLIGANT]     = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BASCULIN]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SANDILE]       = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_KROKOROK]      = TUTOR_LEARNSET(TUTOR(MOVE_MUD_SLAP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_KROOKODILE]    = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_DARUMAKA]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_DARMANITAN]    = TUTOR_LEARNSET(TUTOR(MOVE_FIRE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_MARACTUS]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_DWEBBLE]       = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CRUSTLE]       = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SCRAGGY]       = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SCRAFTY]       = TUTOR_LEARNSET(TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_SIGILYPH]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_YAMASK]        = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_COFAGRIGUS]    = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_TIRTOUGA]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_CARRACOSTA]    = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ARCHEN]        = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ARCHEOPS]      = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_TRUBBISH]      = TUTOR_LEARNSET(TUTOR(MOVE_EXPLOSION)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                        #endif
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_GARBODOR]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                        #endif
                                            | TUTOR(MOVE_EXPLOSION)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ZORUA]         = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ZOROARK]       = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MINCCINO]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CINCCINO]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GOTHITA]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GOTHORITA]     = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GOTHITELLE]    = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SOLOSIS]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DUOSION]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_REUNICLUS]     = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DUCKLETT]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SWANNA]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_VANILLITE]     = TUTOR_LEARNSET(TUTOR(MOVE_EXPLOSION)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_VANILLISH]     = TUTOR_LEARNSET(TUTOR(MOVE_EXPLOSION)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_VANILLUXE]     = TUTOR_LEARNSET(TUTOR(MOVE_EXPLOSION)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_DEERLING]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SAWSBUCK]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_EMOLGA]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KARRABLAST]    = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ESCAVALIER]    = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_FOONGUS]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_AMOONGUSS]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_FRILLISH]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_JELLICENT]     = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ALOMOMOLA]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_JOLTIK]        = TUTOR_LEARNSET(TUTOR(MOVE_FURY_CUTTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GALVANTULA]    = TUTOR_LEARNSET(TUTOR(MOVE_FURY_CUTTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_FERROSEED]     = TUTOR_LEARNSET(TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_FERROTHORN]    = TUTOR_LEARNSET(TUTOR(MOVE_EXPLOSION)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KLINK]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KLANG]         = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KLINKLANG]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TYNAMO]        = TUTOR_LEARNSET(TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_EELEKTRIK]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_EELEKTROSS]    = TUTOR_LEARNSET(TUTOR(MOVE_FIRE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ELGYEM]        = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BEHEEYEM]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LITWICK]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_LAMPENT]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_CHANDELURE]    = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_AXEW]          = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_FRAXURE]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_HAXORUS]       = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CUBCHOO]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_BEARTIC]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CRYOGONAL]     = TUTOR_LEARNSET(TUTOR(MOVE_EXPLOSION)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AURORA_VEIL)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SHELMET]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ACCELGOR]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_STUNFISK]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MIENFOO]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MIENSHAO]      = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DRUDDIGON]     = TUTOR_LEARNSET(TUTOR(MOVE_FIRE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_GOLETT]        = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_GOLURK]        = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_PAWNIARD]      = TUTOR_LEARNSET(TUTOR(MOVE_FURY_CUTTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BISHARP]       = TUTOR_LEARNSET(TUTOR(MOVE_FURY_CUTTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BOUFFALANT]    = TUTOR_LEARNSET(TUTOR(MOVE_MUD_SLAP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_RUFFLET]       = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_BRAVIARY]      = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_VULLABY]       = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_MANDIBUZZ]     = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_HEATMOR]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_DURANT]        = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DEINO]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ZWEILOUS]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HYDREIGON]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LARVESTA]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_VOLCARONA]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_COBALION]      = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TERRAKION]     = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_VIRIZION]      = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TORNADUS]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_THUNDURUS]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_RESHIRAM]      = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ZEKROM]        = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LANDORUS]      = TUTOR_LEARNSET(TUTOR(MOVE_EXPLOSION)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_KYUREM]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_KELDEO]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MELOETTA]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GENESECT]      = TUTOR_LEARNSET(TUTOR(MOVE_EXPLOSION)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BLAZE_KICK)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CHESPIN]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_QUILLADIN]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_CHESNAUGHT]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_FENNEKIN]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_BRAIXEN]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_DELPHOX]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_FROAKIE]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_FROGADIER]     = TUTOR_LEARNSET(TUTOR(MOVE_ICE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_GRENINJA]      = TUTOR_LEARNSET(TUTOR(MOVE_ICE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_BUNNELBY]      = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_DIGGERSBY]     = TUTOR_LEARNSET(TUTOR(MOVE_FIRE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_FLETCHLING]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_FLETCHINDER]   = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TALONFLAME]    = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SCATTERBUG]    = TUTOR_LEARNSET(0),

    [SPECIES_SPEWPA]        = TUTOR_LEARNSET(0),

    [SPECIES_VIVILLON]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_LITLEO]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PYROAR]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_FLABEBE]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_FLOETTE]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_FLORGES]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SKIDDO]        = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_GOGOAT]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PANCHAM]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_PANGORO]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_FURFROU]       = TUTOR_LEARNSET(TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ESPURR]        = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MEOWSTIC]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HONEDGE]       = TUTOR_LEARNSET(TUTOR(MOVE_FURY_CUTTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DOUBLADE]      = TUTOR_LEARNSET(TUTOR(MOVE_FURY_CUTTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_AEGISLASH]     = TUTOR_LEARNSET(TUTOR(MOVE_FURY_CUTTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SPRITZEE]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_AROMATISSE]    = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SWIRLIX]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SLURPUFF]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_INKAY]         = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_MALAMAR]       = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_BINACLE]       = TUTOR_LEARNSET(TUTOR(MOVE_FURY_CUTTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_BARBARACLE]    = TUTOR_LEARNSET(TUTOR(MOVE_FURY_CUTTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SKRELP]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_DRAGALGE]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_CLAUNCHER]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CLAWITZER]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_HELIOPTILE]    = TUTOR_LEARNSET(TUTOR(MOVE_MUD_SLAP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HELIOLISK]     = TUTOR_LEARNSET(TUTOR(MOVE_FIRE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TYRUNT]        = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_TYRANTRUM]     = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_AMAURA]        = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_AURORUS]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SYLVEON]       = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_HAWLUCHA]      = TUTOR_LEARNSET(TUTOR(MOVE_FIRE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_DEDENNE]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CARBINK]       = TUTOR_LEARNSET(TUTOR(MOVE_EXPLOSION)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_GOOMY]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SLIGGOO]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_GOODRA]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_KLEFKI]        = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PHANTUMP]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_TREVENANT]     = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PUMPKABOO]     = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_GOURGEIST]     = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_BERGMITE]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_AVALUGG]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_NOIBAT]        = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_NOIVERN]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_XERNEAS]       = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_YVELTAL]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ZYGARDE]       = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_DIANCIE]       = TUTOR_LEARNSET(TUTOR(MOVE_EXPLOSION)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_HOOPA]         = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_VOLCANION]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ROWLET]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DARTRIX]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DECIDUEYE]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_LITTEN]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TORRACAT]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_INCINEROAR]    = TUTOR_LEARNSET(TUTOR(MOVE_FIRE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_POPPLIO]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_BRIONNE]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PRIMARINA]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PIKIPEK]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TRUMBEAK]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TOUCANNON]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_YUNGOOS]       = TUTOR_LEARNSET(TUTOR(MOVE_MUD_SLAP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_GUMSHOOS]      = TUTOR_LEARNSET(TUTOR(MOVE_FIRE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_GRUBBIN]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CHARJABUG]     = TUTOR_LEARNSET(TUTOR(MOVE_MUD_SLAP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_VIKAVOLT]      = TUTOR_LEARNSET(TUTOR(MOVE_MUD_SLAP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CRABRAWLER]    = TUTOR_LEARNSET(TUTOR(MOVE_DYNAMIC_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_CRABOMINABLE]  = TUTOR_LEARNSET(TUTOR(MOVE_DYNAMIC_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_ORICORIO]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CUTIEFLY]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_RIBOMBEE]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ROCKRUFF]      = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_LYCANROC]      = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_WISHIWASHI]    = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_MAREANIE]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_TOXAPEX]       = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_MUDBRAY]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_MUDSDALE]      = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_DEWPIDER]      = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ARAQUANID]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_FOMANTIS]      = TUTOR_LEARNSET(TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_LURANTIS]      = TUTOR_LEARNSET(TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MORELULL]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SHIINOTIC]     = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SALANDIT]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_SALAZZLE]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_STUFFUL]       = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_BEWEAR]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_BOUNSWEET]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_STEENEE]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_TSAREENA]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_COMFEY]        = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ORANGURU]      = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PASSIMIAN]     = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_WIMPOD]        = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_GOLISOPOD]     = TUTOR_LEARNSET(TUTOR(MOVE_FURY_CUTTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SANDYGAST]     = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PALOSSAND]     = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_PYUKUMUKU]     = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_TYPE_NULL]     = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SILVALLY]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MINIOR]        = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_KOMALA]        = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TURTONATOR]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_TOGEDEMARU]    = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MIMIKYU]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BRUXISH]       = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_DRAMPA]        = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DHELMISE]      = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_JANGMO_O]      = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_HAKAMO_O]      = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_KOMMO_O]       = TUTOR_LEARNSET(TUTOR(MOVE_FIRE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_TAPU_KOKO]     = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TAPU_LELE]     = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_TAPU_BULU]     = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_TAPU_FINI]     = TUTOR_LEARNSET(TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_COSMOG]        = TUTOR_LEARNSET(0),

    [SPECIES_COSMOEM]       = TUTOR_LEARNSET(0),

    [SPECIES_SOLGALEO]      = TUTOR_LEARNSET(TUTOR(MOVE_PSYCH_UP)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LUNALA]        = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_NIHILEGO]      = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BUZZWOLE]      = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_PHEROMOSA]     = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_XURKITREE]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CELESTEELA]    = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_KARTANA]       = TUTOR_LEARNSET(TUTOR(MOVE_FURY_CUTTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_GUZZLORD]      = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)  
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_NECROZMA]      = TUTOR_LEARNSET(TUTOR(MOVE_ROCK_SLIDE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MAGEARNA]      = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURA_SPHERE)
                                        #endif
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MARSHADOW]     = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                        #endif
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_POIPOLE]       = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_NAGANADEL]     = TUTOR_LEARNSET(TUTOR(MOVE_SLEEP_TALK)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                        #endif
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_STAKATAKA]     = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_BLACEPHALON]   = TUTOR_LEARNSET(TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ZERAORA]       = TUTOR_LEARNSET(TUTOR(MOVE_FIRE_PUNCH)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

#ifdef ROGUE_DRAYANO
    [SPECIES_MELMETAL]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING))
#endif

    [SPECIES_GROOKEY]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_THWACKEY]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_RILLABOOM]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SCORBUNNY]     = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_RABOOT]        = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_CINDERACE]     = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SOBBLE]        = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_DRIZZILE]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_INTELEON]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SKWOVET]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_GREEDENT]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ROOKIDEE]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_CORVISQUIRE]   = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_CORVIKNIGHT]   = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_BLIPBUG]       = TUTOR_LEARNSET(0),

    [SPECIES_DOTTLER]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_ORBEETLE]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_NICKIT]        = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_THIEVUL]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_GOSSIFLEUR]    = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_ELDEGOSS]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_WOOLOO]        = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DUBWOOL]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CHEWTLE]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_DREDNAW]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_YAMPER]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BOLTUND]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ROLYCOLY]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_CARKOL]        = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_COALOSSAL]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_APPLIN]        = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_ROLLOUT)),

    [SPECIES_FLAPPLE]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_SLASH)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_APPLETUN]      = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_SILICOBRA]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_SANDACONDA]    = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_CRAMORANT]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_ARROKUDA]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_BARRASKEWDA]   = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_TOXEL]         = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_TOXTRICITY]    = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SIZZLIPEDE]    = TUTOR_LEARNSET(TUTOR(MOVE_DEFENSE_CURL)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_CENTISKORCH]   = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_CLOBBOPUS]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_GRAPPLOCT]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_SINISTEA]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_POLTEAGEIST]   = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_HATENNA]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HATTREM]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_HATTERENE]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_IMPIDIMP]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_MORGREM]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_GRIMMSNARL]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_OBSTAGOON]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_PERRSERKER]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CURSOLA]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_SIRFETCHD]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_MR_RIME]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_RUNERIGUS]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_MILCERY]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_ALCREMIE]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_FALINKS]       = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_PINCURCHIN]    = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SNOM]          = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_FROSMOTH]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AURORA_VEIL)
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_STONJOURNER]   = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_EISCUE]        = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_INDEEDEE]      = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_MORPEKO]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CUFANT]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_COPPERAJAH]    = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_DRACOZOLT]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ARCTOZOLT]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DRACOVISH]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_ARCTOVISH]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_DURALUDON]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWORDS_DANCE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DREEPY]        = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DRAKLOAK]      = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DRAGAPULT]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ZACIAN]        = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_ZAMAZENTA]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_ETERNATUS]     = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_KUBFU]         = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_URSHIFU]       = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BODY_PRESS)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_ZARUDE]        = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_REGIELEKI]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_REGIDRAGO]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_GLASTRIER]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SPECTRIER]     = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_CALYREX]       = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

#ifdef ROGUE_DRAYANO
    [SPECIES_SANDSHREW_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),
#endif

#ifdef ROGUE_DRAYANO
    [SPECIES_SANDSLASH_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DEFENSE_CURL)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SEISMIC_TOSS)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),
#endif

#ifdef ROGUE_DRAYANO
    [SPECIES_VULPIX_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT))
#endif

#ifdef ROGUE_DRAYANO    
    [SPECIES_NINETALES_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AURORA_VEIL)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),
#endif

#ifdef ROGUE_DRAYANO
    [SPECIES_GRIMER_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_MUK_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),
#endif

#ifdef ROGUE_DRAYANO
    [SPECIES_EXEGGUTOR_ALOLAN] = TUTOR_LEARNSET(TUTOR(MOVE_DOUBLE_EDGE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BREAKING_SWIPE)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),
#endif

    [SPECIES_MEOWTH_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_PONYTA_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_RAPIDASH_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_SLOWPOKE_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SLOWBRO_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_FARFETCHD_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FURY_CUTTER)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_WEEZING_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_EXPLOSION)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_MR_MIME_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_MIMIC)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ARTICUNO_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_AIR_CUTTER)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_AURA_SPHERE)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_ZAPDOS_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BLAZE_KICK)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_MOLTRES_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                            | TUTOR(MOVE_AIR_SLASH)
                                            | TUTOR(MOVE_BRAVE_BIRD)
                                        #endif
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_SLOWKING_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_CORSOLA_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_ZIGZAGOON_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_LINOONE_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_DARUMAKA_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_DARMANITAN_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_YAMASK_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BRUTAL_SWING)
                                        #endif
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_STUNFISK_GALARIAN]  = TUTOR_LEARNSET(TUTOR(MOVE_COUNTER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_BURMY_SANDY_CLOAK]  = TUTOR_LEARNSET(TUTOR(MOVE_SNORE)),

    [SPECIES_BURMY_TRASH_CLOAK]  = TUTOR_LEARNSET(TUTOR(MOVE_SNORE)),

    [SPECIES_WORMADAM_SANDY_CLOAK]  = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_ROLLOUT)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_WORMADAM_TRASH_CLOAK]  = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BUG_BUZZ)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_ROTOM_HEAT]    = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ROTOM_WASH]    = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ROTOM_FROST]   = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ROTOM_FAN]     = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_ROTOM_MOW]     = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MUD_SLAP)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_KYUREM_WHITE]  = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_KYUREM_BLACK]  = TUTOR_LEARNSET(TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)),

    [SPECIES_MEOWSTIC_FEMALE]  = TUTOR_LEARNSET(TUTOR(MOVE_DREAM_EATER)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_TOXTRICITY_LOW_KEY]  = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)
                                            | TUTOR(MOVE_THUNDER_WAVE)),

    [SPECIES_SINISTEA_ANTIQUE]  = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_POLTEAGEIST_ANTIQUE]  = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_ALCREMIE_RUBY_CREAM]  = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_ALCREMIE_MATCHA_CREAM]  = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_ALCREMIE_MINT_CREAM]  = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_ALCREMIE_LEMON_CREAM]  = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_ALCREMIE_SALTED_CREAM]  = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_ALCREMIE_RUBY_SWIRL]  = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_ALCREMIE_CARAMEL_SWIRL]  = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_ALCREMIE_RAINBOW_SWIRL]  = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)),

    [SPECIES_INDEEDEE_FEMALE]  = TUTOR_LEARNSET(TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_PSYCH_UP)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE]  = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_COUNTER)
                                            | TUTOR(MOVE_DYNAMIC_PUNCH)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_FIRE_PUNCH)
                                            | TUTOR(MOVE_ICE_PUNCH)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_THUNDER_PUNCH)),

    [SPECIES_ZARUDE_DADA]   = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_ACROBATICS)
                                        #endif
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_MEGA_KICK)
                                            | TUTOR(MOVE_MEGA_PUNCH)
                                            | TUTOR(MOVE_ROCK_SLIDE)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWAGGER)
                                            | TUTOR(MOVE_SWIFT)),

    [SPECIES_CALYREX_ICE_RIDER]  = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BODY_PRESS)
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_ICY_WIND)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)
                                            | TUTOR(MOVE_SWORDS_DANCE)),

    [SPECIES_CALYREX_SHADOW_RIDER]  = TUTOR_LEARNSET(TUTOR(MOVE_BODY_SLAM)
                                        #ifdef ROGUE_DRAYANO
                                            | TUTOR(MOVE_BULLDOZE)
                                        #endif
                                            | TUTOR(MOVE_DOUBLE_EDGE)
                                            | TUTOR(MOVE_ENDURE)
                                            | TUTOR(MOVE_METRONOME)
                                            | TUTOR(MOVE_SLEEP_TALK)
                                            | TUTOR(MOVE_SNORE)
                                            | TUTOR(MOVE_SUBSTITUTE)
                                            | TUTOR(MOVE_SWIFT)),
};
