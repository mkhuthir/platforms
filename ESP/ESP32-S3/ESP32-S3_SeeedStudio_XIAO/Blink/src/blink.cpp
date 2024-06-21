// Muthanna Alwahash
// Nov 2023
// LED Blink

#include <Arduino.h>

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);     // initialize LED digital pin as an output.
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                   // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                   // wait for a second
}
