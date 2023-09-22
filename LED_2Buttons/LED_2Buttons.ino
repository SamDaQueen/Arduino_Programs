/*
  Program for turning LED on and off with switches
*/

// defining the components connected to the pins
#define LED_PIN 5
#define BUTTON_A_PIN 9
#define BUTTON_B_PIN 8

void setup() {
  // setting the inputs and outputs
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_A_PIN, INPUT_PULLUP);
  pinMode(BUTTON_B_PIN, INPUT_PULLUP);

}

void loop() {
  // check button status and set LED on or off
  if (digitalRead(BUTTON_A_PIN) == LOW) {
    digitalWrite(LED_PIN, HIGH);
  }
  if (digitalRead(BUTTON_B_PIN) == LOW) {
    digitalWrite(LED_PIN, LOW);
  }

}
