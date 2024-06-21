#!/bin/sh

sudo apt install openocd urjtag gdb-multiarch 
sudo apt install device-tree-compiler gcc 
sudo apt install cmake make ninja-build
sudo apt install dfu-util

pip install -U pyocd
pip install --pre -U git+https://github.com/makerdiary/uf2utils.git@main