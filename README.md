# Arduino Programs

Programs for basic Arduino sketches along with the circuit images.

- Programs are well documented to be self explanatory.
- Pin numbers are mentioned in the code itself for the inputs and outputs.

## Basic Arduino functions and their uses

- [Serial.begin()](https://www.arduino.cc/reference/en/language/functions/communication/serial/begin/) - Opens the serial port for data transmission.
- [Serial.print()](https://www.arduino.cc/reference/en/language/functions/communication/serial/print/) - Prints statements on the Serial monitor. Must use [Serial.begin()](https://www.arduino.cc/reference/en/language/functions/communication/serial/begin/) in setup before using this.
- [pinMode()](https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/) - Sets the given pin component to INPUT, OUTPUT or [INPUT_PULLUP](https://docs.arduino.cc/learn/microcontrollers/digital-pins).
- [digitalRead()](https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/) - Returns HIGH or LOW based on the component connected to the corresponding pin being ON or OFF respectively.
- [digitalWrite()](https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/) - Sets the value of the connected component on the given pin to HIGH ot LOW as specified.
- [analogRead()](https://www.arduino.cc/reference/en/language/functions/analog-io/analogread/) - Reads the value from the specified analog pin.
- [analogWrite()](https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/) - Writes an analog value (e.g. LED 0-255) to the connected component.
- [delay()](https://www.arduino.cc/reference/en/language/functions/time/delay/) - Adds a specified millisecond pause to the program. (use [delayMicroseconds()](https://www.arduino.cc/reference/en/language/functions/time/delaymicroseconds/) for shorter unit duration)
- [tone()](https://www.arduino.cc/reference/en/language/functions/advanced-io/tone/) - Play the specified frequency (used on buzzer or speaker) until [noTone()](https://www.arduino.cc/reference/en/language/functions/advanced-io/notone/) is called.
- [pulseIn()](https://www.arduino.cc/reference/en/language/functions/advanced-io/pulsein/) - Waits for a HIGH or LOW value on a given pin and returns the duration of pulse.

## Libraries used

- [pitches](https://gist.github.com/mikeputnam/2820675) - contains common notes used for playing melodies.
- [Servo](https://www.arduino.cc/reference/en/libraries/servo/) - provides methods to control servo motors.
- [Keypad](https://playground.arduino.cc/Code/Keypad/) - adds methods for matrix-style keyboards.

## Program List

1. [RGB Fade](./RGB_Fade/) - Change RGB LED from red to green to blue in a loop with a delay.
2. [LED 1 Button](./LED_1Button/) - Turn LED on or off using a button.
3. [LED 2 Buttons](./LED_2Buttons/) - Turn LED on or off using two separate buttons.
4. [Active Buzzer](./Active_Buzzer/) - Use an active buzzer to play Twinkle, twinkle, little star. Here is a list of other melodies that can be played: [Songs for Arduino](https://dragaosemchama.com/en/2019/02/songs-for-arduino/).
5. [Passive Buzzer](./Passive_Buzzer/) - Play _do re me fa so la ti do_ using a passive buzzer.
6. [Tilt Ball Switch](./Tilt_Ball_Switch/) - Turn an LED on or off based on the orientation of the tilt ball switch.
7. [Servo Motor](./Servo_Motor/) - Rotate a servo motor in sweep motion and turn on LEDs depending on the angle.
8. [Ultrasonic Sensor](./Ultrasonic_Sensor/) - Get an untrasonic sensor to measure distance from an object without using libraries. Many libraries can be found for the same when looking for "HC-SR04".
9. [4x4 Keypad](./4x4_Keypad/) - Register input from a 4x4 keypad using the [Keypad](https://playground.arduino.cc/Code/Keypad/) library.
10. [Analog Joystick](./Analog_Joystick/) - Register coordinates and button press input from an analog joystick.
