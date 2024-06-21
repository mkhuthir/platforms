#ifndef _PWM_H
#define _PWM_H

#include <xc.h>
#include <stdint.h>

void PWM_Initialize(void);
void PWM_LoadDutyValue(uint16_t dutyValue);

#endif