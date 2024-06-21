// Muthanna Alwahash
// Dec 2023

#include <Arduino.h>
#include <song.h>

#define SERIAL_BAUD 115200      // Baudrate for serial communication

void setup() {
  Serial.begin(SERIAL_BAUD);    // Start serial communication
  pinMode(Buzzer_PIN, OUTPUT);  // Init buzzer pin
  Serial.println("Setup Started\n");
 
  start_song();                 // Start playing the song
}

void loop() {
  play_song();                  // Song will continue playing until you call stop_song();
}