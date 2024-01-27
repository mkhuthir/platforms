// Muthanna Alwahash
// Jan 20224

 #include <xc.h>
 #include "pwm6.h"

 void PWM6_Initialize(void)
 {
    // PWM6POL active_hi; PWM6EN enabled; 
    PWM6CON = 0x80;   
    PWM6DCH = 0x3C;             
    PWM6DCL = 0x40;              
    CCPTMRS1bits.P6TSEL = 0x1;  // Select timer
 }

 void PWM6_LoadDutyValue(uint16_t dutyValue)
 {
    PWM6DCH = (unsigned char)((dutyValue & 0x03FC)>>2); // Writing to 8 MSBs of PWM duty cycle in PWMDCH register
    PWM6DCL = (unsigned char)((dutyValue & 0x0003)<<6); // Writing to 2 LSBs of PWM duty cycle in PWMDCL register
 }
