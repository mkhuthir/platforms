// Muthanna Alwahash
// Feb 2024

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

// get/set IO_RA2 aliases
#define LED0_TRIS                 TRISAbits.TRISA2
#define LED0_LAT                  LATAbits.LATA2
#define LED0_PORT                 PORTAbits.RA2
#define LED0_WPU                  WPUAbits.WPUA2
#define LED0_OD                   ODCONAbits.ODCA2
#define LED0_ANS                  ANSELAbits.ANSA2
#define LED0_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED0_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED0_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED0_GetValue()           PORTAbits.RA2
#define LED0_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED0_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED0_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED0_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED0_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED0_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED0_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
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