# Muthanna Alwahash
# Oct 2023

fname = blink

# compile for attiny85 with warnings, optimizations, and 8 MHz clock frequency
$(fname).hex: $(fname).c
	avr-gcc -Wall -Os -DF_CPU=8000000 -mmcu=attiny85 -o $(fname).o $(fname).c
	avr-objcopy -j .text -j .data -O ihex $(fname).o $(fname).hex

# upload using AVRISP mkII programmer USB port
upload: $(fname).hex
	avrdude -c stk500v2 -P usb -p t85 -U flash:w:$(fname).hex:i

# clean compilation files
clean: /dev/null
	rm -f $(fname).o $(fname).hex

# read MCU info
info:
	avrdude -c stk500v2 -P usb -p t85 -v

# set attiny85 fuses for 8 MHz clock frequency. default setting is 1 MHZ (lf= hf= ef=)
fuse:
	avrdude -c stk500v2 -P usb -p t85 -U lfuse:w:0xe2:m -U hfuse:w:0xdf:m -U efuse:w:0xff:m
