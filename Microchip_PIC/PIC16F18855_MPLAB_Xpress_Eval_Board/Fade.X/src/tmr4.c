// Muthanna Alwahash
// Jan 20224

#include <xc.h>
#include "tmr4.h"

void TMR4_Initialize(void)
{
    // Set TMR4 to the options selected in the User Interface
    T4CLKCON        = 0x01; // T4CS FOSC/4; 
    T4HLT           = 0x00; // T4PSYNC Not Synchronized; T4MODE Software control; T4CKPOL Rising Edge; T4CKSYNC Not Synchronized; 
    T4RST           = 0x00; // T4RSEL T4CKIPPS pin; 
    T4PR            = 0x78; // PR2 120; 
    T4TMR           = 0x00; // TMR4 0; 
    PIR4bits.TMR4IF = 0;    // Clearing IF flag.
    T4CON           = 0xC0; // T4CKPS 1:16; T4OUTPS 1:1; TMR4ON on; 
}

void TMR4_ModeSet(TMR4_HLT_MODE mode)
{
    T4HLTbits.MODE = mode;  // Configure different types HLT mode
}

void TMR4_ExtResetSourceSet(TMR4_HLT_EXT_RESET_SOURCE reset)
{
    T4RSTbits.RSEL = reset; //Configure different types of HLT external reset source
}

void TMR4_Start(void)
{
    T4CONbits.TMR4ON = 1;   // Start the Timer by writing to TMRxON bit
}

void TMR4_StartTimer(void)
{
    TMR4_Start();
}

void TMR4_Stop(void)
{
    T4CONbits.TMR4ON = 0;   // Stop the Timer by writing to TMRxON bit
}

void TMR4_StopTimer(void)
{
    TMR4_Stop();
}

uint8_t TMR4_Counter8BitGet(void)
{
    uint8_t readVal;
    readVal = TMR4;
    return readVal;
}

uint8_t TMR4_ReadTimer(void)
{
    return TMR4_Counter8BitGet();
}

void TMR4_Counter8BitSet(uint8_t timerVal)
{
    TMR4 = timerVal;        // Write to the Timer2 register
}

void TMR4_WriteTimer(uint8_t timerVal)
{
    TMR4_Counter8BitSet(timerVal);
}

void TMR4_Period8BitSet(uint8_t periodVal)
{
   PR2 = periodVal;
}

void TMR4_LoadPeriodRegister(uint8_t periodVal)
{
   TMR4_Period8BitSet(periodVal);
}

bool TMR4_HasOverflowOccured(void)
{

    bool status = PIR4bits.TMR4IF;  // check if  overflow has occurred by checking the TMRIF bit
    if(status)
    {
        PIR4bits.TMR4IF = 0;        // Clearing IF flag.
    }
    return status;
}
