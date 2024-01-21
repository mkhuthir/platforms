// Muthanna Alwahash
// Jan 20224

#include "mcc.h"

void SYSTEM_Initialize(void)
{
    PIN_MANAGER_Initialize();
    OSCILLATOR_Initialize();
    EUSART_Initialize();
}

void OSCILLATOR_Initialize(void)
{

    OSCCON1 = 0x62;     // NOSC HFINTOSC; NDIV 4; 
    OSCCON3 = 0x00;     // CSWHOLD may proceed; SOSCPWR Low power; 
    OSCEN = 0x00;       // MFOEN disabled; LFOEN disabled; ADOEN disabled; SOSCEN disabled; EXTOEN disabled; HFOEN disabled; 
    OSCFRQ = 0x02;      // HFFRQ 4_MHz; 
    OSCTUNE = 0x00;     // HFTUN 0; 
    // Set the secondary oscillator
}