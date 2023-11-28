// Muthanna Alwahash
// Nov 2023
// LED Blink

#include <Arduino.h>

#ifdef LED_BUILTIN
  #undef  LED_BUILTIN
#endif
#define LED_BUILTIN PC13

#ifdef USER_BTN
  #undef  USER_BTN
#endif
#define USER_BTN    PA0

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);       // initialize LED digital pin as an output.
  pinMode(USER_BTN, INPUT);           // initialize Key pin as an input.
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);    // turn the LED on (HIGH is the voltage level)
  delay(100);                         // wait for a second
  digitalWrite(LED_BUILTIN, LOW);     // turn the LED off by making the voltage LOW
  delay(100);                         // wait for a second
}
