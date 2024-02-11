# Cosmic LoRa Aurora

## Overview

Cosmic LoRa Aurora is an High-End Development Board that will fasten your time to market or ease your DIY project. It is armed with an ESP32 which makes it an AI-ready device and so recommended as an Edge Device. The Cosmic LoRa Aurora dev board has three power source inputs -USB, LiPo Battery, DC Jack- which can run those options simultaneously. The board features smart power switching, which can automatically prioritize either USB, LiPo and DC Jack. So you can charge the LiPo while running the board thru USB or Solar-powered DC Jack. By default, the ESP32 has been included with WiFi and Bluetooth Low Energy. That connectivity even extended with the presence of the LoRa(WAN) module of [RFM95W](https://cdn.sparkfun.com/assets/learn_tutorials/8/0/4/RFM95_96_97_98W.pdf). LoRa(WAN) has a good reputation for low power consumption, complementing the sleep mode of ESP32, making this board even more useful in a low power ecosystem. In conclusion, this is the most go-to board for your IoT applications.

> Cosmic are universe so our products name are based on universe.

[Dokumentasi dalam bahasa Indonesia](id/)

## Table of Content

* [Technical Spesification](#technical-spesification)
* [Documentation](#documentation)
  * [Pinout Diagram](#pinout-diagram)
  * [LoRaWAN Chip Interfacing](#lorawan-chip-interfacing)
  * [Examples](#examples)
* [FAQ](#FAQ)

## Technical Spesification

| Feature                 |                    Value                |  
| ----------------------- | --------------------------------------- |
| Microcontroller         |                    ESP32          |
| LoRa(WAN) Chip          |                    RFM95W               |
| LoRa(WAN) Base Freq     |                    915 MHz              |
| LoRa(WAN) Freq Range    |                    902-928 MHz          |
| Antenna Impedance       |                    50 Ohm               |

## Documentation

### Pinout Diagram

> Click image for higher resolution

[![Cosmic LoRa Aurora Pinout](assets/pin-diagram.webp)](assets/pin-diagram.jpg "Cosmic LoRa Aurora Pinout")

### LoRa(WAN) Chip Interfacing

| RFM95W | V1 | V2 |
|--------|----|----|
| MOSI   | 23 | 23 | 
| MISO   | 19 | 19 |
| SCK    | 18 | 18 |
| NSS    | 2  | 15 |
| RST    | 13 | 0  |
| DIO0   | 14 | 27 |
| DIO1   | 12 | 2  |
| ENABLE | 32 Active Low | 32 Active High| 

### Examples

* [LoRa Point-to-Point](LoRa-P2P.md)
* [LoRaWAN ANTARES](LoRaWAN-ANTARES.md)
* [RGB (avail on v2 only)](examples/aurora-v2-rgb-led/aurora-v2-rgb-led.ino)
* [BME280 (avail on v2 only)](examples/aurora-v2-bme280/aurora-v2-bme280.ino)
* [MPU6050 (avail on v2 only)](examples/aurora-v2-mpu6050/aurora-v2-mpu6050.ino)

## FAQ

On-going

## Contact Us

Any issue of the tutorial or need IoT solutions? Please [contact us](https://wa.me/6282117421332)