// Muthanna Alwahash
// Nov 2023

#include "mbed.h"

BusIn joy(p15,p12,p13,p16);         // Joystick direction pins
DigitalIn fire(p14);                // Joystick switch

BusOut leds(LED1,LED2,LED3,LED4);   // LEDs

int main()
{
    while(1) {
        if (fire) {
            leds=0xf;               // Turn on all LEDs
        } else {
            leds=joy;               // Turn on one LED based on direction
        }
        
    }
}
