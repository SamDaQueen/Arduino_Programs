/*
  Program to use a tilt ball switch to light LED
*/

// defining the components connected to the pins
#define LED_PIN 2
#define BALL_PIN 12

void setup() {
  // setting the inputs and outputs
  pinMode(LED_PIN, OUTPUT);
  pinMode(BALL_PIN, INPUT_PULLUP); // HIGH by default

}

void loop() {
  // set the value of the LED according to the value of the ball 
  // tilt upwards - LED ON, laid down - LED OFF
  digitalWrite(LED_PIN, !digitalRead(BALL_PIN));
}
