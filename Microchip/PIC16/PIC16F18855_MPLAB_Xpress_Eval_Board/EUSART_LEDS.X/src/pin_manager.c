// Muthanna Alwahash
// Jan 2024

#include <xc.h>
#include "pin_manager.h"
#include "stdbool.h"


void PIN_MANAGER_Initialize(void)
{

    LATA = 0x00;    
    LATB = 0x00;    
    LATC = 0x00;    
  
    TRISA = 0xF0;
    TRISB = 0xFF;
    TRISC = 0xFE;

    ANSELC = 0xFD;
    ANSELB = 0xFF;
    ANSELA = 0xFF;

    WPUE = 0x00;
    WPUB = 0x00;
    WPUA = 0x00;
    WPUC = 0x00;

    ODCONA = 0x00;
    ODCONB = 0x00;
    ODCONC = 0x00;
    
    bool state = GIE;
    GIE = 0;
    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x00;   // unlock PPS

    RC0PPS = 0x10;                  //RC0->EUSART:TX;
    RXPPSbits.RXPPS = 0x11;         //RC1->EUSART:RX;

    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x01;   // lock PPS

    GIE = state;
}       

void PIN_MANAGER_IOC(void)
{   

}
