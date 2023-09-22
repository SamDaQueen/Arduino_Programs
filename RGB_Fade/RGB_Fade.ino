#define delayTime 10 // fading time between the colors
const int PIN_VALUES[3] = {5, 6, 3}; // defining the pin numbers for the colors RGB

void setup() {
  // setting the output pins
  pinMode(PIN_VALUES[0], OUTPUT);
  pinMode(PIN_VALUES[1], OUTPUT);
  pinMode(PIN_VALUES[2], OUTPUT);

  // initialize the LED values
  digitalWrite(PIN_VALUES[0], HIGH);
  digitalWrite(PIN_VALUES[1], LOW);
  digitalWrite(PIN_VALUES[2], LOW);

}

int color = 0; // RED (0), GREEN (1), BLUE (2)


void loop() {
  /**
    start from red, turn to green in this loop,
    next loop, start from green and turn to blue, 
    then blue to red, and then back to green
  **/
  for (int i = 0; i < 255; i++) {
    analogWrite(PIN_VALUES[color], 255 - i);
    analogWrite(PIN_VALUES[(color + 1)%3], i);
    delay(delayTime);
  }

  color = (color + 1)%3; // start from the next color in next loop

}
