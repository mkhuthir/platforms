help:
	@echo "This Makefile has no default rule. Use one of the following:"
	@echo "make fuse ...... to flash the fuses"
	@echo "make flash ..... to flash the firmware"
	
flash:
	avrdude -cUSBASP  -pATMEGA32 -U flash:w:main.hex
fuse:
	avrdude -cUSBASP -pATMEGA32 -U hfuse:w:0x99:m -U lfuse:w:0xE1:m
