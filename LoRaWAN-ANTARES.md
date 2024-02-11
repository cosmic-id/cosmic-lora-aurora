# LoRaWAN ANTARES

## Topology

On-going

## Requirements

* 1x [Cosmic LoRa Aurora](https://www.tokopedia.com/cosmic-iot/lora-aurora-esp32-esp-32-arduino-915-mhz-915mhz-sma-4-8dbi-8ba58)
* 1x Micro USB Type B Cable for Aurora V1 or 1x USB Type C Cable for Aurora V2
* [Arduino IDE](https://www.arduino.cc/en/software)

## Prerequisite

* [Install CH340 Driver](https://sparks.gogo.co.nz/ch340.html)
* Install ANTARES Library
  1. [Download Library](https://antares.id/assets/files/Arduino-lora-id-AS923-2.zip)
  2. Import library : Sketch &#8594; Include Library &#8594; Add .ZIP Library...
  3. Load your downloaded library. Confirm.
* Having an [ANTARES account](https://console.antares.id/register)
* Check [Coverage of ANTARES](https://www.telkomiot.com/coverage) in your testing location

## Source Codes

* [LoRaWAN ANTARES code for Aurora V1](examples/aurora-v1-antares-send-class-C-ABP/aurora-v1-antares-send-class-C-ABP.ino)
* [LoRaWAN ANTARES code for Aurora V2](examples/aurora-v2-antares-send-class-C-ABP/aurora-v2-antares-send-class-C-ABP.ino)

## Step by Step

1. Plug the Cosmic LoRa Aurora boards to your Laptop.
2. COM Port should be activated. (If not activated? [Install CH340 driver](https://sparks.gogo.co.nz/ch340.html)).
3. Setup in Arduino IDE : Pick the appropriate board : Tools &#8594; Board &#8594; ESP32 (If not listed? [Install ESP32 Board](https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/))
4. Add a device and set lora for it in your ANTARES account.
5. Load codes below based on your Cosmic LoRa Aurora Version to Arduino IDE.
    * [LoRaWAN ANTARES code for Aurora V1](examples/aurora-v1-antares-send-class-C-ABP/aurora-v1-antares-send-class-C-ABP.ino)
    * [LoRaWAN ANTARES code for Aurora V2](examples/aurora-v2-antares-send-class-C-ABP/aurora-v2-antares-send-class-C-ABP.ino)
6. Modify the code using your access key & registered device address.
7. Click Verify then Click Upload to Board. (Error compile? [Install ANTARES Library](#prerequisite))
8. Open Serial Monitor of Arduino IDE. Set the Baud Rate as stated in Serial.begin of the LoRaWAN ANTARES code. Some debug info should be appeared stated it transmits some data to ANTARES.
9. Check your ANTARES Console. Some data must be shown. YEEAAYY Congrattzz!! You are sending LoRaWAN to ANTARES.
