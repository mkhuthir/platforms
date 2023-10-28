# Muthanna Alwahash
# Oct 2023

fname = blank

# compile for attiny86 with warnings, optimizations, and 1 MHz clock frequency
$(fname).hex: $(fname).c
	avr-gcc -Wall -Os -DF_CPU=1000000 -mmcu=attiny85 -o $(fname).o $(fname).c
	avr-objcopy -j .text -j .data -O ihex $(fname).o $(fname).hex

# upload using AVRISP MKII programmer USB port
upload: $(fname).hex
	avrdude -c stk500v2 -P usb -p t85 -U flash:w:$(fname).hex:i

# clean compilation files
clean: /dev/null
	rm -f $(fname).o $(fname).hex
