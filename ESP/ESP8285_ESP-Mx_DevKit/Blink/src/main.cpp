// Muthanna Alwahash
// Dec 2023
// LED Blink

#include <Arduino.h>

#define LED_PIN 16              // Set LED_PIN GPIO16

void setup()
{
  pinMode(LED_PIN, OUTPUT);     // initialize LED digital pin as an output.
}

void loop()
{
  digitalWrite(LED_PIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                   // wait 100ms
  digitalWrite(LED_PIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100);                   // wait 100ms
}
