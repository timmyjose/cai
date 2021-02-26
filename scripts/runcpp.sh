#!/bin/bash

file="$1"
filename="${file%.*}"

clang++ -Wall -std=c++17 -O3 -o ${filename} ${file} && ./${filename} < ${filename}.in
rm -f ${filename}