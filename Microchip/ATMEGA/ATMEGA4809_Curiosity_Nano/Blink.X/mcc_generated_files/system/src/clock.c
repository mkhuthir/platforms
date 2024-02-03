// Muthanna Alwahash
// Feb 2024

#include "../clock.h"

void CLOCK_Initialize(void)
{
    // Set the CLKCTRL module to the options selected in the user interface.
    
    //CLKOUT disabled; CLKSEL 16/20MHz internal oscillator; 
    ccp_write_io((void*)&(CLKCTRL.MCLKCTRLA),0x0);
    //PDIV 6X; PEN enabled; 
    ccp_write_io((void*)&(CLKCTRL.MCLKCTRLB),0x11);
    //LOCKEN disabled; 
    ccp_write_io((void*)&(CLKCTRL.MCLKLOCK),0x0);
    //
    ccp_write_io((void*)&(CLKCTRL.MCLKSTATUS),0x0);
    //RUNSTDBY disabled; 
    ccp_write_io((void*)&(CLKCTRL.OSC20MCTRLA),0x0);
    //RUNSTDBY disabled; 
    ccp_write_io((void*)&(CLKCTRL.OSC32KCTRLA),0x0);
    //ENABLE disabled; CSUT 1K; RUNSTDBY disabled; SEL disabled; 
    ccp_write_io((void*)&(CLKCTRL.XOSC32KCTRLA),0x0);
}