#!/bin/bash
wfet -p /tmp https://github.com/Safahadidy/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/temp/libgiga.so
