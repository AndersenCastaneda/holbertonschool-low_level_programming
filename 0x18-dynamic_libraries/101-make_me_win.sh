#!/bin/bash
wget https://github.com/AndersenCastaneda/holbertonschool-low_level_programming/tree/master/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=./libwin.so
