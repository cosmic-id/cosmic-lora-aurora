/*********
  Modified from the examples of the Arduino LoRa library
  More resources: https://github.com/cosmic-id/
*********/

#include <SPI.h>
#include <LoRa.h>

//define the pins used by the transceiver module
#define LORA_AURORA_V2_NSS 13
#define LORA_AURORA_V2_RST 16
#define LORA_AURORA_V2_DIO0 27
#define LORA_AURORA_V2_EN 15

#define LORA_TX_POWER 20
#define LORA_SPREADING_FACTOR 12

void setup() {
  // Initiate the LoRa Enable pin
  pinMode(LORA_AURORA_V2_EN, OUTPUT);
  // LoRa chip is Active Low
  digitalWrite(LORA_AURORA_V2_EN, LOW);
  
  //initialize Serial Monitor
  Serial.begin(115200);
  while (!Serial);
  Serial.println("LoRa Receiver");

  //setup LoRa transceiver module
  LoRa.setPins(LORA_AURORA_V2_NSS, LORA_AURORA_V2_RST, LORA_AURORA_V2_DIO0);
  
  //replace the LoRa.begin(---E-) argument with your location's frequency 
  //433E6 for Asia
  //866E6 for Europe
  //915E6 for North America
  while (!LoRa.begin(920E6)) {
    Serial.println(".");
    delay(500);
  }

  //LoRa.setTxPower(LORA_TX_POWER);
  //LoRa.setSpreadingFactor(LORA_SPREADING_FACTOR);
  
   // Change sync word (0xF3) to match the receiver
  // The sync word assures you don't get LoRa messages from other LoRa transceivers
  // ranges from 0-0xFF
  LoRa.setSyncWord(0xF3);
  Serial.println("LoRa Initializing OK!");
}

void loop() {
  // try to parse packet
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    // received a packet
    Serial.print("Received packet '");

    // read packet
    while (LoRa.available()) {
      String LoRaData = LoRa.readString();
      Serial.print(LoRaData); 
    }

    // print RSSI of packet
    Serial.print("' with RSSI ");
    Serial.println(LoRa.packetRssi());
  }
}
