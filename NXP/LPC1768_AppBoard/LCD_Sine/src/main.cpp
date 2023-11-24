// Muthanna Alwahash
// Nov 2023

#include "mbed.h"
#include "C12832.h"

#define X1   0
#define X2   127
#define Y1   0
#define Y2   31
#define Ym   (Y2+1)/2

C12832      lcd(p5, p7, p6, p8, p11);
AnalogIn    pot1(p19);                  // used to set LCD Contrast

int main()
{
    int i,k,p1;
    double s,a;
    
    k = 1;

    while(true) {
        p1 = pot1.read_u16();                           // get the value of pot1 to set contrast
        p1 = p1 >> 10;                                  // we need only 6 bit for contrast
        lcd.set_contrast(p1);                           // set LCD contrast
        
        for (i=X1; i<X2; i++) {           
            s = Ym+(Ym * sin((long double)(i+k  )/10)); // pixel to print  
            a = Ym+(Ym * sin((long double)(i+k-1)/10)); // old pixel to erase
            lcd.pixel(i,(int)a ,0);                     // erase pixel  
            lcd.pixel(i,(int)s ,1);                     // print pixel  
        }
        lcd.copy_to_lcd();                              // update the lcd 
        thread_sleep_for(50);                           // wait 50 ms
        k++;                                            // increase k

    }

}
