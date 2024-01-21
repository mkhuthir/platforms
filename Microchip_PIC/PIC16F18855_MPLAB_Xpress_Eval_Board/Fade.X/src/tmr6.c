// Muthanna Alwahash
// Jan 20224

#include <xc.h>
#include "tmr6.h"

void TMR6_Initialize(void)
{
    // Set TMR6 to the options selected in the User Interface
    T6CLKCON        = 0x01; // T6CS FOSC/4; 
    T6HLT           = 0x00; // T6PSYNC Not Synchronized; T6MODE Software control; T6CKPOL Rising Edge; T6CKSYNC Not Synchronized; 
    T6RST           = 0x00; // T6RSEL T6CKIPPS pin; 
    T6PR            = 0x78; // PR2 120; 
    T6TMR           = 0x00; // TMR6 0; 
    PIR4bits.TMR6IF = 0;    // Clearing IF flag.
    T6CON           = 0xC0; // T6CKPS 1:16; T6OUTPS 1:1; TMR6ON on; 
}

void TMR6_ModeSet(TMR6_HLT_MODE mode)
{
    T6HLTbits.MODE = mode;  // Configure different types HLT mode
}

void TMR6_ExtResetSourceSet(TMR6_HLT_EXT_RESET_SOURCE reset)
{
    T6RSTbits.RSEL = reset; //Configure different types of HLT external reset source
}

void TMR6_Start(void)
{
    T6CONbits.TMR6ON = 1;   // Start the Timer by writing to TMRxON bit
}

void TMR6_StartTimer(void)
{
    TMR6_Start();
}

void TMR6_Stop(void)
{
    T6CONbits.TMR6ON = 0;   // Stop the Timer by writing to TMRxON bit
}

void TMR6_StopTimer(void)
{
    TMR6_Stop();
}

uint8_t TMR6_Counter8BitGet(void)
{
    uint8_t readVal;
    readVal = TMR6;
    return readVal;
}

uint8_t TMR6_ReadTimer(void)
{
    return TMR6_Counter8BitGet();
}

void TMR6_Counter8BitSet(uint8_t timerVal)
{
    TMR6 = timerVal;        // Write to the Timer2 register
}

void TMR6_WriteTimer(uint8_t timerVal)
{
    TMR6_Counter8BitSet(timerVal);
}

void TMR6_Period8BitSet(uint8_t periodVal)
{
   PR2 = periodVal;
}

void TMR6_LoadPeriodRegister(uint8_t periodVal)
{
   TMR6_Period8BitSet(periodVal);
}

bool TMR6_HasOverflowOccured(void)
{

    bool status = PIR4bits.TMR6IF;  // check if  overflow has occurred by checking the TMRIF bit
    if(status)
    {
        PIR4bits.TMR6IF = 0;        // Clearing IF flag.
    }
    return status;
}
