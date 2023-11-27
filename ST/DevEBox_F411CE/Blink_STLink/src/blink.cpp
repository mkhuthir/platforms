// Muthanna Alwahash
// Nov 2023
// LED Blink

#include <Arduino.h>
#define LED_BUILTIN PC13

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);       // initialize LED digital pin as an output.
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);    // turn the LED on (HIGH is the voltage level)
  delay(100);                         // wait for a second
  digitalWrite(LED_BUILTIN, LOW);     // turn the LED off by making the voltage LOW
  delay(100);                         // wait for a second
}
