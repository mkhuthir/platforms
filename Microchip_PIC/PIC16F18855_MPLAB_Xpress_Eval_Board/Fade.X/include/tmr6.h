// Muthanna Alwahash
// Jan 20224

#ifndef TMR6_H
#define TMR6_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif

typedef enum
{

    // Roll-over Pulse mode clears the TMRx upon TMRx = PRx, then continue running. ON bit must be set and is not affected by Resets
    TMR6_ROP_STARTS_TMRON,              // Roll-over Pulse mode indicates that Timer starts immediately upon ON = 1 (Software Control)
    TMR6_ROP_STARTS_TMRON_ERSHIGH,      // Roll-over Pulse mode indicates that the Timer starts when ON = 1 and TMRx_ers = 1. Stops when TMRx_ers = 0
    TMR6_ROP_STARTS_TMRON_ERSLOW,       // Roll-over Pulse mode indicates that the Timer starts when ON = 1 and TMRx_ers = 0. Stops when TMRx_ers = 1
    TMR6_ROP_RESETS_ERSBOTHEDGE,        // Roll-over Pulse mode indicates that the Timer resets upon rising or falling edge of TMRx_ers
    TMR6_ROP_RESETS_ERSRISINGEDGE,      // Roll-over Pulse mode indicates that the Timer resets upon rising edge of TMRx_ers
    TMR6_ROP_RESETS_ERSFALLINGEDGE,     // Roll-over Pulse mode indicates that the Timer resets upon falling edge of TMRx_ers
    TMR6_ROP_RESETS_ERSLOW,             // Roll-over Pulse mode indicates that the Timer resets upon TMRx_ers = 0
    TMR6_ROP_RESETS_ERSHIGH,            // Roll-over Pulse mode indicates that the Timer resets upon TMRx_ers = 1

    //In all One-Shot mode the timer resets and the ON bit is cleared when the timer value matches the PRx period value. The ON bit must be set by software to start another timer cycle.
    TMR6_OS_STARTS_TMRON,               // One shot mode indicates that the Timer starts immediately upon ON = 1 (Software Control)
    TMR6_OS_STARTS_ERSRISINGEDGE ,      // One shot mode indicates that the Timer starts when a rising edge is detected on the TMRx_ers
    TMR6_OS_STARTS_ERSFALLINGEDGE ,     // One shot mode indicates that the Timer starts when a falling edge is detected on the TMRx_ers
    TMR6_OS_STARTS_ERSBOTHEDGE,         // One shot mode indicates that the Timer starts when either a rising or falling edge is detected on TMRx_ers
    TMR6_OS_STARTS_ERSFIRSTRISINGEDGE,  // One shot mode indicates that the Timer starts upon first TMRx_ers rising edge and resets on all subsequent TMRx_ers rising edges
    TMR6_OS_STARTS_ERSFIRSTFALLINGEDGE, // One shot mode indicates that the Timer starts upon first TMRx_ers falling edge and restarts on all subsequent TMRx_ers falling edges
    TMR6_OS_STARTS_ERSRISINGEDGEDETECT, // One shot mode indicates that the Timer starts when a rising edge is detected on the TMRx_ers, resets upon TMRx_ers = 0
    TMR6_OS_STARTS_ERSFALLINGEDGEDETECT,// One shot mode indicates that the Timer starts when a falling edge is detected on the TMRx_ers, resets upon TMRx_ers = 1
    TMR6_OS_STARTS_TMRON_ERSHIGH = 0x16,// One shot mode indicates that the Timer starts when a TMRx_ers = 1,ON =1 and resets upon TMRx_ers =0
    TMR6_OS_STARTS_TMRON_ERSLOW = 0x17, // One shot mode indicates that the Timer starts when a TMRx_ers = 0,ON = 1 and resets upon TMRx_ers =1 
        
    //In all Mono-Stable mode the ON bit must be initially set,but not cleared upon the TMRx = PRx, and the timer will start upon an TMRx_ers start event following TMRx = PRx.
    
    TMR6_MS_STARTS_TMRON_ERSRISINGEDGEDETECT = 0x11,    // Mono Stable mode indicates that the Timer starts when a rising edge is detected on the TMRx_ers and ON = 1
    TMR6_MS_STARTS_TMRON_ERSFALLINGEDGEDETECT = 0x12,   // Mono Stable mode indicates that the Timer starts when a falling edge is detected on the TMRx_ers and ON = 1
    TMR6_MS_STARTS_TMRON_ERSBOTHEDGE = 0x13             // Mono Stable mode indicates that the Timer starts when either a rising or falling edge is detected on TMRx_ers and ON = 1
           
} TMR6_HLT_MODE;

typedef enum
{
    TMR6_T2INPPS,       // T2INPPS is the Timer external reset source
    TMR6_RESERVED,      // Reserved enum cannot be used 
    TMR6_T4POSTSCALED,  // Timer4 Postscale is the Timer external reset source 
    TMR6_T6POSTSCALED,  // Timer6 Postscale is the Timer external reset source 
    TMR6_CCP1_OUT,      // CCP1_OUT is the Timer external reset source 
    TMR6_CCP2_OUT,      // CCP2_OUT is the Timer external reset source 
    TMR6_CCP3_OUT,      // CCP3_OUT is the Timer external reset source 
    TMR6_CCP4_OUT,      // CCP4_OUT is the Timer external reset source 
    TMR6_CCP5_OUT,      // CCP5_OUT is the Timer external reset source 
    TMR6_PWM6_OUT,      // PWM6_out is the Timer external reset source 
    TMR6_PWM7_OUT,      // PWM7_out is the Timer external reset source 
    TMR6_C1_OUT_SYNC,   // C1_OUT_SYNC is the Timer external reset source 
    TMR6_C2_OUT_SYNC,   // C2_OUT_SYNC is the Timer external reset source 
    TMR6_ZCD_OUTPUT,    // ZCD_Output is the Timer external reset source 
    TMR6_CLC1_OUT,      // CLC1_out is the Timer external reset source 
    TMR6_CLC2_OUT,      // CLC2_out is the Timer external reset source 
    TMR6_CLC3_OUT,      // CLC3_out is the Timer external reset source 
    TMR6_CLC4_OUT       // CLC4_out is the Timer external reset source 
            
} TMR6_HLT_EXT_RESET_SOURCE;

void TMR6_Initialize(void);
void TMR6_ModeSet(TMR6_HLT_MODE mode);
void TMR6_ExtResetSourceSet(TMR6_HLT_EXT_RESET_SOURCE reset);
void TMR6_Start(void);
void TMR6_StartTimer(void);
void TMR6_Stop(void);
void TMR6_StopTimer(void);

uint8_t TMR6_Counter8BitGet(void);
uint8_t TMR6_ReadTimer(void);

void TMR6_Counter8BitSet(uint8_t timerVal);
void TMR6_WriteTimer(uint8_t timerVal);
void TMR6_Period8BitSet(uint8_t periodVal);
void TMR6_LoadPeriodRegister(uint8_t periodVal);

bool TMR6_HasOverflowOccured(void);

 #ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif

#endif // TMR6_H