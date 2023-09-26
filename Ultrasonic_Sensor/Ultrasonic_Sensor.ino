/*
  Program for using an HC-SR04 sensor without any libraries.
*/

// defining the components connected to the pins
#define ECHO_PIN 11
#define TRIGGER_PIN 12

void setup() {
  Serial.begin(9600); // to initialize the serial monitor for display

  // setting up the inputs and outputs
  pinMode(ECHO_PIN, INPUT); // the pin that receives the ultrasonic
  pinMode(TRIGGER_PIN, OUTPUT); // the pin that generates the ultrasonic

}

void loop() {
  // reset the trigger pin and then send the trigger
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10); // to give the echo pin time to receive it

  digitalWrite(TRIGGER_PIN, LOW); // turn it off so the echo does not receive it from trigger itself

  unsigned long time = pulseIn(ECHO_PIN, HIGH); // duration that echo pin remained high, i.e. received a signal
  double distance = time/58.2; // distance = time*speed/2 (back and forth)
  Serial.println("Distance:" + String(distance)); // to display the distance on the serial monitor

  delay(100); // add a pause between checks

}
