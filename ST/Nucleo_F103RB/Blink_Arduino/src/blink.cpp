// Muthanna Alwahash
// Nov 2023
// LED Blink

#include <Arduino.h>

#ifdef LED_BUILTIN
  #undef  LED_BUILTIN
#endif
#define LED_BUILTIN PC13

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  // wait for a second
  delay(50);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
   // wait for a second
  delay(50);
}
