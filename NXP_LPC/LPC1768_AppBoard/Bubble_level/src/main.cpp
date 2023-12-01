// Muthanna Alwahash
// Nov 2023

//Uses x & y acceleration to simulate a bubble level
//on the application board LCD display

#include "mbed.h"
#include "MMA7660.h"
#include "C12832.h"

C12832      lcd(p5, p7, p6, p8, p11);   // On board LCD display
MMA7660     MMA(p28, p27);              // I2C Accelerometer
DigitalOut  connectionLed(LED1);        // Accel OK LED

int main()
{
    int x=0,y=0;
    lcd.cls();                              // clear LCD

    if (MMA.testConnection())               // Init accelerometer
        connectionLed = 1;                  // Init OK

    while(1) {                              //read X,Y +/-Gs and scale for #display pixels
        x = (x +MMA.x() * 32.0)/2.0;
        y = (y -MMA.y() * 16.0)/2.0;
        lcd.fillcircle(x+63, y+15, 3, 1);   //draw bubble
        lcd.circle(63, 15, 8, 1);
        ThisThread::sleep_for(5ms);         //time delay
        lcd.fillcircle(x+63, y+15, 3, 0);   //erase bubble
    }

}
