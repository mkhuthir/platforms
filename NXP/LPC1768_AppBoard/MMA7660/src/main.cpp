// Muthanna Alwahash
// Nov 2023

#include "mbed.h"
#include "C12832.h"
#include "MMA7660.h"
#include "Arial_9.h"


C12832 lcd(p5, p7, p6, p8, p11);        // initialize LCD
MMA7660 MMA(p28, p27);                  // initialize MMA7660 3-Axis Orientation/Motion Detection Sensor

int main()
{
    lcd.cls();
    lcd.set_font((unsigned char*) Arial_9);
            
    while(1) {
        lcd.locate(0,0);
        lcd.printf("%d",(int) 1000*MMA.z());
        thread_sleep_for(100);
    }


}