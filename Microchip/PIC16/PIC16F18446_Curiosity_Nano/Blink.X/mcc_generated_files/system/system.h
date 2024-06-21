// Muthanna Alwahash
// Feb 2024

#ifndef SYSTEM_H
#define	SYSTEM_H

#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
#include "config_bits.h"
#include "../system/clock.h"
#include "../system/pins.h"
#include "../system/interrupt.h"

/**
 * @ingroup systemdriver
 * @brief Initializes the system module.
 * This routine is called only once during system initialization, before calling other APIs.
 * @param None.
 * @return None.
*/
void SYSTEM_Initialize(void);

#endif //SYSTEM_H
