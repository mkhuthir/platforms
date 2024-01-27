// Muthanna Alwahash
// Jan 20224

#include "mcc.h"

void main(void)
{
    SYSTEM_Initialize();    // initialize the device

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits, Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1)
    {
        // Add your application code
    }
}
