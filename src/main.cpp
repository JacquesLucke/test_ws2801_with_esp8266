#include <Arduino.h>
#include <FastLED.h>

constexpr int pixel_count = 1;
constexpr int data_pin = D2;
constexpr int clock_pin = D1;

CRGB pixel_colors[pixel_count];

void setup() {
  Serial.begin(9600);
  FastLED.addLeds<WS2801, data_pin, clock_pin, RGB>(pixel_colors, pixel_count);
}

void loop() {
  Serial.println("loop");
  pixel_colors[0] = CRGB(255, 255, 255);
  FastLED.show();
  delay(1000);

  pixel_colors[0] = CRGB(255, 0, 0);
  FastLED.show();
  delay(1000);

  pixel_colors[0] = CRGB(0, 255, 0);
  FastLED.show();
  delay(1000);

  pixel_colors[0] = CRGB(0, 0, 255);
  FastLED.show();
  delay(1000);

  pixel_colors[0] = CRGB(0, 0, 0);
  FastLED.show();
  delay(1000);
}
