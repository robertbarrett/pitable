#include <Keyboard.h>

void setup() {
  
Keyboard.begin();

//Joystick and connections
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
  
// Check the switches:
int buttonStateA0 = digitalRead(A0);
int buttonStateA1 = digitalRead(A1);
int buttonStateA2 = digitalRead(A2);
int buttonStateA3 = digitalRead(A3);
int buttonStateA4 = digitalRead(A4);
int buttonStateA5 = digitalRead(A5);
int buttonState0 = digitalRead(0);
int buttonState1 = digitalRead(1);
int buttonState2 = digitalRead(2);
int buttonState3 = digitalRead(3);
int buttonState4 = digitalRead(4);
int buttonState5 = digitalRead(5);
int buttonState6 = digitalRead(6);
int buttonState7 = digitalRead(7);
int buttonState8 = digitalRead(8);
int buttonState9 = digitalRead(9);
int buttonState10 = digitalRead(10);
int buttonState11 = digitalRead(11);
int buttonState12 = digitalRead(12);
int buttonState13 = digitalRead(13);

if (buttonStateA0 == LOW) {
  Keyboard.print("A0");
  delay(500);
}
if (buttonStateA1 == LOW) {
  Keyboard.print("A1");
  delay(500);
}
if (buttonStateA2 == LOW) {
  Keyboard.print("A2");
  delay(500);
}
if (buttonStateA3 == LOW) {
  Keyboard.print("A3");
  delay(500);
}
if (buttonStateA4 == LOW) {
  Keyboard.print("A4");
  delay(500);
}
if (buttonStateA5 == LOW) {
  Keyboard.print("A5");
  delay(500);
}
if (buttonState0 == LOW) {
  Keyboard.print("0");
  delay(500);
}
if (buttonState1 == LOW) {
  Keyboard.print("1");
  delay(500);
}
if (buttonState2 == LOW) {
  Keyboard.print("2");
  delay(500);
}
if (buttonState3 == LOW) {
  Keyboard.print("3");
  delay(500);
}
if (buttonState4 == LOW) {
  Keyboard.print("4");
  delay(500);
}
if (buttonState5 == LOW) {
  Keyboard.print("5");
  delay(500);
}
if (buttonState6 == LOW) {
  Keyboard.print("6");
  delay(500);
}
if (buttonState7 == LOW) {
  Keyboard.print("7");
  delay(500);
}
if (buttonState8 == LOW) {
  Keyboard.print("8");
  delay(500);
}
if (buttonState9 == LOW) {
  Keyboard.print("9");
  delay(500);
}
if (buttonState10 == LOW) {
  Keyboard.print("10");
  delay(500);
}
if (buttonState11 == LOW) {
  Keyboard.print("11");
  delay(500);
}
if (buttonState12 == LOW) {
  Keyboard.print("12");
  delay(500);
}
if (buttonState13 == LOW) {
  Keyboard.print("13");
  delay(500);
}




}
