/** Simple C8051F300 sdcc blink example
 *
 * Configure all pins of the mcu as gpio and toggle them on and off with a delay.
 *
 * Compile with "sdcc blink.c" and flash blink.ihx
 * 
 */


#include <C8051F300.h>

void delay(int x)
{
    while(x--);
}

void main (void) {

	PCA0MD &= ~0x40;			// Disable the watchdog timer

	/* Clock init */
	OSCICN = 0x04;				// Enable internal oscillator (24.5 MHz)
								// Set sysclock to internal oscillator / 8
	RSTSRC = 0x04;				// Enable missing clock detector

	/* Port/Crossbar init */
	XBR0 = 0xFF;				// Skip all pins in crossbar selection
	XBR2 = 0x40;				// Enable the crossbar

	while (1) {					// Loop forever
		P0 = 0;					// Set all gpio pins to 0
		delay(10000);			// Delay for some time

		P0 = 0xFF;				// Set all gpio pins to 1
		delay(10000);			// Delay for some time
   }
}
