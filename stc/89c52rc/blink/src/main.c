#include <stdint.h>
#include <stdio.h>
#include "STC89xx.h"
#include "delay.h"

#define ledPin P1

void main()
{
    while (1)
    {
        ledPin = 0x00;  // LED on
        delay_ms(10);
        ledPin = 0xff;  // LED off
        delay_ms(10);

    }
}
