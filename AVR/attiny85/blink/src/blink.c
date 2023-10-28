// Muthanna Alwahash
// October 2023

#include <avr/io.h>
#include <util/delay.h>

#define LED0    PB0				// will use bit 0 from Port B
#define delay	100				// On period = Off period = 100ms

int main () {

	DDRB |= (1 << LED0);		// setup LED pin for output in PortB's direction register

	while (1) {	
		PORTB |= (1 << LED0);	// set LED pin HIGH
		_delay_ms(delay);		// delay
		PORTB &= ~(1 << LED0);	// set LED pin LOW
		_delay_ms(delay);		// delay
	}

	return 0;
}
