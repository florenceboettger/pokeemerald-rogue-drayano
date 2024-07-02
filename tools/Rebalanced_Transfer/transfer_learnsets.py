from pathlib import Path
import json
import re
import os

pokemon_path = Path("./tools/Rebalanced_Transfer/src").resolve()
level_up_path = pokemon_path / "level_up_learnsets.h"
tutor_path = pokemon_path / "tutor_learnsets.h"
tmhm_path = pokemon_path / "tmhm_learnsets.h"

profiles_path = Path("./tools/Pokabbie/PokemonDataGenerator/PokemonDataGenerator/Resources/PokemonProfiles/").resolve()
rebalanced_path = profiles_path / "Rebalanced"
ex_path = profiles_path / "Ex"
origin_path = Path("./tools/Pokabbie/PokemonDataGenerator/PokemonDataGenerator/bin/Debug/content_cache/pokemon_profiles/ex").resolve()

new_moves = {}

with level_up_path.open('r') as f:
    lastmon = ''
    linenum = 0
    ignore_mode = False
    rebalanced = False
    moves = []
    for line in f.readlines():
        linenum += 1
        name_match = re.search(r"s(?P<name>\w*)LevelUpLearnset\[\] = {", line)
        if name_match != None:
            lastmon = name_match.group("name")
            lastmon = re.sub(r"([a-z])([A-Z])", r"\1_\2", lastmon).lower()
            rebalanced = False
            ignore_mode = False
            moves = []
            continue
        if re.search(r"#ifdef ROGUE_DRAYANO", line) != None:
            ignore_mode = False
            rebalanced = True
            continue
        if re.search(r"#else", line) != None:
            ignore_mode = True
            continue
        if re.search(r"#endif", line) != None:
            ignore_mode = False
            continue
        move_match = re.search(r"LEVEL_UP_MOVE\(\s?(?P<level>\d*), (?P<name>\w*)\),", line)
        if not ignore_mode and move_match != None:
            moves.append({"Move": move_match.group("name"), "Level": move_match.group("level")})
            continue
        if re.search(r"LEVEL_UP_END", line) != None:
            if rebalanced:
                new_moves[lastmon] = {"lvl": moves}
            else:                
                new_moves[lastmon] = {}

with tutor_path.open('r') as f:
    lastmon = ''
    linenum = 0
    moves = []
    rebalanced = False
    for line in f.readlines():
        linenum += 1
        name_match = re.search(r"\[SPECIES_(?P<name>\w*)\]", line)
        if name_match != None:
            lastmon = name_match.group("name").lower()
            moves = []
        if re.search(r"#ifdef ROGUE_DRAYANO", line) != None:
            rebalanced = True
            continue
        if re.search(r"#endif", line) != None:
            rebalanced = False
            continue
        if rebalanced:
            move_match = re.search(r"TUTOR\((?P<name>\w*)\)", line)
            if move_match != None:
                moves.append(move_match.group("name"))
        if re.search(r"\,", line) != None:
            if len(moves) > 0:
                new_moves[lastmon] = {"tutor": moves}

with tmhm_path.open('r') as f:
    lastmon = ''
    linenum = 0
    moves = []
    rebalanced = False
    for line in f.readlines():
        linenum += 1
        name_match = re.search(r"\[SPECIES_(?P<name>\w*)\]", line)
        if name_match != None:
            lastmon = name_match.group("name").lower()
            moves = []
        if re.search(r"#ifdef ROGUE_DRAYANO", line) != None:
            rebalanced = True
            continue
        if re.search(r"#endif", line) != None:
            rebalanced = False
            continue
        if rebalanced:
            move_match = re.search(r"TMHM\((TM|HM)\d\d_(?P<name>\w*)\)", line)
            if move_match != None:
                moves.append("MOVE_" + move_match.group("name"))
        if re.search(r"\,", line) != None:
            if len(moves) > 0 and (re.search(r"(deerling|sawsbuck|sinistea|polteageist|alcremie|zarude)_", lastmon) == None):
                new_moves[lastmon] = {"tmhm": moves}

print(len(new_moves))

for mon, moves in new_moves.items():
    if len(moves) > 0:
        origin_file = origin_path / f"F_species_{mon}.json"
        d = {}
        if origin_file.exists():
            with origin_file.open('r') as f:
                d = json.load(f)
        else:
            ex_file = ex_path / f"species_{mon}.json"
            with ex_file.open('r') as f:
                d = json.load(f)
        if "lvl" in moves:
            d["LevelUpMoves"] = moves["lvl"]
        if "tutor" in moves:
            d["TutorMoves"] = list(set(d["TutorMoves"]) | set(moves["tutor"]))
        if "tmhm" in moves:
            d["TutorMoves"] = list(set(d["TutorMoves"]) | set(moves["tmhm"]))
        rebalanced_file = rebalanced_path / f"species_{mon}.json"
        with rebalanced_file.open('w', encoding='utf-8') as f:
            json.dump(d, f, indent=4)