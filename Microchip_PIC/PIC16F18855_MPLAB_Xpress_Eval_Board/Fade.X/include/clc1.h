// Muthanna Alwahash
// Jan 2024

#ifndef _CLC1_H
#define _CLC1_H

#include <xc.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif

void CLC1_Initialize(void);
bool CLC1_OutputStatusGet(void);

#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif

#endif  // _CLC1_H