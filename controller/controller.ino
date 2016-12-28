// Program used to test the Dual Simple USB Joystick object 
// on the Arduino Leonardo or Arduino Micro.
//
// Matthew Heironimus
// 2015-04-05
//------------------------------------------------------------

#include "Joystick.h"

// Using this library https://github.com/MHeironimus/ArduinoJoystickLibrary

Joystick_ Joystick;

int startTable = 5;
int startPad = 4;

int coinTable = 4;
int coinPad = 5;

int aTable = 9;
int aPad = 0;

int bTable = 8;
int bPad = 1;

int xTable = 7;
int xPad = 2;

int yTable = 6;
int yPad = 3;

int upTable = 12;

int downTable = 10;

int leftTable = 11;

int rightTable = 13;




void setup() {
  Joystick.begin(true);
  
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  pinMode(A4, INPUT_PULLUP);
  pinMode(A5, INPUT_PULLUP);
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
}

void loop() {

  if (digitalRead(startTable) == 0) //start
    Joystick.pressButton(startPad);
  else
    Joystick.releaseButton(startPad);

  if (digitalRead(coinTable) == 0) //coin
    Joystick.pressButton(coinPad);
  else
    Joystick.releaseButton(coinPad);

 
  if (digitalRead(aTable) == 0) // a
    Joystick.pressButton(aPad);
  else
    Joystick.releaseButton(aPad);
    
  if (digitalRead(bTable) == 0) // b
    Joystick.pressButton(bPad);
  else
    Joystick.releaseButton(bPad);
    
  if (digitalRead(xTable) == 0) // x
    Joystick.pressButton(xPad);
  else
    Joystick.releaseButton(xPad);
    
  if (digitalRead(yTable) == 0) // y
    Joystick.pressButton(yPad);
  else
    Joystick.releaseButton(yPad);

  if (digitalRead(upTable) == 0) // u
    Joystick.setYAxis(-127);
  else if (digitalRead(downTable) == 0) // d
    Joystick.setYAxis(127);
  else
    Joystick.setYAxis(0);  

  if (digitalRead(leftTable) == 0) // l
    Joystick.setXAxis(-127);
  else if (digitalRead(rightTable) == 0) // r
    Joystick.setXAxis(127);
  else
    Joystick.setXAxis(0);  


}
