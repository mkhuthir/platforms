// Muthanna Alwahash
// Jan 2024

/**
 * System Driver Header File
 * 
 * @file system.h
 * 
 * @defgroup systemdriver System Driver
 * 
 * @brief This file contains the API prototype for the System Driver.
 *
 * @version Driver Version 2.0.2
*/

#ifndef SYSTEM_H
#define	SYSTEM_H

#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
#include "config_bits.h"
#include "../system/clock.h"
#include "../system/pins.h"
#include "../uart/eusart.h"
#include "../system/interrupt.h"

/**
 * @ingroup systemdriver
 * @brief Initializes the system module. This is called only once before calling other APIs.
 * @param None.
 * @return None.
*/
void SYSTEM_Initialize(void);

#endif //SYSTEM_H
