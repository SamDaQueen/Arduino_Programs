/*
  Program for getting inputs from a 4x4 keypad module
*/

#include <Keypad.h>

// setting the number of rows and columns in available keyboard
const byte NUM_ROWS = 4;
const byte NUM_COLS = 4;

// defining the pins connected to the rows and columns
const byte ROW_PINS[NUM_ROWS] = {2, 3, 4, 5}; // the first four pins connected from the left
const byte COL_PINS[NUM_COLS] = {6, 7, 8, 9}; // the next four pins connected

// creating a 2D char matrix for the layout of the keyboard
char hexKeys[NUM_ROWS][NUM_COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

// initializing the Keypad object with above attributes
Keypad myKeypad = Keypad(makeKeymap(hexKeys), ROW_PINS, COL_PINS, NUM_ROWS, NUM_COLS);

void setup() {
  // Serial monitor to print the key pressed
  Serial.begin(9600);

}

void loop() {
  // read the key pressed and print it
  char pressedKey = myKeypad.getKey();

  if (pressedKey)  {
    Serial.print(pressedKey);
  }

}
