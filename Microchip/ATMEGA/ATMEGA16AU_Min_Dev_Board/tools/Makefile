help:
	@echo "This Makefile has no default rule. Use one of the following:"
	@echo "make fuse ...... to flash the fuses"
	@echo "make flash ..... to flash the firmware"

flash:
	avrdude -cUSBTINY -pATMEGA16 -U flash:w:main.hex
fuse:
	avrdude -cUSBTINY -pATMEGA16 -U hfuse:w:0x46:m -U lfuse:w:0xDE:m
