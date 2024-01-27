// Muthanna Alwahash
// Jan 2024

#include "eusart.h"

void EUSART_Initialize(void)    // Set the EUSART module
{
    BAUD1CON = 0x09;    // ABDOVF no_overflow; SCKP Non-Inverted; BRG16 16bit_generator; WUE disabled; ABDEN enabled; 
    RC1STA   = 0x90;    // SPEN enabled; RX9 8-bit; CREN enabled; ADDEN disabled; SREN disabled; 
    TX1STA   = 0x24;    // TX9 8-bit; TX9D 0; SENDB sync_break_complete; TXEN enabled; SYNC asynchronous; BRGH hi_speed; CSRC slave; 
    SP1BRGL  = 0x0C;    // Baud Rate = 19200; SP1BRGL 12; 
    SP1BRGH  = 0x00;    // Baud Rate = 19200; SP1BRGH 0; 

}

uint8_t EUSART_Read(void)
{

    while(!PIR3bits.RCIF)
    {
    }

    if(1 == RC1STAbits.OERR)
    {
        // EUSART error - restart

        RC1STAbits.CREN = 0; 
        RC1STAbits.CREN = 1; 
    }

    return RC1REG;
}

void EUSART_Write(uint8_t txData)
{
    while(0 == PIR3bits.TXIF)
    {
    }

    TX1REG = txData;    // Write the data byte to the USART.
}

int getch(void)
{
    return EUSART_Read();
}

void putch(char txData)
{
    EUSART_Write(txData);
}
