// Muthanna Alwahash
// Nov 2023

/*
  Debounce

  Each time the input pin goes from LOW to HIGH (e.g. because of a push-button
  press), the output pin is toggled from LOW to HIGH or HIGH to LOW. There's a
  minimum delay between toggles to debounce the circuit (i.e. to ignore noise).

*/

#include <Arduino.h>

#ifdef LED_BUILTIN
  #undef  LED_BUILTIN
#endif
#define LED_BUILTIN PC13

#ifdef USER_BTN
  #undef  USER_BTN
#endif
#define USER_BTN    PA0


int ledState = LOW;                   // the current state of the output pin
int btnState;                         // the current reading from the input pin
int lastBtnState = LOW;               // the previous reading from the input pin

unsigned long lastDebounceTime = 0;   // the last time the output pin was toggled
unsigned long debounceDelay = 50;     // the debounce time in ms; increase if the output flickers

void setup() {
  pinMode(USER_BTN, INPUT_PULLUP);    // pull_up is required to keep the switch pin up when switch is not pressed.
  pinMode(LED_BUILTIN, OUTPUT);
  
  digitalWrite(LED_BUILTIN, ledState);// set initial LED state
}

void loop() {
  
  int reading = digitalRead(USER_BTN);// read the state of the switch into a local variable:

  if (reading != lastBtnState) {      // If the switch changed, due to noise or pressing:
    lastDebounceTime = millis();      // reset the debouncing timer
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != btnState) {        // if the button state has changed:
      btnState = reading;
      if (btnState == HIGH) {         // only toggle the LED if the new button state is HIGH
        ledState = !ledState;
      }
    }
  }

  digitalWrite(LED_BUILTIN, ledState);// set the LED new state:
  lastBtnState = reading;             // save the reading. Next time through the loop, it'll be the lastButtonState:
}
