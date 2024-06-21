#ifndef _ADC_H
#define _ADC_H


// Section: Included Files
#include <xc.h>
#include <stdint.h>
#include <stdbool.h>

typedef uint8_t adc_result_t;

typedef enum {
    channel_FVR = 0b111,
    channel_TEMP = 0b110,
    channel_AN2 = 0b010,
    channel_AN1 = 0b001,
    channel_AN0 = 0b000
} adc_channel_t;

void ADC_Initialize(void);
adc_result_t ADC_GetConversion(adc_channel_t channel);

#endif