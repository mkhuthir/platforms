// Muthanna Alwahash
// Nov 2023

#include "mbed.h"
#include "C12832.h"
#include "Arial_9.h"
#include "Small_7.h"
#include "graphics.h"
#define	delay_ms 100


C12832 lcd(p5, p7, p6, p8, p11);

int main()
{
    int i,s;
    lcd.cls();
    lcd.set_font((unsigned char*) Arial_9);
    s = 3;
    lcd.print_bm(bitmTree,95,0);  // print christmas tree
    lcd.copy_to_lcd(); 
    lcd.setmode(XOR);             // XOR - a second print will erase  
    for(i = -15; i < 75; ){     
        lcd.print_bm(bitmSan1,i,2);
        thread_sleep_for(delay_ms);
        lcd.copy_to_lcd();           // update lcd  
        lcd.print_bm(bitmSan1,i,2);  // erase
        i= i+s;
        lcd.print_bm(bitmSan2,i,2);  // print next
        thread_sleep_for(delay_ms);
        lcd.copy_to_lcd();           // update lcd   
        lcd.print_bm(bitmSan2,i,2);  // erase
        i= i+s;
        lcd.print_bm(bitmSan3,i,2);  // print next 
        thread_sleep_for(delay_ms);
        lcd.copy_to_lcd();           // update lcd
        lcd.print_bm(bitmSan3,i,2);  // erase
        i= i+s;
   }
   lcd.print_bm(bitmSan3,i,2);
   lcd.set_auto_up(0);
   for(i=-20; i<5; i++){             // scrolling text
     lcd.locate(5,i);
     lcd.printf("Happy");
     lcd.locate(5,i+12);
     lcd.printf("Christmas");
     lcd.copy_to_lcd();
     lcd.locate(5,i);
     thread_sleep_for(delay_ms); 
     lcd.printf("Happy");
     lcd.locate(5,i+12);
     lcd.printf("Christmas");
     lcd.copy_to_lcd();
     i=i+1;
   }  
   lcd.locate(5,i);
   lcd.printf("Happy");
   lcd.locate(5,i+12);
   lcd.printf("Christmas");
   lcd.copy_to_lcd();
   
}
