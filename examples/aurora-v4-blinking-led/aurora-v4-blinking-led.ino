// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// Released under the GPLv3 license to match the rest of the
// Adafruit NeoPixel library
#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN        2 // On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 1 // Popular NeoPixel ring size

// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// strips you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 1000 // Time (in milliseconds) to pause between pixels

void setup() {
  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
}

void loop() {
  // Put as the count starts from 0 and only has 1 RGB LED
  // Turn On white the RGB 
  pixels.setPixelColor(0, pixels.Color(255,255,255));
  pixels.show();
  delay(DELAYVAL);

  // Put as the count starts from 0 and only has 1 RGB LED
  // Turn Off the RGB
  pixels.setPixelColor(0, pixels.Color(0,0,0));
  pixels.show(); // Set all pixel colors to 'off'
  delay(DELAYVAL);
}