/*
  Program for generating do re me fa so la ti do notes using passive buzzer
*/

#include "pitches.h"

// defining the components connected to the pins
#define BUZZER_PIN 8

// defining the notes
const int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};

const int duration = 500;

void setup() {
  // setting the output pin
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // play the notes
  for (int currentNote = 0; currentNote < 8; currentNote++) {
    tone(BUZZER_PIN, melody[currentNote], duration);
    delay(750); // pause between notes
  }

  delay(1000); // pause before repeating
}
