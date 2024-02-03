// Muthanna Alwahash
// Feb 2024

#ifndef CPU_CCP_H
#define CPU_CCP_H

#include "../system/utils/compiler.h"
#include "../system/protected_io.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Writes to a CCP-protected 8-bit I/O register.
 * @param addr Address of the I/O register.
 * @param value Value to be written.
 * NOTE: Using IAR Embedded workbench, the choice of memory model has an impact on calling convention.
 * Memory model must be defined in the Assembler preprocessor directives to be visible to the preprocessor.
 */
static inline void ccp_write_io(void *addr, uint8_t value)
{
	protected_write_io(addr, CCP_IOREG_gc, value);
}

/**
 * @brief Writes to a CCP-protected 8-bit SPM register.
 * @param addr Address of the SPM register.
 * @param value Value to be written.
 * NOTE: Using IAR Embedded workbench, the choice of memory model has an impacton calling convention.
 * Memory model must be defined in the Assembler preprocessor directives to be visible to the preprocessor.
 */
static inline void ccp_write_spm(void *addr, uint8_t value)
{
	protected_write_io(addr, CCP_SPM_gc, value);
}

#ifdef __cplusplus
}
#endif

#endif /* CPU_CCP_H */
