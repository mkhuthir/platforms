// Muthanna Alwahash
// Nov 2023
// LED Blink

#include <Arduino.h>

#define LED_PIN 5          	// Set LED_PIN

void setup()
{
  pinMode(LED_PIN, OUTPUT);     // initialize LED digital pin as an output.
}

void loop()
{
  analogWrite(LED_PIN, 127);  // turn the LED on (HIGH is the voltage level)
  delay(500);                   // wait for a second
  analogWrite(LED_PIN, 0);   // turn the LED off by making the voltage LOW
  delay(500);                   // wait for a second
}
