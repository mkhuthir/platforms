// Muthanna Alwahash
// Jan 2024


#ifndef CLOCK_H
#define	CLOCK_H

#ifndef _XTAL_FREQ
#define _XTAL_FREQ 32000000
#endif

/**
 * @ingroup clockdriver
 * @brief Initializes all the Internal Oscillator sources and the clock switch configurations. 
 * @param None.
 * @return None.
 */
void CLOCK_Initialize(void);

#endif	/* CLOCK_H */

