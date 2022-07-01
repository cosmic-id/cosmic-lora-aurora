# LoRa Point to Point

## Topology

![LoRa Point to Point](assets/point-to-point.png "LoRa Point-to-Point")

## Requirements

* 2x [Cosmic LoRa Aurora](https://www.tokopedia.com/cosmic-iot/lora-esp32-esp-32-arduino-915-mhz-915mhz-antenna-lipo-charger)
* 2x Micro USB Type B Cable
* [Arduino IDE](https://www.arduino.cc/en/software)

## Source Codes

* [Transmitter](examples/LoRa_P2P_Transmitter/LoRa_P2P_Transmitter.ino)
* [Receiver](examples/LoRa_P2P_Receiver/LoRa_P2P_Receiver.ino)

## Step by Step

1. Plug the Cosmic LoRa Pulse boards to your Laptop.
2. COM Port should be activated. ([If not? Install driver](https://sparks.gogo.co.nz/ch340.html)).
3. Setup in Arduino IDE :
   * Pick the appropriate board : Tools -> Board -> Arduino Pro or Pro Mini
   * Pick the appropriate processor : Tools -> Board -> ATMega 328P (3.3V 8 MHz)
4. Setup Transmitter
   * Load [Transmitter code](examples/LoRa_P2P_Transmitter/LoRa_P2P_Transmitter.ino) to Arduino IDE.
   * Click Verify then Click Upload to Board.
   * Open Serial Monitor of Arduino IDE. Set the Baud Rate as stated in Serial.begin of the transmitter code. Some debug info should be appeared stated it transmits some data.
5. Setup Receiver
   * Load [Receiver code](examples/LoRa_P2P_Receiver/LoRa_P2P_Receiver.ino) to Arduino IDE.
   * Click Verify then Click Upload to Board.
   * Open Serial Monitor of Arduino IDE. Set the Baud Rate as stated in Serial.begin of the receiver code. Some debug info should be appeared stated it recieves some data.
6. YEEAAYY Congrattzz!! You are sending LoRa Point-to-Point.
