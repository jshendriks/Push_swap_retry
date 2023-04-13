#! /bin/bash

make

# Reset
Reset="\033[0m"			# Text Reset

# Regular Colors
Black="\033[0;30m"			# Black
Red="\033[0;31m"			# Red
Green="\033[0;32m"			# Green
Yellow="\033[0;33m"			# Yellow
Blue="\033[0;34m"			# Blue
Light_Blue="\033[1;34m"		#Light Blue
Purple="\033[0;35m"			# Purple
Cyan="\033[0;36m"			# Cyan
White="\033[0;37m"			# White

# Bold text style
Bold="\033[1m"

echo 0 1 2 3 4
TEMP_VAR="$(ARG="0 1 2 3 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 1 2 4 3
TEMP_VAR="$(ARG="0 1 2 4 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 1 3 2 4
TEMP_VAR="$(ARG="0 1 3 2 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 1 3 4 2
TEMP_VAR="$(ARG="0 1 3 4 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 1 4 2 3
TEMP_VAR="$(ARG="0 1 4 2 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 1 4 3 2
TEMP_VAR="$(ARG="0 1 4 3 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 2 1 3 4
TEMP_VAR="$(ARG="0 2 1 3 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 2 1 4 3
TEMP_VAR="$(ARG="0 2 1 4 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 2 3 1 4
TEMP_VAR="$(ARG="0 2 3 1 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 2 3 4 1
TEMP_VAR="$(ARG="0 2 3 4 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 2 4 1 3
TEMP_VAR="$(ARG="0 2 4 1 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 2 4 3 1
TEMP_VAR="$(ARG="0 2 4 3 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 3 1 2 4
TEMP_VAR="$(ARG="0 3 1 2 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 3 1 4 2
TEMP_VAR="$(ARG="0 3 1 4 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 3 2 1 4
TEMP_VAR="$(ARG="0 3 2 1 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 3 2 4 1
TEMP_VAR="$(ARG="0 3 2 4 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 3 4 1 2
TEMP_VAR="$(ARG="0 3 4 1 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 3 4 2 1
TEMP_VAR="$(ARG="0 3 4 2 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 4 1 2 3
TEMP_VAR="$(ARG="0 4 1 2 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 4 1 3 2
TEMP_VAR="$(ARG="0 4 1 3 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 4 2 1 3
TEMP_VAR="$(ARG="0 4 2 1 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 4 2 3 1
TEMP_VAR="$(ARG="0 4 2 3 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 4 3 1 2
TEMP_VAR="$(ARG="0 4 3 1 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 0 4 3 2 1
TEMP_VAR="$(ARG="0 4 3 2 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 0 2 3 4
TEMP_VAR="$(ARG="1 0 2 3 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 0 2 4 3
TEMP_VAR="$(ARG="1 0 2 4 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 0 3 2 4
TEMP_VAR="$(ARG="1 0 3 2 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 0 3 4 2
TEMP_VAR="$(ARG="1 0 3 4 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 0 4 2 3
TEMP_VAR="$(ARG="1 0 4 2 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 0 4 3 2
TEMP_VAR="$(ARG="1 0 4 3 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 2 0 3 4
TEMP_VAR="$(ARG="1 2 0 3 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 2 0 4 3
TEMP_VAR="$(ARG="1 2 0 4 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 2 3 0 4
TEMP_VAR="$(ARG="1 2 3 0 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 2 3 4 0
TEMP_VAR="$(ARG="1 2 3 4 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 2 4 0 3
TEMP_VAR="$(ARG="1 2 4 0 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 2 4 3 0
TEMP_VAR="$(ARG="1 2 4 3 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 3 0 2 4
TEMP_VAR="$(ARG="1 3 0 2 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 3 0 4 2
TEMP_VAR="$(ARG="1 3 0 4 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 3 2 0 4
TEMP_VAR="$(ARG="1 3 2 0 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 3 2 4 0
TEMP_VAR="$(ARG="1 3 2 4 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 3 4 0 2
TEMP_VAR="$(ARG="1 3 4 0 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 3 4 2 0
TEMP_VAR="$(ARG="1 3 4 2 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 4 0 2 3
TEMP_VAR="$(ARG="1 4 0 2 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 4 0 3 2
TEMP_VAR="$(ARG="1 4 0 3 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 4 2 0 3
TEMP_VAR="$(ARG="1 4 2 0 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 4 2 3 0
TEMP_VAR="$(ARG="1 4 2 3 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 4 3 0 2
TEMP_VAR="$(ARG="1 4 3 0 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 1 4 3 2 0
TEMP_VAR="$(ARG="1 4 3 2 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 0 1 3 4
TEMP_VAR="$(ARG="2 0 1 3 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 0 1 4 3
TEMP_VAR="$(ARG="2 0 1 4 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 0 3 1 4
TEMP_VAR="$(ARG="2 0 3 1 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 0 3 4 1
TEMP_VAR="$(ARG="2 0 3 4 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 0 4 1 3
TEMP_VAR="$(ARG="2 0 4 1 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 0 4 3 1
TEMP_VAR="$(ARG="2 0 4 3 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 1 0 3 4
TEMP_VAR="$(ARG="2 1 0 3 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 1 0 4 3
TEMP_VAR="$(ARG="2 1 0 4 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 1 3 0 4
TEMP_VAR="$(ARG="2 1 3 0 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 1 3 4 0
TEMP_VAR="$(ARG="2 1 3 4 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 1 4 0 3
TEMP_VAR="$(ARG="2 1 4 0 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 1 4 3 0
TEMP_VAR="$(ARG="2 1 4 3 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 3 0 1 4
TEMP_VAR="$(ARG="2 3 0 1 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 3 0 4 1
TEMP_VAR="$(ARG="2 3 0 4 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 3 1 0 4
TEMP_VAR="$(ARG="2 3 1 0 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 3 1 4 0
TEMP_VAR="$(ARG="2 3 1 4 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 3 4 0 1
TEMP_VAR="$(ARG="2 3 4 0 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 3 4 1 0
TEMP_VAR="$(ARG="2 3 4 1 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 4 0 1 3
TEMP_VAR="$(ARG="2 4 0 1 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 4 0 3 1
TEMP_VAR="$(ARG="2 4 0 3 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 4 1 0 3
TEMP_VAR="$(ARG="2 4 1 0 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 4 1 3 0
TEMP_VAR="$(ARG="2 4 1 3 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 4 3 0 1
TEMP_VAR="$(ARG="2 4 3 0 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 2 4 3 1 0
TEMP_VAR="$(ARG="2 4 3 1 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 0 1 2 4
TEMP_VAR="$(ARG="3 0 1 2 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 0 1 4 2
TEMP_VAR="$(ARG="3 0 1 4 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 0 2 1 4
TEMP_VAR="$(ARG="3 0 2 1 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 0 2 4 1
TEMP_VAR="$(ARG="3 0 2 4 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 0 4 1 2
TEMP_VAR="$(ARG="3 0 4 1 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 0 4 2 1
TEMP_VAR="$(ARG="3 0 4 2 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 1 0 2 4
TEMP_VAR="$(ARG="3 1 0 2 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 1 0 4 2
TEMP_VAR="$(ARG="3 1 0 4 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 1 2 0 4
TEMP_VAR="$(ARG="3 1 2 0 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 1 2 4 0
TEMP_VAR="$(ARG="3 1 2 4 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 1 4 0 2
TEMP_VAR="$(ARG="3 1 4 0 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 1 4 2 0
TEMP_VAR="$(ARG="3 1 4 2 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 2 0 1 4
TEMP_VAR="$(ARG="3 2 0 1 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 2 0 4 1
TEMP_VAR="$(ARG="3 2 0 4 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 2 1 0 4
TEMP_VAR="$(ARG="3 2 1 0 4"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 2 1 4 0
TEMP_VAR="$(ARG="3 2 1 4 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 2 4 0 1
TEMP_VAR="$(ARG="3 2 4 0 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 2 4 1 0
TEMP_VAR="$(ARG="3 2 4 1 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 4 0 1 2
TEMP_VAR="$(ARG="3 4 0 1 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 4 0 2 1
TEMP_VAR="$(ARG="3 4 0 2 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 4 1 0 2
TEMP_VAR="$(ARG="3 4 1 0 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 4 1 2 0
TEMP_VAR="$(ARG="3 4 1 2 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 4 2 0 1
TEMP_VAR="$(ARG="3 4 2 0 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 3 4 2 1 0
TEMP_VAR="$(ARG="3 4 2 1 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 0 1 2 3
TEMP_VAR="$(ARG="4 0 1 2 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 0 1 3 2
TEMP_VAR="$(ARG="4 0 1 3 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 0 2 1 3
TEMP_VAR="$(ARG="4 0 2 1 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 0 2 3 1
TEMP_VAR="$(ARG="4 0 2 3 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 0 3 1 2
TEMP_VAR="$(ARG="4 0 3 1 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 0 3 2 1
TEMP_VAR="$(ARG="4 0 3 2 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 1 0 2 3
TEMP_VAR="$(ARG="4 1 0 2 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 1 0 3 2
TEMP_VAR="$(ARG="4 1 0 3 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 1 2 0 3
TEMP_VAR="$(ARG="4 1 2 0 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 1 2 3 0
TEMP_VAR="$(ARG="4 1 2 3 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 1 3 0 2
TEMP_VAR="$(ARG="4 1 3 0 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 1 3 2 0
TEMP_VAR="$(ARG="4 1 3 2 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 2 0 1 3
TEMP_VAR="$(ARG="4 2 0 1 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 2 0 3 1
TEMP_VAR="$(ARG="4 2 0 3 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 2 1 0 3
TEMP_VAR="$(ARG="4 2 1 0 3"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 2 1 3 0
TEMP_VAR="$(ARG="4 2 1 3 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 2 3 0 1
TEMP_VAR="$(ARG="4 2 3 0 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 2 3 1 0
TEMP_VAR="$(ARG="4 2 3 1 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 3 0 1 2
TEMP_VAR="$(ARG="4 3 0 1 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 3 0 2 1
TEMP_VAR="$(ARG="4 3 0 2 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 3 1 0 2
TEMP_VAR="$(ARG="4 3 1 0 2"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 3 1 2 0
TEMP_VAR="$(ARG="4 3 1 2 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 3 2 0 1
TEMP_VAR="$(ARG="4 3 2 0 1"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
echo 4 3 2 1 0
TEMP_VAR="$(ARG="4 3 2 1 0"; ./push_swap $ARG | ./checker_Mac $ARG)"
echo -e $Green $TEMP_VAR $Reset
