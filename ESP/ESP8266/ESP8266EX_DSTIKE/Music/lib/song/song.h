// Muthanna Alwahash
// Dec 2023

#ifndef SONG_H
  #define SONG_H

  #define Buzzer_PIN 5          	// Buzzer Pin is on GPIO5
  #define SPEED 1.5               // Song speed, the bigger the number the slower the song

  #define NOTE_C4  262
  #define NOTE_D4  294
  #define NOTE_E4  330
  #define NOTE_F4  349
  #define NOTE_G4  392
  #define NOTE_A4  440
  #define NOTE_B4  494
  #define NOTE_C5  523
  #define NOTE_D5  587
  #define NOTE_E5  659
  #define NOTE_F5  698
  #define NOTE_G5  784
  #define NOTE_A5  880
  #define NOTE_B5  988

  void start_song();
  void stop_song();
  void play_song();

#endif
// SONG_H