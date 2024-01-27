// Muthanna Alwahash
// Nov 2023

#include "mbed.h"
#include "C12832.h"

#include "Arial_9.h"
#include "Small_6.h"
#include "Arial12x12.h"
#include "Arial24x23.h"


C12832 lcd(p5, p7, p6, p8, p11);

int main()
{
    lcd.cls();

    // default font included in C12832.h
    lcd.printf("Small_7  ");
    
    lcd.set_font((unsigned char*) Arial_9);
    lcd.printf("Arial_9  ");

    lcd.set_font((unsigned char*) Small_6);
    lcd.printf("Small_6 \n\n");

    lcd.set_font((unsigned char*) Arial12x12);
    lcd.printf("12x12  ");

    lcd.locate(35,12);
    lcd.set_font((unsigned char*) Arial24x23);
    lcd.printf("24x23");

}
