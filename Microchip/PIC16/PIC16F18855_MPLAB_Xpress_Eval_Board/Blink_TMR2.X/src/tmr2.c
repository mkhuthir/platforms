// Muthanna Alwahash
// Jan 20224

#include <xc.h>
#include "tmr2.h"

void TMR2_Initialize(void)
{
    // Set TMR2 to the options selected in the User Interface
    T2CLKCON        = 0x01; // T2CS FOSC/4; 
    T2HLT           = 0x00; // T2PSYNC Not Synchronized; T2MODE Software control; T2CKPOL Rising Edge; T2CKSYNC Not Synchronized; 
    T2RST           = 0x00; // T2RSEL T2CKIPPS pin; 
    T2PR            = 0x78; // PR2 120; 
    T2TMR           = 0x00; // TMR2 0; 
    PIR4bits.TMR2IF = 0;    // Clearing IF flag.
    T2CON           = 0xC0; // T2CKPS 1:16; T2OUTPS 1:1; TMR2ON on; 
}

void TMR2_ModeSet(TMR2_HLT_MODE mode)
{
    T2HLTbits.MODE = mode;  // Configure different types HLT mode
}

void TMR2_ExtResetSourceSet(TMR2_HLT_EXT_RESET_SOURCE reset)
{
    T2RSTbits.RSEL = reset; //Configure different types of HLT external reset source
}

void TMR2_Start(void)
{
    T2CONbits.TMR2ON = 1;   // Start the Timer by writing to TMRxON bit
}

void TMR2_StartTimer(void)
{
    TMR2_Start();
}

void TMR2_Stop(void)
{
    T2CONbits.TMR2ON = 0;   // Stop the Timer by writing to TMRxON bit
}

void TMR2_StopTimer(void)
{
    TMR2_Stop();
}

uint8_t TMR2_Counter8BitGet(void)
{
    uint8_t readVal;
    readVal = TMR2;
    return readVal;
}

uint8_t TMR2_ReadTimer(void)
{
    return TMR2_Counter8BitGet();
}

void TMR2_Counter8BitSet(uint8_t timerVal)
{
    TMR2 = timerVal;        // Write to the Timer2 register
}

void TMR2_WriteTimer(uint8_t timerVal)
{
    TMR2_Counter8BitSet(timerVal);
}

void TMR2_Period8BitSet(uint8_t periodVal)
{
   PR2 = periodVal;
}

void TMR2_LoadPeriodRegister(uint8_t periodVal)
{
   TMR2_Period8BitSet(periodVal);
}

bool TMR2_HasOverflowOccured(void)
{

    bool status = PIR4bits.TMR2IF;  // check if  overflow has occurred by checking the TMRIF bit
    if(status)
    {
        PIR4bits.TMR2IF = 0;        // Clearing IF flag.
    }
    return status;
}
