// Muthanna Alwahash
// Dec 2023

#include <Arduino.h>
#include <song.h>

#define Buzzer_PIN 5          	// Buzzer Pin is on GPIO5
#define SPEED 1.5               // Song speed, the bigger the number the slower the song
#define SERIAL_BAUD 115200 /* Baudrate for serial communication */

unsigned long song_time { 0 };  // Last song update
unsigned long current_time;     // to store current time ms.
bool  song_playing { false };   // If a song is currently playing
int   note_index { 0 };         // Index of note that is currently playing
int   note_time { 0 };          // The amount of time (ms) a note is played

void start_song(){
  song_playing = true;
  note_index = 0;
  note_time = duration[note_index] * SPEED;
  Serial.println("Song Started \n");
}

void stop_song(){
  song_playing = false;
  noTone(Buzzer_PIN); // Stop playing
  Serial.println("Song Stopped \n");
}

void play_song(){
  current_time = millis(); // Get current time (in ms)
  if(song_playing && current_time - song_time >= (unsigned long)note_time) {
    song_time = current_time;
    note_index = (note_index+1) % (sizeof(notes)/sizeof(notes[0]));
    note_time = duration[note_index] * SPEED;
    tone(Buzzer_PIN, notes[note_index], note_time);
  }
}

void setup() {
  Serial.begin(SERIAL_BAUD);    // Start serial communication
  pinMode(Buzzer_PIN, OUTPUT);  // Init buzzer pin
  Serial.println("Setup Started\n");
 
  start_song();
}

void loop() {
  play_song();
}