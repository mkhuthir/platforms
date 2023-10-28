// Muthanna Alwahash
// October 2023

#include <avr/io.h>
#include <util/delay.h>

#define LED0    PB0
#define LED1	PB1

int main () {
	uint8_t  state = 0;

	DDRB |= (1 << LED0);			// setup LED pin for output in port B's direction register
	DDRB |= (1 << LED1);			// setup LED pin for output in port B's direction register
	
	PORTB &= ~(1 << LED0);			// set LED pin LOW
	PORTB &= ~(1 << LED1);			// set LED pin LOW

	while (1) {	
		state = !state;

		if (state) {
			PORTB |= (1 << LED0);	// set LED pin HIGH
			_delay_ms(2);
			PORTB |= (1 << LED1);	// set LED pin HIGH

		} else {
			PORTB &= ~(1 << LED0);	// set LED pin LOW
			PORTB &= ~(1 << LED1);	// set LED pin HIGH
		}

		_delay_ms(10);
	}

	return 0;
}
