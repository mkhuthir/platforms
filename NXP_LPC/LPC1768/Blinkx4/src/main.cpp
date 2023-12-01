// Muthanna Alwahash
// Nov 2023

#include "mbed.h"
#define	delay_ms 150

BusOut leds(LED1,LED2,LED3,LED4);   	// LEDs

int main()
{
	printf("This is the bare metal blinky example running on Mbed OS %d.%d.%d.\n",
	MBED_MAJOR_VERSION,
	MBED_MINOR_VERSION,
	MBED_PATCH_VERSION);  // This will be sent to USB TX at baudrate 9600

	while (true){
		leds = 0xf;
		thread_sleep_for(delay_ms);
		leds = 0x0;
		thread_sleep_for(delay_ms);
    }
}
