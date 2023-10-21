// Muthanna Alwahash
// Oct 2023

#include "delay.h"

void delay_ms(unsigned char ms)
{
    unsigned int i;
    do
    {
        i = F_CPU / 13000;  
        while (--i);        // 14T per loop
    } while (--ms);
}
