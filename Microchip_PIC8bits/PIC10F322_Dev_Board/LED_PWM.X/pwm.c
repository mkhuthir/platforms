#include <xc.h>
#include "pwm.h"

void PWM_Initialize(void) {
    PWM1CON = 0xc0; // PWM1EN Enabled; PWM1OE Enabled; PWM1POL active_hi
}

void PWM_LoadDutyValue(uint16_t dutyValue) {
    PWM1DCL = dutyValue << 6; // 2 LSB's of dutyValue, Left shift by 6 to write 2 LSB bits of ADRES
    PWM1DCH = dutyValue >> 2; // 8 MSB's of dutyValue, Right shift by 2 to write 8 MSB bits of ADRES
}


