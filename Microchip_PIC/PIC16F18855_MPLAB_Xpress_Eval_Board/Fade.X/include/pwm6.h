// Muthanna Alwahash
// Jan 2024

 #ifndef _PWM6_H
 #define _PWM6_H

 #include <xc.h>
 #include <stdint.h>

 #ifdef __cplusplus  // Provide C++ Compatibility

     extern "C" {

 #endif

 #define PWM6_INITIALIZE_DUTY_VALUE    411

 void PWM6_Initialize(void);
 void PWM6_LoadDutyValue(uint16_t dutyValue);
 
 #ifdef __cplusplus  // Provide C++ Compatibility

     }

 #endif

 #endif	//PWM6_H