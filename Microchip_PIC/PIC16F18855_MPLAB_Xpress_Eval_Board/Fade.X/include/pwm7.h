// Muthanna Alwahash
// Jan 2024

 #ifndef _PWM7_H
 #define _PWM7_H

 #include <xc.h>
 #include <stdint.h>

 #ifdef __cplusplus  // Provide C++ Compatibility

     extern "C" {

 #endif

 #define PWM7_INITIALIZE_DUTY_VALUE    415

 void PWM7_Initialize(void);
 void PWM7_LoadDutyValue(uint16_t dutyValue);
 
 #ifdef __cplusplus  // Provide C++ Compatibility

     }

 #endif

 #endif	//PWM7_H