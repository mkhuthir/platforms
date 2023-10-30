#ifndef DEVICE_INITIALIZE_H
#define	DEVICE_INITIALIZE_H
#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
#include "adc.h"
#include "pwm.h"
#include "tmr2.h"


void SYSTEM_Initialize(void);
void OSCILLATOR_Initialize(void);

#endif
