// Muthanna Alwahash
// Jan 20224

#ifndef PWM6_H
 #define PWM6_H

 #include <xc.h>
 #include <stdint.h>

 #ifdef __cplusplus  // Provide C++ Compatibility

     extern "C" {

 #endif

 #define PWM6_INITIALIZE_DUTY_VALUE    241

         void PWM6_Initialize(void);
 void PWM6_LoadDutyValue(uint16_t dutyValue);

 
 #ifdef __cplusplus  // Provide C++ Compatibility

     }

 #endif

 #endif	//PWM6_H
