// Muthanna Alwahash
// Dec 2023

#include <Arduino.h>

#define Buzzer_PIN 5          	// Buzzer Pin is on GPIO5

void setup()
{
  pinMode(Buzzer_PIN, OUTPUT);  // initialize digital pin as an output.
}

void loop()
{
  analogWrite(Buzzer_PIN, 127); // Send PWM signal at 50% duty cycle
  delay(100);                   // wait 100ms
  analogWrite(Buzzer_PIN, 0);   // Send PWM signal at 0% duty cycle
  delay(500);                   // wait 100ms
}
