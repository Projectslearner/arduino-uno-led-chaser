/*
    Project name : Arduino Uno LED Chaser
    Modified Date: 08-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-led-chaser
*/

// Define the LED pins
const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
const int numLeds = 10; // Number of LEDs

void setup() {
  // Initialize all the LED pins as output
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Turn on each LED in sequence
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);  // Turn on LED
    delay(500);                      // Wait for 100 milliseconds
    digitalWrite(ledPins[i], LOW);   // Turn off LED
  }
    for (int i = 10; i > 0; i--) {
    digitalWrite(ledPins[i], HIGH);  // Turn on LED
    delay(500);                      // Wait for 100 milliseconds
    digitalWrite(ledPins[i], LOW);   // Turn off LED
  }
}
