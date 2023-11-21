// Muthanna Alwahash
// Nov 2023

#include "mbed.h"
#include "C12832.h"

#include "Arial_9.h"


C12832 lcd(p5, p7, p6, p8, p11);        // initialize LCD


int main()
{
    lcd.cls();
    lcd.set_font((unsigned char*) Arial_9);
    lcd.printf("Temperature: ");

}
