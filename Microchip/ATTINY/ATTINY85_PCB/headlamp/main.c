// headlamp replacement firmware for attinyX5
// (c) 2022 by Jeremy Stanley
// Licensed under GNU GPL v3

// replaces the circuit board for a headlamp
// with insufficient brightness control
// and a blinky mode that I don't want

// operation:
// push button: cycle between off / low / med / high / zomgblinding
// hold button: turn off without cycling through brightness levels
//   single press will power on at last used brightness level
// THERE IS NO BLINKY MODE

// parts list:
// 1x ATtiny25/45/85 MCU
// 1x LED, plus suitable current-limiting resistor
// 1x 2N2222 NPN transistor, plus suitable base resistor
// 1x momentary contact tactile switch, plus pull-down resistor

// port assignments:
// 2. PB3 (PCINT3): the button
// 5. PB0 (OC0A): the LED

// turn off after 20 minutes of inactivity
// (I use this thing for short bursts; if you're using this for night trail runs, please change this)
#define TIMEOUT_SECONDS 1200

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>

#include "button.h"
#include "sync_sleep.h"
#include "pwm.h"
#include "io.h"

ISR(PCINT0_vect)
{
}

void power_down()
{
    PORTB &= ~(1 << LED_PORT);

    PCMSK = (1 << PCINT3);
    GIMSK |= (1 << PCIE);

    do {
        set_sleep_mode(SLEEP_MODE_PWR_DOWN);
        sleep_mode();
        // we are awakened by a pin-change interrupt
    } while (!is_button_really_pressed());

    GIMSK &= ~(1 << PCIE);
    PCMSK &= ~(1 << PCINT3);
}

void run_lamp()
{
    static int8_t bright = 0;
    uint32_t timeout = 0;

    pwm_on();
    fade(0, bright);
    get_input(1);

    while(timeout < TIMEOUT_SECONDS * 20) {
        sync_sleep(50);
        uint8_t input = get_input(0);
        if (input == HOLD) {
            break;
        } else if (input == PRESS) {
            timeout = 0;
            if (bright == 3) {
                fade(bright, 0);
                bright = 0;
                break;
            }
            fade(bright, bright + 1);
            bright += 1;
        }
        ++timeout;
    }

    fade(bright, 0);
    pwm_off();
    wait_for_button_release();
}

int main(void)
{
    io_init();
    sei();

    for(;;) {
        power_down();
        run_lamp();
    }
}
