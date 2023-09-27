/*
  Program for getting the X, Y and button press input from an analog joystick
*/

// defining the components connected to the pins
#define SELECT_PIN 2
#define X_PIN 0
#define Y_PIN 1
#define THRESHOLD 10

void setup() {
  // setting up the digital input
  pinMode(SELECT_PIN, INPUT);
  digitalWrite(SELECT_PIN, HIGH);
  Serial.begin(9600); // for printing coordinates and button press

}

word x_coord = 0;
word y_coord = 0;

void loop() {
  // fetching the values from the pins
  word new_x_coord = analogRead(X_PIN);
  word new_y_coord = analogRead(Y_PIN);
  int btn_state = digitalRead(SELECT_PIN);

  // print values if change greater than threshold
  if(abs(x_coord - new_x_coord) >= THRESHOLD
  || abs(y_coord - new_y_coord) >= THRESHOLD
  || !btn_state) {
    Serial.print("X co-ordinate: " + String(new_x_coord) + "\n");  
    Serial.print("Y co-ordinate: " + String(new_y_coord) + "\n\n");  
    
    // checking if button was pressed
    if (!btn_state)  {
      Serial.print("Button pressed!\n\n");
    }

    // update the values
    x_coord = new_x_coord;
    y_coord = new_y_coord;
  }

  delay(100); // to avoid printing same values multiple times

}
