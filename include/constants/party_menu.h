#ifndef GUARD_CONSTANTS_PARTY_MENU_H
#define GUARD_CONSTANTS_PARTY_MENU_H

#define PARTY_NOTHING_CHOSEN 0xFF

#define AILMENT_NONE  0
#define AILMENT_PSN   1
#define AILMENT_PRZ   2
#define AILMENT_SLP   3
#define AILMENT_FRZ   4
#define AILMENT_BRN   5
#define AILMENT_PKRS  6
#define AILMENT_FNT   7

    #define TUTOR_MOVE_MEGA_PUNCH      0
    #define TUTOR_MOVE_SWORDS_DANCE    1
    #define TUTOR_MOVE_MEGA_KICK       2
    #define TUTOR_MOVE_BODY_SLAM       3
    #define TUTOR_MOVE_DOUBLE_EDGE     4
    #define TUTOR_MOVE_COUNTER         5
    #define TUTOR_MOVE_SEISMIC_TOSS    6
    #define TUTOR_MOVE_MIMIC           7
    #define TUTOR_MOVE_METRONOME       8
    #define TUTOR_MOVE_SOFT_BOILED     9
    #define TUTOR_MOVE_DREAM_EATER     10
    #define TUTOR_MOVE_THUNDER_WAVE    11
    #define TUTOR_MOVE_EXPLOSION       12
    #define TUTOR_MOVE_ROCK_SLIDE      13
    #define TUTOR_MOVE_SUBSTITUTE      14
    #define TUTOR_MOVE_DYNAMIC_PUNCH   15
    #define TUTOR_MOVE_ROLLOUT         16
    #define TUTOR_MOVE_PSYCH_UP        17
    #define TUTOR_MOVE_SNORE           18
    #define TUTOR_MOVE_ICY_WIND        19
    #define TUTOR_MOVE_ENDURE          20
    #define TUTOR_MOVE_MUD_SLAP        21
    #define TUTOR_MOVE_ICE_PUNCH       22
    #define TUTOR_MOVE_SWAGGER         23
    #define TUTOR_MOVE_SLEEP_TALK      24
    #define TUTOR_MOVE_SWIFT           25
    #define TUTOR_MOVE_DEFENSE_CURL    26
    #define TUTOR_MOVE_THUNDER_PUNCH   27
    #define TUTOR_MOVE_FIRE_PUNCH      28
    #define TUTOR_MOVE_FURY_CUTTER     29
