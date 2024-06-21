// Muthanna Alwahash
// Jan 20224

#include "pin_manager.h"

void PIN_MANAGER_Initialize(void)
{
    LATA = 0x00;
    LATB = 0x00;
    LATC = 0x00;

    TRISA = 0xF0;
    TRISB = 0xFF;
    TRISC = 0xFF;

    ANSELC = 0xF7;
    ANSELB = 0xFF;
    ANSELA = 0xFF;

    WPUE = 0x08;
    WPUB = 0xFF;
    WPUA = 0xFF;
    WPUC = 0xFF;

    ODCONA = 0x00;
    ODCONB = 0x00;
    ODCONC = 0x00;

    SLRCONA = 0xFF;
    SLRCONB = 0xFF;
    SLRCONC = 0xFF;

    INLVLA = 0xFF;
    INLVLB = 0xFF;
    INLVLC = 0xFF;
    INLVLE = 0x08;
	
    T2AINPPS= 0x13;   // RC3->TMR2:T2IN;
   
    RA0PPS  = 0x0E;   // RA0->PWM6:PWM6OUT;
    RA1PPS  = 0x0E;   // RA1->PWM6:PWM6OUT;    
    RA2PPS  = 0x0E;   // RA2->PWM6:PWM6OUT;    
    RA3PPS  = 0x0E;   // RA3->PWM6:PWM6OUT; 
}
  
void PIN_MANAGER_IOC(void)
{   
}