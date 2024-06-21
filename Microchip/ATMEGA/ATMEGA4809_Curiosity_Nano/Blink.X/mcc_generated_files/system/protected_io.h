// Muthanna Alwahash
// Feb 2024

#ifndef PROTECTED_IO_H
#define PROTECTED_IO_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__DOXYGEN__)
//! \name IAR Memory Model defines.
//@{

/**
 * @def CONFIG_MEMORY_MODEL_TINY
 * @brief Configuration symbol to enable 8 bit pointers.
 */
#define CONFIG_MEMORY_MODEL_TINY

/**
 * @def CONFIG_MEMORY_MODEL_SMALL
 * @brief Configuration symbol to enable 16 bit pointers.
 * NOTE: If no memory model is defined, SMALL is default.
 */
#define CONFIG_MEMORY_MODEL_SMALL

/**
 * @def CONFIG_MEMORY_MODEL_LARGE
 * @brief Configuration symbol to enable 24 bit pointers.
 */
#define CONFIG_MEMORY_MODEL_LARGE

//@}
#endif

/**
 * @brief Writes to an 8-bit I/O register protected by CCP or a protection bit.
 * @param addr Address of the I/O register.
 * @param magic CCP magic value or Mask for protection bit.
 * @param value Value to be written.
 * NOTE: Using IAR Embedded workbench, the choice of memory model has an impact on calling convention.
 * Memory model must be defined in the Assembler preprocessor directives to be visible to the preprocessor.
 */
extern void protected_write_io(void *addr, uint8_t magic, uint8_t value);

/** @} */

#endif /* PROTECTED_IO_H */
