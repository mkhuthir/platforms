// Muthanna Alwahash
// Nov 2023

// Connect DevEBox-(3.3V, GND, SWDIO, SWCLK) to ST-Link-(1-VDD, 2-SWCLK, 3-GND, 4-SWDIO)
// Connect DevEBox-PA2 > ST-Link-RX and DevEBox-PA3 > ST-Link-TX to see the printf output on ST-Link-VCP.

#include "mbed.h"

#define WAIT_TIME_MS 500 
DigitalOut led1(PC_13);         // DevEBox_F411CE User_LED is on pin PC13
                                

int main()
{
    printf("This is the bare metal blinky example running on Mbed OS %d.%d.%d.\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);

    while (true)
    {
        led1 = !led1;
        thread_sleep_for(WAIT_TIME_MS);
    }
}
