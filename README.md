# Arduino Programs

Programs for basic Arduino sketches along with the circuit images.

- Programs are well documented to be self explanatory.
- Pin numbers are mentioned in the code itself for the inputs and outputs.

## Basic Arduino functions and their uses

- [pinMode()](https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/) - Sets the given pin component to INPUT, OUTPUT or INPUT_PULLUP (high by default).
- [digitalRead()](https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/) - Returns HIGH or LOW based on the component connected to the corresponding pin being ON or OFF respectively.
- [digitalWrite()](https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/) - Sets the value of the connected component on the given pin to HIGH ot LOW as specified.
- [analogRead()](https://www.arduino.cc/reference/en/language/functions/analog-io/analogread/) - Reads the value from the specified analog pin.
- [delay()](https://www.arduino.cc/reference/en/language/functions/time/delay/) - Adds a specified millisecond pause to the program.
- [tone()](https://www.arduino.cc/reference/en/language/functions/advanced-io/tone/) - Play the specified frequency (used on buzzer or speaker) until [noTone()](https://www.arduino.cc/reference/en/language/functions/advanced-io/notone/) is called.

## Program List

1. [RGB Fade](https://github.com/SamDaQueen/Arduino_Programs/tree/main/RGB_Fade) - Change RGB LED from red to green to blue in a loop with a delay.
2. [LED 1 Button](https://github.com/SamDaQueen/Arduino_Programs/tree/main/LED_1Button) - Turn LED on or off using a button.
3. [LED 2 Buttons](https://github.com/SamDaQueen/Arduino_Programs/tree/main/LED_2Buttons) - Turn LED on or off using two separate buttons.
4. [Active Buzzer](https://github.com/SamDaQueen/Arduino_Programs/tree/main/Active_Buzzer) - Use an active buzzer to play Twinkle, twinkle, little star. Here is a list of other melodies that can be played: [Songs for Arduino](https://dragaosemchama.com/en/2019/02/songs-for-arduino/)
