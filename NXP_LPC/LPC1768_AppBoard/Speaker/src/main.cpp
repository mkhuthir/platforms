// Muthanna Alwahash
// Nov 2023

#include "mbed.h"

#define delay_ms 50

DigitalIn   fire(p14);  // Joystick switch pin
PwmOut      spkr(p26);  // Speaker pin

int main()
{
    while (1) {
        for (float i=2000.0; i<10000.0; i+=100) {
            spkr.period(1.0/i);
            spkr=0.5;
            thread_sleep_for(delay_ms);
        }
        spkr=0.0;
        while(!fire) {}
    }
}