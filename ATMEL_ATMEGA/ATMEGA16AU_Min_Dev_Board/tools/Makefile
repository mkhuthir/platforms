none:
	$(error use 'make flash' or 'make fuse')

flash:
	avrdude -c usbtiny -pATMEGA16 -U flash:w:main.hex
fuse:
	avrdude -c usbtiny -pATMEGA16 -U hfuse:w:0x46:m -U lfuse:w:0xDE:m
