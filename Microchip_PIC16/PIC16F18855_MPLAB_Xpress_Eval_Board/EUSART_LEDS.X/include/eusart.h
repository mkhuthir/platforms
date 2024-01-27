// Muthanna Alwahash
// Jan 2024

#ifndef _EUSART_H
#define _EUSART_H

#include <xc.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif

#define EUSART_DataReady  (PIR3bits.RCIF)

void    EUSART_Initialize(void);
uint8_t EUSART_Read(void);
void    EUSART_Write(uint8_t txData);

#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif

#endif  // _EUSART_H
