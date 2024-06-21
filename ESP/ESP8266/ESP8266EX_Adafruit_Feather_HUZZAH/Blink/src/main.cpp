// Muthanna Alwahash
// Nov 2023
// LED Blink

#include <Arduino.h>

#define LED_PIN 0          	// Set LED_PIN

void setup()
{
  pinMode(LED_PIN, OUTPUT);     // initialize LED digital pin as an output.
}

void loop()
{
  digitalWrite(LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                   // wait for a second
  digitalWrite(LED_PIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                   // wait for a second
}
