/*
  Program for turning LED on and off with a single switch
*/

// defining the components connected to the pins
#define LED_PIN 5
#define BUTTON_PIN 9

void setup() {
  // setting the inputs and outputs
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);

}

void loop() {
  // check button status and set LED on or off
  digitalWrite(LED_PIN, !digitalRead(BUTTON_PIN));

}
