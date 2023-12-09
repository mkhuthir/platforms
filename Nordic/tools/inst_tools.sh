#!/bin/sh

sudo apt install openocd urjtag gdb-multiarch 
sudo apt install device-tree-compiler gcc 
sudo apt install cmake make ninja-build
sudo apt install 

pip install -U pyocd




# verify versions
echo "cmake:\n"
cmake --version
echo "pyton3:\n"
python3 --version
echo "dtc:\n"
dtc --version