#ifdef ROGUE_DRAYANO // introducing additional tutors to make wide-distribution moves more straightforward to assign to mons.
    #define TUTOR_MOVE_ACROBATICS       30
    #define TUTOR_MOVE_AIR_CUTTER       31
    #define TUTOR_MOVE_AIR_SLASH        32
    #define TUTOR_MOVE_AURA_SPHERE      33
    #define TUTOR_MOVE_AURORA_VEIL      34
    #define TUTOR_MOVE_BLAZE_KICK       35
    #define TUTOR_MOVE_BODY_PRESS       36
    #define TUTOR_MOVE_BRAVE_BIRD       37
    #define TUTOR_MOVE_BREAKING_SWIPE   38
    #define TUTOR_MOVE_BRUTAL_SWING     39
    #define TUTOR_MOVE_BUG_BUZZ         40
    #define TUTOR_MOVE_BULLDOZE         41
    #define TUTOR_MOVE_BURNING_JEALOUSY 42
    #define TUTOR_MOVE_COACHING         43
    #define TUTOR_MOVE_CORROSIVE_GAS    44
    #define TUTOR_MOVE_COVET            45
    #define TUTOR_MOVE_CROSS_POISON     46
    #define TUTOR_MOVE_CRUNCH           47
    #define TUTOR_MOVE_DARK_PULSE       48
    #define TUTOR_MOVE_DARKEST_LARIAT   49
    #define TUTOR_MOVE_DAZZLING_GLEAM   50
    #define TUTOR_MOVE_DEFOG            51
    #define TUTOR_MOVE_DRACO_METEOR     52
    #define TUTOR_MOVE_DRAGON_PULSE     53
    #define TUTOR_MOVE_DRAIN_PUNCH      54
    #define TUTOR_MOVE_DRAINING_KISS    55
    #define TUTOR_MOVE_DRILL_RUN        56
    #define TUTOR_MOVE_DUAL_WINGBEAT    57
    #define TUTOR_MOVE_EARTH_POWER      58
    #define TUTOR_MOVE_ELECTROWEB       59
    #define TUTOR_MOVE_ENCORE           60
    #define TUTOR_MOVE_ENERGY_BALL      61
    #define TUTOR_MOVE_EXPANDING_FORCE  62
    #define TUTOR_MOVE_THUNDER_FANG     63
    #define TUTOR_MOVE_ICE_FANG         64
    #define TUTOR_MOVE_FIRE_FANG        65
    #define TUTOR_MOVE_FLARE_BLITZ      66
    #define TUTOR_MOVE_FLASH_CANNON     67
    #define TUTOR_MOVE_FLING            68
    #define TUTOR_MOVE_FLIP_TURN        69
    #define TUTOR_MOVE_FOUL_PLAY        70
    #define TUTOR_MOVE_GIGA_IMPACT      71
    #define TUTOR_MOVE_GRASSY_GLIDE     72
    #define TUTOR_MOVE_HEAL_BELL        73
    #define TUTOR_MOVE_HEAT_CRASH       74
    #define TUTOR_MOVE_HEAT_WAVE        75
    #define TUTOR_MOVE_HELPING_HAND     76
    #define TUTOR_MOVE_HEX              77
    #define TUTOR_MOVE_HIGH_HORSEPOWER  78
    #define TUTOR_MOVE_HONE_CLAWS       79
    #define TUTOR_MOVE_HURRICANE        80
    #define TUTOR_MOVE_HYPER_VOICE      81
    #define TUTOR_MOVE_ICICLE_SPEAR     82
    #define TUTOR_MOVE_IRON_DEFENSE     83
    #define TUTOR_MOVE_IRON_HEAD        84
    #define TUTOR_MOVE_KNOCK_OFF        85
    #define TUTOR_MOVE_LASH_OUT         86
    #define TUTOR_MOVE_LEAF_STORM       87
    #define TUTOR_MOVE_LEECH_LIFE       88
    #define TUTOR_MOVE_LIQUIDATION      89
    #define TUTOR_MOVE_LOW_SWEEP        90
    #define TUTOR_MOVE_METEOR_BEAM      91
    #define TUTOR_MOVE_MISTY_EXPLOSION  92
    #define TUTOR_MOVE_MYSTICAL_FIRE    93
    #define TUTOR_MOVE_NASTY_PLOT       94
    #define TUTOR_MOVE_PHANTOM_FORCE    95
    #define TUTOR_MOVE_POLTERGEIST      96
    #define TUTOR_MOVE_OUTRAGE          97
    #define TUTOR_MOVE_PLAY_ROUGH       98
    #define TUTOR_MOVE_POISON_JAB       99
    #define TUTOR_MOVE_POLLEN_PUFF      100
    #define TUTOR_MOVE_POWER_GEM        101
    #define TUTOR_MOVE_POWER_WHIP       102
    #define TUTOR_MOVE_PSYCHIC_FANGS    103
    #define TUTOR_MOVE_PSYCHO_CUT       104
    #define TUTOR_MOVE_PSYSHOCK         105
    #define TUTOR_MOVE_RISING_VOLTAGE   106
    #define TUTOR_MOVE_ROCK_CLIMB       107
    #define TUTOR_MOVE_ROOST            108
    #define TUTOR_MOVE_SCALD            109
    #define TUTOR_MOVE_SCALE_SHOT       110
    #define TUTOR_MOVE_SCORCHING_SANDS  111
    #define TUTOR_MOVE_SEED_BOMB        112
    #define TUTOR_MOVE_SHADOW_CLAW      113
    #define TUTOR_MOVE_SIGNAL_BEAM      114
    #define TUTOR_MOVE_SKITTER_SMACK    115
    #define TUTOR_MOVE_SLUDGE_WAVE      116
    #define TUTOR_MOVE_SMART_STRIKE     117
    #define TUTOR_MOVE_SNARL            118
    #define TUTOR_MOVE_SPIKES           119
    #define TUTOR_MOVE_STEALTH_ROCK     120
    #define TUTOR_MOVE_STEEL_ROLLER     121
    #define TUTOR_MOVE_STOMPING_TANTRUM 122
    #define TUTOR_MOVE_STONE_EDGE       123
    #define TUTOR_MOVE_SUPERPOWER       124
    #define TUTOR_MOVE_SYNTHESIS        125
    #define TUTOR_MOVE_TAIL_SLAP        126
    #define TUTOR_MOVE_GRASSY_TERRAIN   127
    #define TUTOR_MOVE_MISTY_TERRAIN    128
    #define TUTOR_MOVE_ELECTRIC_TERRAIN 129
    #define TUTOR_MOVE_PSYCHIC_TERRAIN  130
    #define TUTOR_MOVE_TERRAIN_PULSE    131
    #define TUTOR_MOVE_THROAT_CHOP      132
    #define TUTOR_MOVE_TRI_ATTACK       133
    #define TUTOR_MOVE_TRICK            134
    #define TUTOR_MOVE_TRICK_ROOM       135
    #define TUTOR_MOVE_TRIPLE_AXEL      136
    #define TUTOR_MOVE_U_TURN           137
    #define TUTOR_MOVE_VENOM_DRENCH     138
    #define TUTOR_MOVE_VENOSHOCK        139
    #define TUTOR_MOVE_VOLT_SWITCH      140
    #define TUTOR_MOVE_WEATHER_BALL     141
    #define TUTOR_MOVE_WHIRLPOOL        142
    #define TUTOR_MOVE_WILD_CHARGE      143
    #define TUTOR_MOVE_WILL_O_WISP      144
    #define TUTOR_MOVE_WORK_UP          145
    #define TUTOR_MOVE_X_SCISSOR        146
    #define TUTOR_MOVE_ZEN_HEADBUTT     147
    #define TUTOR_MOVE_COUNT            148
