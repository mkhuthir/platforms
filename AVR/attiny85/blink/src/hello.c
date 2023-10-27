// Muthanna Alwahash
// October 2023

#include <avr/io.h>
#include <util/delay.h>

#define LED      PB0

int main () {
	uint8_t high = 0;
	uint16_t ms = 0;


	DDRB |= (1 << LED);			// setup LED pin for output in port B's direction register

	
	PORTB &= ~(1 << LED);		// set LED pin LOW

	while (1) {	
		high = !high;

		if (high) {
			PORTB |= (1 << LED);	// set LED pin HIGH
		} else {
			PORTB &= ~(1 << LED);	// set LED pin LOW
		}

		_delay_ms(10);
	}

	return 0;
}
