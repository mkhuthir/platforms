// Muthanna Alwahash
// Nov 2023

#include "mbed.h"
#include "C12832.h"

#define	delay_ms 150


C12832 lcd(p5, p7, p6, p8, p11);


int main()
{
    lcd.cls();
    lcd.locate(0,0);

    lcd.printf("Mbed OS %d.%d.%d\n",
		MBED_MAJOR_VERSION,
		MBED_MINOR_VERSION,
		MBED_PATCH_VERSION);

}