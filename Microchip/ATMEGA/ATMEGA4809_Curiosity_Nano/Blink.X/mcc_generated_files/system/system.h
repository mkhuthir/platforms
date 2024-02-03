// Muthanna Alwahash
// Feb 2024

#ifndef MCC_H
#define	MCC_H

#ifdef __cplusplus
extern "C" {
#endif

#include "../system/utils/compiler.h"
#include "config_bits.h"
#include "../system/clock.h"
#include "../system/pins.h"
#include "../system/interrupt.h"
/**
 * @ingroup systemdriver
 * @brief Initializes the System module. This routine is called only once during system initialization, before calling any other API.
 * @param None.
 * @return None.
*/
void SYSTEM_Initialize(void);

#ifdef __cplusplus
}
#endif
#endif	/* MCC_H */