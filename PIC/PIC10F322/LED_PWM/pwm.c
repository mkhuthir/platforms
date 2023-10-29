#include <xc.h>
#include "pwm.h"

void PWM_Initialize(void)
{
    // PWM1EN Enabled; PWM1OE Enabled; PWM1POL active_hi
    PWM1CON = 0xc0;
}

void PWM_LoadDutyValue(uint16_t dutyValue)
{
    //2 LSB's of dutyValue
    PWM1DCL = dutyValue << 6;   // Left shift by 6 to write 2 LSB bits of ADRES

    //8 MSB's of dutyValue
    PWM1DCH = dutyValue >> 2;   // Right shift by 2 to write 8 MSB bits of ADRES
}


