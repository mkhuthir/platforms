#include <stdint.h>
#include <stdio.h>
#include "STC89xx.h"
#include "delay.h"


void main()
{
    
    while (1)
    {
        P0 = 0xFF;  // LEDs On
        P1 = 0xFF;
        P2 = 0xFF;
        P3 = 0xFF;
        P4 = 0xFF;

        delay_ms(100);

        P0 = 0x00;  // LEDs Off
        P1 = 0x00;
        P2 = 0x00;
        P3 = 0x00;
        P4 = 0x00;

        delay_ms(100);

    }
}
