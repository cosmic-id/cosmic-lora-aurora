# Cosmic LoRa Aurora

## Overview

[Cosmic LoRa Aurora](https://www.tokopedia.com/cosmic-iot/lora-aurora-esp32-esp-32-arduino-915-mhz-915mhz-sma-4-8dbi-8ba58) is an High-End Development Board that will fasten your time to market or ease your DIY project. It is armed with an ESP32 which makes it an AI-ready device and so recommended as an Edge Device. The Cosmic LoRa Aurora dev board has three power source inputs -USB, LiPo Battery, DC Jack- which can run those options simultaneously. The board features smart power switching, which can automatically prioritize either USB, LiPo and DC Jack. So you can charge the LiPo while running the board thru USB or Solar-powered DC Jack. By default, the ESP32 has been included with WiFi and Bluetooth Low Energy. That connectivity even extended with the presence of the LoRa(WAN) module of [RFM95W](https://cdn.sparkfun.com/assets/learn_tutorials/8/0/4/RFM95_96_97_98W.pdf). LoRa(WAN) has a good reputation for low power consumption, complementing the sleep mode of ESP32, making this board even more useful in a low power ecosystem. In conclusion, this is the most go-to board for your IoT applications.

> Cosmic are universe so our products name are based on universe.

[Dokumentasi dalam bahasa Indonesia](id/)

## Table of Content

* [Product Features](#product-features)
* [Technical Spesification](#technical-spesification)
* [Documentation](#documentation)
  * [Pinout Diagram](#pinout-diagram)
  * [LoRaWAN Chip Interfacing](#lorawan-chip-interfacing)
  * [On-Board Peripherals Interfacing](#on-board-peripherals-interfacing)
  * [Examples](#examples)
* [FAQ](#FAQ)

## Product Features

* LoRa/LoRaWAN Connectivity
* WiFi & BLE Connectivity
* Inertial Measurement Unit (IMU) Sensor: 3-Axis Accelerometer & 3-Axis Gyroscope
* Environment Sensor: Temperature & Humidity
* Altitude Sensor: Atmospheric Pressure
* ESP32 Ready for AI
* RGB LED
* On-Board Battery Charger & Voltage Level Sensor

## Technical Spesification

| Features                         | V2            | V3           | 
| -------------------------------- | ------------- |--------------|
| **Microcontroller**                  | ESP32         | ESP32        |
| **LoRa(WAN) Chip**                   | RFM95W        | RFM95W       |
| **LoRa(WAN) Base Freq**              | 915 MHz       | 915 MHz      |
| **LoRa(WAN) Freq Range**             | 902-928 MHz   | 902-928 MHz  |
| **Antenna Impedance**                | 50 Ohm        | 50 Ohm       |
| **IMU Sensor**                       | ❗MPU6050❗       | ❗LSM6DS3TRC❗   |
| **Environment & Altitude Sensor**    | BME280        | BME280       |
| **RGB LED**                          | WS2812B       | WS2812B      |   

## Documentation

### Pinout Diagram

> Click image for higher resolution

[![Cosmic LoRa Aurora Pinout](assets/pin-diagram.webp)](assets/pin-diagram.jpg "Cosmic LoRa Aurora Pinout")

### LoRa(WAN) Chip - ESP32 Interfacing

| RFM95W | V4 | V1 | V2 | V3 | 
|--------|----|----|----|----|
| MOSI   | 23 | 23 | 23 | 23 | 
| MISO   | 19 | 19 | 19 | 19 |
| SCK    | 18 | 18 | 18 | 18 |
| NSS    | 13 | 2  | 15 | 13 |
| RST    | 25 | 13 | 0  | 16 |
| DIO0   | 27 | 14 | 27 | 27 |
| DIO1   | 32 | 12 | 2  | 17  |
| ENABLE | 33 Active LOW | 32 Active Low | 32 Active High | 15 Active Low | 

### On-Board Peripherals - ESP32 Interfacing

| Peripheral                     | V4 | V3 | V2 | 
|--------------------------------|----|----|----|
| Environment Sensor BME280 SDA  | 21 | 21 | 21 | 
| Environment Sensor BME280 SCL  | 22 | 22 | 22 |
| IMU MPU6500 SDA                | 21 | X  | X  |
| IMU MPU6500 SCL                | 22 | X  | X  |
| IMU LSM6DS3TRC SDA             | X  | 21 | X  |
| IMU LSM6DS3TRC SCL             | X  | 22 | X  |
| IMU MPU6050 SDA                | X  | X  | 21 |
| IMU MPU6050 SCL                | X  | X  | 22 | 
| Batt Level Sensor (Analog)     | X  | 34 | 34 |
| Batt Level Sensor MAX17048 SDA | 21 | X  | X  |
| Batt Level Sensor MAX17048 SCL | 22 | X  | X  |
| RGB LED WS2812                 | 2  | 26 | 33 |
| LED                            | X  | 2  | X  |

### Examples

* [LoRa Point-to-Point](LoRa-P2P.md)
* [LoRaWAN ANTARES](LoRaWAN-ANTARES.md)
* [LoRaWAN The Things Network](LoRaWAN-TTN.md)
* [Blinking LED (avail on v4 only)](examples/aurora-v4-blinking-led/aurora-v4-blinking-led.ino)
* [Blinking LED (avail on v3 only)](examples/aurora-v3-led/aurora-v3-led.ino)
* [RGB LED Random Color (avail on v4 only)](examples/aurora-v4-rgb-led/aurora-v4-rgb-led.ino)
* [RGB LED Random Color (avail on v2, v3 only)](examples/aurora-v2-v3-rgb-led/aurora-v2-v3-rgb-led.ino)
* [BME280 (avail on v2, v3 only)](examples/aurora-v2-v3-bme280/aurora-v2-v3-bme280.ino)
* [IMU MPU6050 (avail on v2 only)](examples/aurora-v2-mpu6050/aurora-v2-mpu6050.ino)
* [IMU LSM6DS3TRC (avail on v3 only)](examples/aurora-v3-lsm6ds3trc/aurora-v3-lsm6ds3trc.ino)
* [IMU MPU6500 (avail on v4 only)](examples/aurora-v4-mpu6500/aurora-v4-mpu6500.ino)

## FAQ

On-going

## Contact Us

Any issue of the tutorial or need IoT solutions? Please [contact us](https://wa.me/6282117421332)