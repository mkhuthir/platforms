#include <stdint.h>
#include <stdio.h>
#include "STC89xx.h"
#include "delay.h"

#define ledPin P14      // LED is connected to pin P1.4

void main()
{
    while (1)
    {
        ledPin = 0x00;  // LED on
        delay_ms(5);

        ledPin = 0xff;  // LED off
        delay_ms(5);

    }
}
