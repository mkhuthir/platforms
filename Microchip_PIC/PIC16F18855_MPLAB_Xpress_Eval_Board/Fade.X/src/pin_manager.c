// Muthanna Alwahash
// Jan 2024

#include <xc.h>
#include "pin_manager.h"
#include "stdbool.h"


void PIN_MANAGER_Initialize(void)
{
    /**
    LATx registers
    */   
    LATA = 0x00;    
    LATB = 0x00;    
    LATC = 0x00;    

    /**
    TRISx registers
    */    
    TRISA = 0xF0;
    TRISB = 0xFF;
    TRISC = 0xFF;

    /**
    ANSELx registers
    */   
    ANSELC = 0xDF;
    ANSELB = 0x7F;
    ANSELA = 0xEF;

    /**
    WPUx registers
    */ 
    WPUE = 0x08;
    WPUB = 0xFF;
    WPUA = 0xFF;
    WPUC = 0xFF;

    /**
    ODx registers
    */   
    ODCONA = 0x00;
    ODCONB = 0x00;
    ODCONC = 0x00;
    


   
    
    
    bool state = GIE;
    GIE = 0;
    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x00; // unlock PPS

    T6AINPPSbits.T6AINPPS = 0x0F;   //RB7->TMR6:T6IN;
    T4AINPPSbits.T4AINPPS = 0x15;   //RC5->TMR4:T4IN;
    CLCIN0PPSbits.CLCIN0PPS = 0x04;   //RA4->CLC1:CLCIN0;
    
    RA3PPS = 0x01;   //RA3->CLC1:CLC1OUT;
    RA1PPS = 0x01;   //RA1->CLC1:CLC1OUT;
    RA2PPS = 0x01;   //RA2->CLC1:CLC1OUT;
    RA0PPS = 0x01;   //RA0->CLC1:CLC1OUT;

    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x01; // lock PPS

    GIE = state;
}       

void PIN_MANAGER_IOC(void)
{   

}
