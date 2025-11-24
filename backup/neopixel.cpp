#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define RGB_LED_PIN 38
#define NUM_LEDS 1

Adafruit_NeoPixel pixel(NUM_LEDS, RGB_LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixel.begin();
  pixel.setBrightness(50);  // 0-255, keep low to avoid eye strain
}

void loop() {
  // Red
  pixel.setPixelColor(0, pixel.Color(255, 0, 0));
  pixel.show();
  delay(1000);

  // Green
  pixel.setPixelColor(0, pixel.Color(0, 255, 0));
  pixel.show();
  delay(1000);

  // Blue
  pixel.setPixelColor(0, pixel.Color(0, 0, 255));
  pixel.show();
  delay(1000);

  // Off
  pixel.setPixelColor(0, pixel.Color(0, 0, 0));
  pixel.show();
  delay(1000);
}
