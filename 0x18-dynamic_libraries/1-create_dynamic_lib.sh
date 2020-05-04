#!/bin/bash
gcc -fPIC -c *.c
gcc _shared -o liball.so *.o
