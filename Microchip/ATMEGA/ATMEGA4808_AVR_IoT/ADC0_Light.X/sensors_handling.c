
#include <stdint.h>
#include "sensors_handling.h"
#include "mcc_generated_files/adc/adc0.h"

#define MCP9809_ADDR				0x18 
#define MCP9808_REG_TA				0x05
#define LIGHT_SENSOR_ADC_CHANNEL	5

uint16_t SENSORS_getLightValue(void)
{
    return ADC0_GetConversion(LIGHT_SENSOR_ADC_CHANNEL);
}
