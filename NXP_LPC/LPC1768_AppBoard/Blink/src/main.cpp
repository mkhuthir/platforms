// Muthanna Alwahash
// Nov 2023

#include "mbed.h"

#define delay     100ms     // Blinking rate in milliseconds

DigitalOut led(LED1);

int main()
{
    led = 0;

    while (true) {
        led = !led;
        ThisThread::sleep_for(delay);
    }
}