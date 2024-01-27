#!/bin/sh

sudo apt install openocd
sudo apt install urjtag
pip install -U pyocd
sudo apt install avrdude
sudo apt install bossa-cli 
pip install --pre -U git+https://github.com/makerdiary/uf2utils.git@main
