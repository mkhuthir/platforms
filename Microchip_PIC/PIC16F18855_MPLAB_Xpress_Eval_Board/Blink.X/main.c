// Muthanna Alwahash
// Jan 2024

#include "mcc_generated_files/system/system.h"

int main(void)
{
    SYSTEM_Initialize();

    IO_RA0_SetLow();
    IO_RA1_SetLow();
    IO_RA2_SetLow();
    IO_RA3_SetLow();

    while(1)
    {
        IO_RA0_Toggle();
        IO_RA1_Toggle();
        IO_RA2_Toggle();
        IO_RA3_Toggle();

        __delay_ms(100);

    }
}
