// Muthanna Alwahash
// Feb 2024

#include <avr/io.h>

/**
 * Configures the Fuse bits.
 */
FUSES = 
{
  .BODCFG = ACTIVE_DIS_gc | LVL_BODLEVEL0_gc | SAMPFREQ_1KHZ_gc | SLEEP_DIS_gc,
  .OSCCFG = FREQSEL_20MHZ_gc,
  .SYSCFG0 = CRCSRC_NOCRC_gc | RSTPINCFG_GPIO_gc,
  .SYSCFG1 = SUT_64MS_gc,
  .WDTCFG = PERIOD_OFF_gc | WINDOW_OFF_gc,
};
