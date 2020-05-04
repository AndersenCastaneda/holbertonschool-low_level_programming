#!/bin/bash
wget https://github.com/AndersenCastaneda/holbertonschool-low_level_programming/tree/master/0x18-dynamic_libraries/libMagicWin.so
export LD_PRELOAD=./libMagicWin.so
