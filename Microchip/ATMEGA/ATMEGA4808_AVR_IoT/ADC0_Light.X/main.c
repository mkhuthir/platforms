// Muthanna Alwahash
// Feb 2024

#include "mcc_generated_files/system/system.h"
#include "util/delay.h"

int main(void)
{
    SYSTEM_Initialize();

    while(1)
    {
        printf("Light value %d   \r",SENSORS_getLightValue());
        LED_R_Toggle();
        _delay_ms(50);
    }    
}