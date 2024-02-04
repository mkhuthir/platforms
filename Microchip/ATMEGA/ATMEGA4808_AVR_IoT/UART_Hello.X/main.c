// Muthanna Alwahash
// Feb 2024

#include "mcc_generated_files/system/system.h"
#include "util/delay.h"

int main(void)
{
    SYSTEM_Initialize();

    // Turn off all 4 LEDs
    LED_B_SetHigh();
    LED_G_SetHigh();
    LED_Y_SetHigh();
    LED_R_SetHigh();

    while(1)
    {
        printf("Hello...\r\n");
        LED_G_Toggle();
        _delay_ms(500);
    }    
}