#else
    #define TUTOR_MOVE_COUNT           30
#endif

#define PARTY_LAYOUT_SINGLE          0
#define PARTY_LAYOUT_DOUBLE          1
#define PARTY_LAYOUT_MULTI           2
#define PARTY_LAYOUT_MULTI_SHOWCASE  3  // The layout during the screen that appears just before a multi battle
#define PARTY_LAYOUT_COUNT           4
#define KEEP_PARTY_LAYOUT            0xFF

#define PARTY_MENU_TYPE_FIELD                     0
#define PARTY_MENU_TYPE_IN_BATTLE                 1
#define PARTY_MENU_TYPE_CONTEST                   2
#define PARTY_MENU_TYPE_CHOOSE_MON                3
#define PARTY_MENU_TYPE_CHOOSE_HALF               4  // multi battles, eReader battles, and some battle facilities
#define PARTY_MENU_TYPE_MULTI_SHOWCASE            5
#define PARTY_MENU_TYPE_DAYCARE                   6
#define PARTY_MENU_TYPE_MOVE_RELEARNER            7
#define PARTY_MENU_TYPE_UNION_ROOM_REGISTER       8  // trading board
#define PARTY_MENU_TYPE_UNION_ROOM_TRADE          9  // trading board
#define PARTY_MENU_TYPE_SPIN_TRADE                10 // Unused beta for Gen IV's Spin Trade
#define PARTY_MENU_TYPE_MINIGAME                  11
#define PARTY_MENU_TYPE_STORE_PYRAMID_HELD_ITEMS  12

