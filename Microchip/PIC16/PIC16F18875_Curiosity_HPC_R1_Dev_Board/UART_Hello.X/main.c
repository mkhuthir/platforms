// Muthanna Alwahash
// Jan 2024

#include "mcc_generated_files/system/system.h"

int main(void)
{
    SYSTEM_Initialize();
    
    IO_RA4_SetLow();
                
    while(1)
    {
        IO_RA4_Toggle();
        printf("Hello World! RX=RC6 TX=RC7 \r\n");
        IO_RA4_Toggle();
        __delay_ms(300);
    }    
}