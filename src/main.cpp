//#include <Arduino.h>
#include "classMatrixDisplay.h"
#include "classGame.h"
//#include "classSnakeNode.h"

uint8_t display_array[8][8] = {
    // Initial S display array
    {1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 1, 1},
    {1, 1, 0, 0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 0, 1, 1},
    {1, 0, 0, 0, 0, 1, 1, 1},
    {1, 1, 0, 0, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1}

    // Various initial arrays to check performance - Comment out all arrays except test

    /*{1, 1, 1, 1, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0}*/

    /*{0, 1, 0, 1, 0, 1, 0, 1},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {0, 1, 0, 1, 0, 1, 0, 1},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {0, 1, 0, 1, 0, 1, 0, 1},
    {1, 0, 1, 0, 1, 0, 1, 0},
    {0, 1, 0, 1, 0, 1, 0, 1},
    {1, 0, 1, 0, 1, 0, 1, 0},*/
  };

// Instantiate Matrix Display array
uint8_t rowPinArray[8] = {2, 3, 4, 5, 6, 7, 8, 9};

// Instantiate snake object
Game *game = new Game(rowPinArray, 10);

void setup() {
  // Copy in inital S array
  //matrixDisp.updateDisplayArray(display_array);
  //delay(2000);
}

void loop() {
  game->matrixDisp->refreshDisplay();                    // Constantly refresh display array
}