// Muthanna Alwahash
// Feb 2024

#include "mcc_generated_files/system/system.h"
#include <util/delay.h>     

int main(void)
{
    SYSTEM_Initialize();

    LED0_SetLow();
    
    while(1)
    {
        LED0_Toggle();
        _delay_ms(100);
        
    }       
}