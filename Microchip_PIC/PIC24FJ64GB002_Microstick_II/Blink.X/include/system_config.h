
#ifndef SYSTEM_CONFIG_H
#define SYSTEM_CONFIG_H

#include <xc.h>
#ifdef	__cplusplus
extern "C" {
#endif

#define LED  	 _LATA0
#define LED_TRIS _TRISA0

#ifdef	__cplusplus // Provide C++ Compatibility
}
#endif
#endif	/* SYSTEM_CONFIG_H*/
