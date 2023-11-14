// Muthanna Alwahash
// Nov 2023

#include "mbed.h"
#define	delay_ms 50

DigitalOut led1(LED1);

int main()
{
    printf("This is the bare metal blinky example running on Mbed OS %d.%d.%d.\n",
		MBED_MAJOR_VERSION,
		MBED_MINOR_VERSION,
		MBED_PATCH_VERSION);  // This will be sent to USB TX at baudrate 9600

    while (true)
    {
        led1 = !led1;
        thread_sleep_for(delay_ms);
    }
}
