#!/bin/bash
wget -P /tmp https://github.com/AndersenCastaneda/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/libMagicWin.so
export LD_PRELOAD=/tmp/libMagicWin.so
