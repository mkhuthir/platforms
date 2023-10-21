// Muthanna Alwahash
// Oct 2023

#include "STC89xx.h"
#include "lib_delay.h"

void main()
{
    
    while (1)
    {
        P0 = 0xFF;  // LEDs On all ports P0-P4
        P1 = 0xFF;
        P2 = 0xFF;
        P3 = 0xFF;
        P4 = 0xFF;

        delay_ms(100);

        P0 = 0x00;  // LEDs Off all ports P0-P4
        P1 = 0x00;
        P2 = 0x00;
        P3 = 0x00;
        P4 = 0x00;

        delay_ms(100);  // delay 100ms

    }
}
