// Muthanna Alwahash
// Feb 2024

#ifndef INTERRUPT_H
#define INTERRUPT_H

#include "../system/utils/compiler.h"
#include "ccp.h"
#include "../system/utils/atomic.h"

#ifdef __cplusplus
extern "C" {
#endif 

/**
 * @ingroup interrupt
 * @brief Initializes the Interrupt module.
 * @retval 0 - Initialization is successful.
 */
int8_t CPUINT_Initialize();

#ifdef __cplusplus
}
#endif

#endif /* INTERRUPT_H */