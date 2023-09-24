/*
  Program for making a servo motor spin and set it to different angles
  while also lighting LEDs according to the angle.
*/

#include <Servo.h>

// defining the components connected to the pins
#define SERVO_PIN 9
#define BLUE_LED_PIN 2
#define GREEN_LED_PIN 4
#define YELLOW_LED_PIN 7
#define RED_LED_PIN 8

// create the Servo object to control the motor
Servo myServo;

void setup() {
  // attach the Servo object to the pin
  myServo.attach(SERVO_PIN);
  myServo.write(0); // set to 0° default position

  // setting the LED outputs
  pinMode(BLUE_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(RED_LED_PIN, OUTPUT);
}

void loop() {
  // make the servo do a sweep - 0 to 180 then 180 to 0
  // light the LEDs in order according to the servo angle
  for (int angle = 0; angle <= 180; angle++) {  
    turnToAngle(angle);
  }
  for (int angle = 180; angle >= 0; angle--) {  
    turnToAngle(angle);
  }
}

// set the servo motor at the given angle
void turnToAngle(int angle) {
  myServo.write(angle);
    if (angle%45 == 0)  {
      colorLED();
    }
    delay(10);
}

void colorLED()  {
  // light the LEDs according to the angle of the servo
  int angle = myServo.read();
  // check if angle lies in range of 45° sections
  switch(angle) {
    case 0 ... 45:
      reset();
      digitalWrite(BLUE_LED_PIN, HIGH);
      break;
    case 46 ... 90:
      reset();
      digitalWrite(GREEN_LED_PIN, HIGH);
      break;
    case 91 ... 135:
      reset();
      digitalWrite(YELLOW_LED_PIN, HIGH);
      break;
    case 136 ... 180:
      reset();
      digitalWrite(RED_LED_PIN, HIGH);
      break;
    default:
      reset();
      break;
  }
}

// reset all LED to be OFF
void reset()  {
  digitalWrite(BLUE_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, LOW);
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(RED_LED_PIN, LOW);
}

