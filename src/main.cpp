#include <Arduino.h>

// Traffic light LED pins - adjust to match your wiring
#define RED_PIN    15
#define YELLOW_PIN 16
#define GREEN_PIN  17

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);

  // Start with all LEDs off
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
}

void loop() {
  // Green - Go
  digitalWrite(GREEN_PIN, HIGH);
  delay(1000);
  digitalWrite(GREEN_PIN, LOW);

  // Yellow - Caution
  digitalWrite(YELLOW_PIN, HIGH);
  delay(500);
  digitalWrite(YELLOW_PIN, LOW);

  // Red - Stop
  digitalWrite(RED_PIN, HIGH);
  delay(2000);
  digitalWrite(RED_PIN, LOW);
}