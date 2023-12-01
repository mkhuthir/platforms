// Muthanna Alwahash
// Nov 2023

#include "mbed.h"
#include "C12832.h"

#define	delay_ms 150


C12832 lcd(p5, p7, p6, p8, p11);


int main()
{
    int j=0;

    lcd.cls();
    lcd.locate(0,0);
    lcd.printf("LPC1768 AppBoard !");

    while(true) {
        lcd.locate(15 ,15);
        lcd.printf("Counting : %d",j);
        j++;
        thread_sleep_for(delay_ms);
    }
}