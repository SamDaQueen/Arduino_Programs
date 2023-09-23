/*
  Program for making the active buzzer play the melody for Twinkle Twinkle little star
*/

// defining the components connected to the pins
#define BUZZER_PIN 7

// Define the frequencies for each note
const int C4 = 261;
const int D4 = 294;
const int E4 = 329;
const int F4 = 349;
const int G4 = 392;
const int A_4 = 440;
const int REST = 0; // Define a rest (no sound)

void setup() {
  // setting the output pin
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // Twinkle, twinkle, little star
  playNote(C4, 250);
  playNote(C4, 250);
  playNote(G4, 250);
  playNote(G4, 250);
  playNote(A_4, 250);
  playNote(A_4, 250);
  playNote(G4, 500);
  
  // How I wonder, what you are!
  playNote(F4, 250);
  playNote(F4, 250);
  playNote(E4, 250);
  playNote(E4, 250);
  playNote(D4, 250);
  playNote(D4, 250);
  playNote(C4, 500);

  // Up above the world so high
  playNote(G4, 250);
  playNote(G4, 250);
  playNote(F4, 250);
  playNote(F4, 250);
  playNote(E4, 250);
  playNote(E4, 250);
  playNote(D4, 500);

  // Like a diamond in the sky
  playNote(G4, 250);
  playNote(G4, 250);
  playNote(F4, 250);
  playNote(F4, 250);
  playNote(E4, 250);
  playNote(E4, 250);
  playNote(D4, 500);

  // Twinkle, twinkle, little star
  playNote(C4, 250);
  playNote(C4, 250);
  playNote(G4, 250);
  playNote(G4, 250);
  playNote(A_4, 250);
  playNote(A_4, 250);
  playNote(G4, 500);
  
  // How I wonder, what you are!
  playNote(F4, 250);
  playNote(F4, 250);
  playNote(E4, 250);
  playNote(E4, 250);
  playNote(D4, 250);
  playNote(D4, 250);
  playNote(C4, 500);

  noTone(BUZZER_PIN); // Turn off the buzzer
  delay(2000); // Delay between melodies
}

// Play the note for the specified duration
void playNote(int noteFrequency, int noteDuration) {
  if (noteFrequency == REST) {
    delay(noteDuration);
  } else {
    tone(BUZZER_PIN, noteFrequency, noteDuration); // play the tone
    delay(noteDuration + 50); // Add a small delay to separate the notes
    noTone(BUZZER_PIN); // stop all tones
  }
}