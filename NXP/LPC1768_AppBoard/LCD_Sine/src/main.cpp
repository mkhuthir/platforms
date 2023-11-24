// Muthanna Alwahash
// Nov 2023

#include "mbed.h"
#include "C12832.h"

#define X1   0
#define X2   127
#define Y1   0
#define Y2   31

C12832      lcd(p5, p7, p6, p8, p11);

int main()
{
    int i,k;
    double s,a;
    
    k = 1;

    while(true) {
        
        for (i=X1+1; i<X2-1; i++) {           
            s = ((Y2+1)/2) * sin((long double)(i+k  )/5);   // pixel to print  
            a = ((Y2+1)/2) * sin((long double)(i+k-1)/5);   // old pixel to erase
            lcd.pixel(i,((Y2+1)/2)+(int)a ,0);              // erase pixel  
            lcd.pixel(i,((Y2+1)/2)+(int)s ,1);              // print pixel  
        }
        lcd.copy_to_lcd();                                  // update the lcd 
        thread_sleep_for(100);                              // wait 500 ms
        k++;
    }

}
