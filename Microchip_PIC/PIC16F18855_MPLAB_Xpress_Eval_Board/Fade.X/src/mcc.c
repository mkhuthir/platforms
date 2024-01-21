// Muthanna Alwahash
// Jan 2024

#include "mcc.h"

void SYSTEM_Initialize(void)
{

    PIN_MANAGER_Initialize();
    OSCILLATOR_Initialize();
    PWM6_Initialize();
    TMR6_Initialize();
    CLC1_Initialize();
    TMR4_Initialize();
    PWM7_Initialize();
}

void OSCILLATOR_Initialize(void)
{
    
    OSCCON1 = 0x63;     // NOSC HFINTOSC; NDIV 8; 
    OSCCON3 = 0x00;     // CSWHOLD may proceed; SOSCPWR Low power; 
    OSCEN = 0x00;       // MFOEN disabled; LFOEN disabled; ADOEN disabled; SOSCEN disabled; EXTOEN disabled; HFOEN disabled; 
    OSCFRQ = 0x02;      // HFFRQ 4_MHz; 
    OSCTUNE = 0x00;     // HFTUN 0; 
}
