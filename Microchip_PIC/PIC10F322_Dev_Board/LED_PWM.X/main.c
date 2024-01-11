/****************************************************************************
;*      PIC10(L)32X Developmental Board                                     *
;*      Demonstration program:                                              *
;*          After applying power to the PIC10(L)F32X Development Board,     *
;*          LED (D1) will automatically turn on.  Turn POT1 clockwise       *
;*          to increase the brightness of LED (D2).  Press switch (SW1)     *
;*          to turn both LEDs D1 and D2 off, release switch (SW1) and       *
;*          LEDs D1 and D2 will turn on.                                    *
;*                                                                          *
;****************************************************************************/

#include "device_initialize.h"

uint16_t dutycycle;

void main(void) {
    SYSTEM_Initialize(); // Initialize the device
    TRISAbits.TRISA0 = 0; // Set Channel RA0 as output
    TRISAbits.TRISA1 = 0; // Set Channel RA1 as output
    LATAbits.LATA1 = 1; // Set RA0 (LED D1) high
    TMR2_StartTimer(); // Start Timer2 for PWM operation


    // LED D2 Brightness control
    // 8 bit ADC ouput is scaled (multiply by 4) to get a better resolution on 10-bit PWM
    while (1) {
        dutycycle = (ADC_GetConversion(channel_AN2) * 4); // read value from Potentiometer
        PWM_LoadDutyValue(dutycycle); // write value of "duty" to the PWM duty cycle
    }
}