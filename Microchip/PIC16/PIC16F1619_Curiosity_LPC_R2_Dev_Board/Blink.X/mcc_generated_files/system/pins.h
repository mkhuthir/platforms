/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA1 aliases
#define D5_TRIS                 TRISAbits.TRISA1
#define D5_LAT                  LATAbits.LATA1
#define D5_PORT                 PORTAbits.RA1
#define D5_WPU                  WPUAbits.WPUA1
#define D5_OD                   ODCONAbits.ODA1
#define D5_ANS                  ANSELAbits.ANSA1
#define D5_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define D5_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define D5_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define D5_GetValue()           PORTAbits.RA1
#define D5_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define D5_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define D5_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define D5_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define D5_SetPushPull()        do { ODCONAbits.ODA1 = 0; } while(0)
#define D5_SetOpenDrain()       do { ODCONAbits.ODA1 = 1; } while(0)
#define D5_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define D5_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)
// get/set IO_RA2 aliases
#define D6_TRIS                 TRISAbits.TRISA2
#define D6_LAT                  LATAbits.LATA2
#define D6_PORT                 PORTAbits.RA2
#define D6_WPU                  WPUAbits.WPUA2
#define D6_OD                   ODCONAbits.ODA2
#define D6_ANS                  ANSELAbits.ANSA2
#define D6_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define D6_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define D6_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define D6_GetValue()           PORTAbits.RA2
#define D6_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define D6_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define D6_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define D6_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define D6_SetPushPull()        do { ODCONAbits.ODA2 = 0; } while(0)
#define D6_SetOpenDrain()       do { ODCONAbits.ODA2 = 1; } while(0)
#define D6_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define D6_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
// get/set IO_RA5 aliases
#define D4_TRIS                 TRISAbits.TRISA5
#define D4_LAT                  LATAbits.LATA5
#define D4_PORT                 PORTAbits.RA5
#define D4_WPU                  WPUAbits.WPUA5
#define D4_OD                   ODCONAbits.ODA5
#define D4_ANS                  ANSELAbits.
#define D4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define D4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define D4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define D4_GetValue()           PORTAbits.RA5
#define D4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define D4_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define D4_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define D4_SetPushPull()        do { ODCONAbits.ODA5 = 0; } while(0)
#define D4_SetOpenDrain()       do { ODCONAbits.ODA5 = 1; } while(0)
#define D4_SetAnalogMode()      do { ANSELAbits. = 1; } while(0)
#define D4_SetDigitalMode()     do { ANSELAbits. = 0; } while(0)
// get/set IO_RC5 aliases
#define D7_TRIS                 TRISCbits.TRISC5
#define D7_LAT                  LATCbits.LATC5
#define D7_PORT                 PORTCbits.RC5
#define D7_WPU                  WPUCbits.WPUC5
#define D7_OD                   ODCONCbits.ODC5
#define D7_ANS                  ANSELCbits.
#define D7_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define D7_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define D7_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define D7_GetValue()           PORTCbits.RC5
#define D7_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define D7_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define D7_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define D7_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define D7_SetPushPull()        do { ODCONCbits.ODC5 = 0; } while(0)
#define D7_SetOpenDrain()       do { ODCONCbits.ODC5 = 1; } while(0)
#define D7_SetAnalogMode()      do { ANSELCbits. = 1; } while(0)
#define D7_SetDigitalMode()     do { ANSELCbits. = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/