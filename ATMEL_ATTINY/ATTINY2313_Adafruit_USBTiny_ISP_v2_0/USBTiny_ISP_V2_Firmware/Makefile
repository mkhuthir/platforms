none:
	$(error use 'make flash' or 'make fuse')

flash:
	avrdude -c usbtiny -B 1 -pt2313 -U flash:w:main.hex
fuse:
	avrdude -c usbtiny -pt2313 -U hfuse:w:0xdf:m -U lfuse:w:0xef:m
