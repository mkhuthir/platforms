/** Simple C8051F300 sdcc gpio example
 *
 * Read the gpio pins that have buttons connected.
 * If they are pressed light up the leds connected
 * to the gpio pins.
 *
 * Compile with "sdcc gpio.c" and flash gpio.ihx
 * 
 */

#include <C8051F300.h>

void main (void)
{
	PCA0MD &= ~0x40;			// Disable the watchdog timer

	/* Clock init */
	OSCICN = 0x04;				// Enable internal oscillator (24.5 MHz)
								// Set sysclock to internal oscillator / 8
	RSTSRC = 0x04;				// Enable missing clock detector

	/* Port/Crossbar init */
	XBR0 = 0xFF;				// Skip all pins in crossbar selection
	XBR2 = 0x40;				// Enable the crossbar

	while (1) {					// Loop forever
		if (P0_5)				// If button 1 is pressed
			P0_6 = 1;			// Light up green led
		else
			P0_6 = 0;			// Turn off green led

		if (P0_4)				// If button 2 is pressed
			P0_7 = 1;			// Light up yellow led
		else
			P0_7 = 0;			// Turn off green led
   }
}
