/*********
  Modified from the examples of the Arduino LoRa library
  More resources: https://github.com/cosmic-id/
*********/

#include <SPI.h>
#include <LoRa.h>

//define the pins used by the transceiver module
#define LORA_AURORA_V4_NSS 13
#define LORA_AURORA_V4_RST 25
#define LORA_AURORA_V4_DIO0 27
#define LORA_AURORA_V4_EN 33

int counter = 0;

void setup() {
  // Initiate the LoRa Enable pin
  pinMode(LORA_AURORA_V4_EN, OUTPUT);
  // LoRa chip is Active LOW
  // Please set HIGH to TURN OFF
  digitalWrite(LORA_AURORA_V4_EN, LOW);

  //initialize Serial Monitor
  Serial.begin(115200);
  while (!Serial);
  Serial.println("LoRa Sender");

  //setup LoRa transceiver module
  LoRa.setPins(LORA_AURORA_V4_NSS, LORA_AURORA_V4_RST, LORA_AURORA_V4_DIO0);
  
  //replace the LoRa.begin(---E-) argument with your location's frequency 
  //433E6 for Asia
  //866E6 for Europe
  //915E6 for North America
  while (!LoRa.begin(920E6)) {
    Serial.println(".");
    delay(500);
  }
  
  // Change sync word (0xF3) to match the receiver
  // The sync word assures you don't get LoRa messages from other LoRa transceivers
  // ranges from 0-0xFF
  LoRa.setSyncWord(0xF3);
  Serial.println("LoRa Initializing OK!");
}

void loop() {
  Serial.print("Sending packet: ");
  Serial.println(counter);

  //Send LoRa packet to receiver
  LoRa.beginPacket();
  LoRa.print("hello ");
  LoRa.print(counter);
  LoRa.endPacket();

  counter++;

  delay(10000);
}