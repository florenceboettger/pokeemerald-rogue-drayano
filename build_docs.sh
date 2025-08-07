#!/bin/sh

echo "Running test and generating file."

make check -j16 TESTS="Print data" | grep -oPz '(?s)\[\n(.|\n)*?\]\n' | tr -d '\0' > ./tools/Rebalanced/DocGen/data/pokemon.json