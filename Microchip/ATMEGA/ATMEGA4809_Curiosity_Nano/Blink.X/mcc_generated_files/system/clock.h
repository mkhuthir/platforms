// Muthanna Alwahash
// Feb 2024

#ifndef CLOCK_H
#define CLOCK_H

#ifndef F_CPU
#define F_CPU 3333333UL
#endif

#include "ccp.h"

/**
 * @ingroup clkctrl
 * @brief Initialize CLKCTRL module
 * @param none
 * @return none
 */ 
void CLOCK_Initialize(void);

#endif // CLOCK_H