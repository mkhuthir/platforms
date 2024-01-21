// Muthanna Alwahash
// Jan 2024

#ifndef MCC_H
#define	MCC_H
#include <xc.h>
#include "pin_manager.h"
#include <stdint.h>
#include <stdbool.h>
#include "pwm6.h"
#include "pwm7.h"
#include "clc1.h"
#include "tmr6.h"
#include "tmr4.h"

#define _XTAL_FREQ  500000

void SYSTEM_Initialize(void);
void OSCILLATOR_Initialize(void);

#endif	/* MCC_H */