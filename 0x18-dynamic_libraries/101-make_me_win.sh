#!/bin/bash
wget -P /tmp https://github.com/AndersenCastaneda/holbertonschool-low_level_programming/tree/master/0x18-dynamic_libraries/libwinjackpot.so
export LD_PRELOAD=/tmp/libwinjackpot.so
