/*
  Program for making the active buzzer play the melody for Twinkle Twinkle little star
*/

#include "pitches.h"

// defining the components connected to the pins
#define BUZZER_PIN 7

void setup() {
  // setting the output pin
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // Twinkle, twinkle, little star
  playNote(NOTE_C4, 250);
  playNote(NOTE_C4, 250);
  playNote(NOTE_G4, 250);
  playNote(NOTE_G4, 250);
  playNote(NOTE_A4, 250);
  playNote(NOTE_A4, 250);
  playNote(NOTE_G4, 500);
  
  // How I wonder, what you are!
  playNote(NOTE_F4, 250);
  playNote(NOTE_F4, 250);
  playNote(NOTE_E4, 250);
  playNote(NOTE_E4, 250);
  playNote(NOTE_D4, 250);
  playNote(NOTE_D4, 250);
  playNote(NOTE_C4, 500);

  // Up above the world so high
  playNote(NOTE_G4, 250);
  playNote(NOTE_G4, 250);
  playNote(NOTE_F4, 250);
  playNote(NOTE_F4, 250);
  playNote(NOTE_E4, 250);
  playNote(NOTE_E4, 250);
  playNote(NOTE_D4, 500);

  // Like a diamond in the sky
  playNote(NOTE_G4, 250);
  playNote(NOTE_G4, 250);
  playNote(NOTE_F4, 250);
  playNote(NOTE_F4, 250);
  playNote(NOTE_E4, 250);
  playNote(NOTE_E4, 250);
  playNote(NOTE_D4, 500);

  // Twinkle, twinkle, little star
  playNote(NOTE_C4, 250);
  playNote(NOTE_C4, 250);
  playNote(NOTE_G4, 250);
  playNote(NOTE_G4, 250);
  playNote(NOTE_A4, 250);
  playNote(NOTE_A4, 250);
  playNote(NOTE_G4, 500);
  
  // How I wonder, what you are!
  playNote(NOTE_F4, 250);
  playNote(NOTE_F4, 250);
  playNote(NOTE_E4, 250);
  playNote(NOTE_E4, 250);
  playNote(NOTE_D4, 250);
  playNote(NOTE_D4, 250);
  playNote(NOTE_C4, 500);

  noTone(BUZZER_PIN); // Turn off the buzzer
  delay(2000); // Delay between melodies
}

// Play the note for the specified duration
void playNote(int noteFrequency, int noteDuration) {
  tone(BUZZER_PIN, noteFrequency, noteDuration); // play the tone
  delay(noteDuration + 50); // Add a small delay to separate the notes
  noTone(BUZZER_PIN); // stop all tones
}