#define PARTY_ACTION_CHOOSE_MON         0
#define PARTY_ACTION_SEND_OUT           1
#define PARTY_ACTION_CANT_SWITCH        2
#define PARTY_ACTION_USE_ITEM           3
#define PARTY_ACTION_ABILITY_PREVENTS   4
#define PARTY_ACTION_GIVE_ITEM          5
#define PARTY_ACTION_GIVE_PC_ITEM       6   // Unused. Not possible to give non-mail items directly from PC
#define PARTY_ACTION_GIVE_MAILBOX_MAIL  7
#define PARTY_ACTION_SWITCH             8
#define PARTY_ACTION_SWITCHING          9
#define PARTY_ACTION_SOFTBOILED         10
#define PARTY_ACTION_CHOOSE_AND_CLOSE   11
#define PARTY_ACTION_MOVE_TUTOR         12
#define PARTY_ACTION_MINIGAME           13
#define PARTY_ACTION_REUSABLE_ITEM      14  // Unused. The only reusable items are handled separately
#define PARTY_ACTION_CHOOSE_RELEASE     PARTY_ACTION_REUSABLE_ITEM

// IDs for DisplayPartyMenuStdMessage, to display the message at the bottom of the party menu
#define PARTY_MSG_CHOOSE_MON                0
#define PARTY_MSG_CHOOSE_MON_OR_CANCEL      1
#define PARTY_MSG_CHOOSE_MON_AND_CONFIRM    2
#define PARTY_MSG_MOVE_TO_WHERE             3
#define PARTY_MSG_TEACH_WHICH_MON           4
#define PARTY_MSG_USE_ON_WHICH_MON          5
#define PARTY_MSG_GIVE_TO_WHICH_MON         6
#define PARTY_MSG_NOTHING_TO_CUT            7
#define PARTY_MSG_CANT_SURF_HERE            8
#define PARTY_MSG_ALREADY_SURFING           9
#define PARTY_MSG_CURRENT_TOO_FAST          10
#define PARTY_MSG_ENJOY_CYCLING             11
#define PARTY_MSG_ALREADY_IN_USE            12
#define PARTY_MSG_CANT_USE_HERE             13
#define PARTY_MSG_NO_MON_FOR_BATTLE         14
#define PARTY_MSG_CHOOSE_MON_2              15
#define PARTY_MSG_NOT_ENOUGH_HP             16
#define PARTY_MSG_X_MONS_ARE_NEEDED         17
#define PARTY_MSG_MONS_CANT_BE_SAME         18
#define PARTY_MSG_NO_SAME_HOLD_ITEMS        19
#define PARTY_MSG_UNUSED                    20
#define PARTY_MSG_DO_WHAT_WITH_MON          21
#define PARTY_MSG_RESTORE_WHICH_MOVE        22
#define PARTY_MSG_BOOST_PP_WHICH_MOVE       23
#define PARTY_MSG_DO_WHAT_WITH_ITEM         24
#define PARTY_MSG_DO_WHAT_WITH_MAIL         25
#define PARTY_MSG_ALREADY_HOLDING_ONE       26
#define PARTY_MSG_NONE                      127

// IDs for DisplayPartyPokemonDescriptionText, to display a message in the party pokemon's box
#define PARTYBOX_DESC_NO_USE      0
#define PARTYBOX_DESC_ABLE_3      1
#define PARTYBOX_DESC_FIRST       2
#define PARTYBOX_DESC_SECOND      3
#define PARTYBOX_DESC_THIRD       4
#define PARTYBOX_DESC_FOURTH      5
#define PARTYBOX_DESC_ABLE        6
#define PARTYBOX_DESC_NOT_ABLE    7
#define PARTYBOX_DESC_ABLE_2      8
#define PARTYBOX_DESC_NOT_ABLE_2  9
#define PARTYBOX_DESC_LEARNED     10
#define PARTYBOX_DESC_HAVE        11
#define PARTYBOX_DESC_DONT_HAVE   12

#define SELECTWINDOW_ACTIONS  0
#define SELECTWINDOW_ITEM     1
#define SELECTWINDOW_MAIL     2
#define SELECTWINDOW_MOVES    3

#endif // GUARD_CONSTANTS_PARTY_MENU_H
