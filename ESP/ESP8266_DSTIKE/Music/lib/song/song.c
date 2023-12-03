// Muthanna Alwahash
// Dec 2023


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