#!/bin/bash

if [ "${PWD##*/}" = ".github" ]
then
cd ..
fi

cmake .

mkdir Debug
mkdir Release

cp vendor/SDL2.dll Debug/
cp vendor/SDL2.dll Release/

if [ "${PWD##*/}" = ".github" ]
then
cd .github
fi
