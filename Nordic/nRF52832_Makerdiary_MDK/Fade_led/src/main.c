// Muthanna Alwahash
// Dec 2023


#include <zephyr.h>
#include <sys/printk.h>
#include <device.h>
#include <drivers/pwm.h>
#include <board.h>
#define PWM_DRIVER CONFIG_PWM_NRF5_SW_0_DEV_NAME
#define PWM_CHANNEL LED0_GPIO_PIN

/*
 * 50 is flicker fusion threshold. Modulated light will be perceived
 * as steady by our eyes when blinking rate is at least 50.
 */
#define PERIOD (USEC_PER_SEC / 50)

/* in micro second */
#define FADESTEP	2000

void main(void)
{
	struct device *pwm_dev;
	u32_t pulse_width = 0;
	u8_t dir = 0;

	printk("PWM demo app-fade LED\n");

	pwm_dev = device_get_binding(PWM_DRIVER);
	if (!pwm_dev) {
		printk("Cannot find %s!\n", PWM_DRIVER);
		return;
	}

	while (1) {
		if (pwm_pin_set_usec(pwm_dev, PWM_CHANNEL,
					PERIOD, pulse_width)) {
			printk("pwm pin set fails\n");
			return;
		}

		if (dir) {
			if (pulse_width < FADESTEP) {
				dir = 0;
				pulse_width = 0;
			} else {
				pulse_width -= FADESTEP;
			}
		} else {
			pulse_width += FADESTEP;

			if (pulse_width >= PERIOD) {
				dir = 1;
				pulse_width = PERIOD;
			}
		}

		k_sleep(MSEC_PER_SEC);
	}
}
