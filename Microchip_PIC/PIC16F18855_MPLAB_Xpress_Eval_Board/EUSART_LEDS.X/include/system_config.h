// Muthanna Alwahash
// Jan 2024

#ifndef SYSTEM_CONFIG_H
#define	SYSTEM_CONFIG_H
#include <xc.h>
#include "pin_manager.h"
#include <stdint.h>
#include <stdbool.h>
#include "eusart.h"

#define _XTAL_FREQ  1000000

void SYSTEM_Initialize(void);
void OSCILLATOR_Initialize(void);

#endif	/* SYSTEM_CONFIG_H */
