// Muthanna Alwahash
// Jan 2024


#include <stdint.h>
#include <xc.h>
#include "main.h"

int main() 
{

    
    LED_TRIS = 0;   // Initialize the LED. This symbol is defined in system_config.h

    // Initialize Timer 1
    // system.c configuration sets the MCU's oscillator to 32MHz
    // For the LED to blink at a rate of 1Hz, it must be toggled at 2Hz.
    // Fcy = Fosc / 2 = 16E6 [Hz]

    
    _T1IF   = 0;
    _T1IE   = 0;
    TMR1    = 0x0000;
    PR1     = 0x7A12;       // Fcy[Hz] / 256 / 2[Hz] = 0x7A12;
    T1CONbits.TCKPS = 3;    // T1CONbits.TCKPS = 3 divides the input clock by 256.
    T1CONbits.TON   = 1;

    enum 
    {
        IDLE, 
        BLINK_LED
    } demoState;

    while (1) 
    {
        switch (demoState) 
        {
            case IDLE:
                if (_T1IF == 1) 
                {
                    _T1IF = 0;
                    demoState = BLINK_LED;
                }          
                break;

            case BLINK_LED:
                LED ^= 1;           // Toggle the LED
                demoState = IDLE;
                break;
                
            default:
                demoState = IDLE;
                break;
        }
    }
    return 0;
}

