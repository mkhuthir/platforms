// Muthanna Alwahash
// Jan 2024

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED2 aliases
#define LED2_TRIS               TRISAbits.TRISA0
#define LED2_LAT                LATAbits.LATA0
#define LED2_PORT               PORTAbits.RA0
#define LED2_WPU                WPUAbits.WPUA0
#define LED2_OD                ODCONAbits.ODCA0
#define LED2_ANS                ANSELAbits.ANSA0
#define LED2_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED2_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED2_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED2_GetValue()           PORTAbits.RA0
#define LED2_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED2_SetPullup()      do { WPUAbits.WPUA0 = 1; } while(0)
#define LED2_ResetPullup()    do { WPUAbits.WPUA0 = 0; } while(0)
#define LED2_SetPushPull()    do { ODCONAbits.ODCA0 = 1; } while(0)
#define LED2_SetOpenDrain()   do { ODCONAbits.ODCA0 = 0; } while(0)
#define LED2_SetAnalogMode()  do { ANSELAbits.ANSA0 = 1; } while(0)
#define LED2_SetDigitalMode() do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LED3 aliases
#define LED3_TRIS               TRISAbits.TRISA1
#define LED3_LAT                LATAbits.LATA1
#define LED3_PORT               PORTAbits.RA1
#define LED3_WPU                WPUAbits.WPUA1
#define LED3_OD                ODCONAbits.ODCA1
#define LED3_ANS                ANSELAbits.ANSA1
#define LED3_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED3_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED3_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED3_GetValue()           PORTAbits.RA1
#define LED3_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED3_SetPullup()      do { WPUAbits.WPUA1 = 1; } while(0)
#define LED3_ResetPullup()    do { WPUAbits.WPUA1 = 0; } while(0)
#define LED3_SetPushPull()    do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED3_SetOpenDrain()   do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED3_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED3_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED4 aliases
#define LED4_TRIS               TRISAbits.TRISA2
#define LED4_LAT                LATAbits.LATA2
#define LED4_PORT               PORTAbits.RA2
#define LED4_WPU                WPUAbits.WPUA2
#define LED4_OD                ODCONAbits.ODCA2
#define LED4_ANS                ANSELAbits.ANSA2
#define LED4_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED4_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED4_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED4_GetValue()           PORTAbits.RA2
#define LED4_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED4_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED4_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define LED4_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define LED4_SetPushPull()    do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED4_SetOpenDrain()   do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED4_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED4_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED5 aliases
#define LED5_TRIS               TRISAbits.TRISA3
#define LED5_LAT                LATAbits.LATA3
#define LED5_PORT               PORTAbits.RA3
#define LED5_WPU                WPUAbits.WPUA3
#define LED5_OD                ODCONAbits.ODCA3
#define LED5_ANS                ANSELAbits.ANSA3
#define LED5_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LED5_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LED5_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LED5_GetValue()           PORTAbits.RA3
#define LED5_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LED5_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LED5_SetPullup()      do { WPUAbits.WPUA3 = 1; } while(0)
#define LED5_ResetPullup()    do { WPUAbits.WPUA3 = 0; } while(0)
#define LED5_SetPushPull()    do { ODCONAbits.ODCA3 = 1; } while(0)
#define LED5_SetOpenDrain()   do { ODCONAbits.ODCA3 = 0; } while(0)
#define LED5_SetAnalogMode()  do { ANSELAbits.ANSA3 = 1; } while(0)
#define LED5_SetDigitalMode() do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()    do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()   do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()   do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()         PORTCbits.RC0
#define RC0_SetDigitalInput()   do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()  do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()     do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()   do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode() do { ANSELCbits.ANSC0 = 1; } while(0)
#define RC0_SetDigitalMode()do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()    do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()   do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()   do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()         PORTCbits.RC1
#define RC1_SetDigitalInput()   do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()  do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()     do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()   do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode() do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()do { ANSELCbits.ANSC1 = 0; } while(0)


void PIN_MANAGER_Initialize (void);
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
