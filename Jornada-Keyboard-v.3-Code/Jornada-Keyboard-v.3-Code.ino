/*
  Jornada-Keyboard-Code

  This is only a modification of:
  See https://github.com/RasmusB/USB-Keyboard-Adapter


*/

#include "board.h"
#include "Keyboard.h"
#include "JornadaKeymapUSB.h"

#define DEBUG_ENABLED false
#define KEYBOARD_ENABLED true

// Max number of scans/second
#define MAX_SCAN_RATE 1000

int keypressArrayCurrent [NROWS] [NCOLS];
int keypressArrayPrevious [NROWS] [NCOLS];

unsigned long previousTime;
unsigned int minDelay;

void setup() {

  previousTime = 0;
  minDelay = 1000 / MAX_SCAN_RATE;


  if (KEYBOARD_ENABLED) Keyboard.begin();

  pinMode(LED_BUILTIN, OUTPUT);

  // Scanlines in high-Z (inactive) mode
  // Pin state should be initialized to LOW
  for (int i = 0; i < NROWS; i++) {
    pinMode(Rows[i], INPUT);
  }

  // Columns as inputs
  // Internal pull-up enabled
  for (int i = 0; i < NCOLS; i++) {
    pinMode(Cols[i], INPUT);
  }
}

void loop() {

  if ( (millis() - previousTime) >= minDelay ) {

    // Scan the keyboard matrix
    int nKeysPressed = scanKeyboard(keypressArrayCurrent);

    //digitalWrite(LED_BUILTIN, keypressArrayCurrent[7][7]);

    if (nKeysPressed == 0) {
      digitalWrite(LED_BUILTIN, LOW);
    } else {
      digitalWrite(LED_BUILTIN, HIGH);
    }



    // Send the keypresses over USB
    if (KEYBOARD_ENABLED) {
      sendKeys(keypressArrayCurrent, keypressArrayPrevious);
    }

    // Remember which keys were pressed so we can release them later
    memcpy(keypressArrayPrevious, keypressArrayCurrent, sizeof(keypressArrayCurrent));

    previousTime = millis();
  }
}

int scanKeyboard ( int keyArray [] [NCOLS] ) {

  int nKeysPressed = 0;

  for (int row = 0; row < NROWS; row++) {

    // Select a pin to sink current
    pinMode(Rows[row], OUTPUT);
    digitalWrite(Rows[row], LOW);

    for (int col = 0; col < NCOLS; col++) {
      pinMode(Cols[col], INPUT_PULLUP);

      // Only scan mapped buttons
      if (keyScancode[row][col] != 0) {

        // =1 for every button NOT pressed (pull-ups enabled)
        // =0 for every button PRESSED (signal shorted to row pin)
        // This value is inverted when saved

        if ( digitalRead(Cols[col]) != HIGH ) {
          keyArray [row] [col] = 1;
          nKeysPressed++;

        } else {
          keyArray [row] [col] = 0;
        }
      }
      
      // Disable pull-up
      pinMode(Cols[col], INPUT);
      
    }

    // Return pin to high-Z (inactive) mode

    pinMode(Rows[row], INPUT);

  }

  return nKeysPressed;
}

void sendKeys ( int pressedArray [] [NCOLS], int previousArray [] [NCOLS] ) {

  for ( int row = 0; row < NROWS; row++ ) {
    for ( int col = 0; col < NCOLS; col++ ) {

      // Only scan mapped buttons
      if (keyScancode[row][col] != 0) {

        // If a new button is pressed
        if ( pressedArray[row][col] > previousArray[row][col] ) {
          {
            // "Normal" keypress, just send as is
            Keyboard.press(keyScancode[row][col]);
          }


          // This handles the release of keys
        } else if ( pressedArray[row][col] < previousArray[row][col] ) {
          {
            Keyboard.release(keyScancode[row][col]);
          }

        }
      }
    }
  }

}
