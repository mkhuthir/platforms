
#include <xc.h>
#include "tmr2.h"

void TMR2_Initialize(void) {
    T2CON = 0x00; // TMR2ON off; T2CKPS 1:1; T2OUTPS 1:1;
    PR2 = 0xFF;
    TMR2 = 0x00;
    PIR1bits.TMR2IF = 0; // Clearing IF flag.
}

void TMR2_StartTimer(void) {
    T2CONbits.TMR2ON = 1; // Start the Timer by writing to TMRxON bit
}