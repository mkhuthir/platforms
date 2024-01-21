// Muthanna Alwahash
// Jan 20224

 #include <xc.h>
 #include "pwm6.h"

 void PWM7_Initialize(void)
 {
    // PWM7POL active_hi; PWM7EN enabled; 
    PWM7CON = 0x80;   
    PWM7DCH = 0x3C;             
    PWM7DCL = 0x40;              
    CCPTMRS1bits.P6TSEL = 0x1;  // Select timer
 }

 void PWM7_LoadDutyValue(uint16_t dutyValue)
 {
    PWM7DCH = (unsigned char)((dutyValue & 0x03FC)>>2); // Writing to 8 MSBs of PWM duty cycle in PWMDCH register
    PWM7DCL = (unsigned char)((dutyValue & 0x0003)<<6); // Writing to 2 LSBs of PWM duty cycle in PWMDCL register
 }
