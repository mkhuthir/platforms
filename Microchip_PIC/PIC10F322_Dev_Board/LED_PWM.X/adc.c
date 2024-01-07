#include <xc.h>
#include "adc.h"

void ADC_Initialize(void) {
    ADCON = 0x89; // ADON enabled; CHS AN2;
    TRISAbits.TRISA2 = 1; // POT1 pin (RA2) as input
    ANSELAbits.ANSA2 = 1; // configure (RA2) as analog input

}

adc_result_t ADC_GetConversion(adc_channel_t channel) {
    ADCONbits.CHS = channel; // Select the A/D channel
    ADCONbits.ADON = 1; // Turn on the ADC module
    ADCONbits.GO_nDONE = 1; // Start the conversion

    while (ADCONbits.GO_nDONE); // Wait for the conversion to finish

    return ADRES; // Conversion finished, return the result
}


