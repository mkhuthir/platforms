// Muthanna Alwahash
// Feb 2024

#include <xc.h>
#include "../clock.h"

void CLOCK_Initialize(void)
{
    // Set the CLOCK CONTROL module to the options selected in the user interface.
    //NDIV 4; NOSC HFINTOSC; 
    OSCCON1 = 0x62;
    //SOSCPWR Low power; CSWHOLD may proceed; 
    OSCCON3 = 0x0;
    //EXTOEN disabled; HFOEN disabled; MFOEN disabled; LFOEN disabled; SOSCEN disabled; ADOEN disabled; 
    OSCEN = 0x0;
    //HFFRQ 4_MHz; 
    OSCFRQ = 0x2;
    //TUN undefined; 
    OSCTUNE = 0x0;

}