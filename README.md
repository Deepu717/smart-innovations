# Smart Innovations: Open-Source Embedded Safety & IoT Suite

**Smart Innovations** is an open-source hardware firmware repository and modular C/C++ reference library for Arduino and ESP microcontrollers. It provides reliable, low-latency embedded code for environmental hazard detection, automated irrigation, safety alarms, and real-time LCD telemetry.

## 🚀 Key Modules Included

* **`/modules/lpg-gas-detector`** – Real-time LPG and combustible gas leakage monitoring with threshold calibration and automated alarm triggering.
* **`/modules/smoke-sensor`** – Air quality and smoke density detection firmware designed for early fire-hazard warning systems.
* **`/modules/self-watering-plant`** – Automated soil moisture sensing and relay-driven irrigation control system for smart agriculture.
* **`/modules/lcd-telemetry`** – Standardized display driver templates for real-time sensor readout and system status diagnostics.

## 🛠️ Hardware Compatibility
* **Microcontrollers:** Arduino Uno, Nano, Mega, ESP8266, ESP32
* **Sensors Supported:** MQ-2, MQ-5, MQ-6, MQ-135 Gas/Smoke Sensors, Capacitive/Resistive Soil Moisture Sensors
* **Interfaces:** 16x2 I2C/Parallel LCD, 5V Relay Modules, Submersible Pumps, Piezo Buzzers

## 📦 Getting Started
1. Clone this repository or download the specific module folder from `/modules/`.
2. Open the `.ino` firmware file in the **Arduino IDE** or **PlatformIO**.
3. Verify pinout definitions at the top of the sketch to match your hardware wiring.
4. Compile and flash to your microcontroller.

## 🗺️ Maintenance & Roadmap
* Refactoring standalone sensor sketches into non-blocking C++ classes.
* Adding automated serial diagnostic testing and watchdog timer safety recovery.
* Expanding support for Wi-Fi/MQTT cloud alerts on ESP32 boards.

## 📄 License
Open-source and available for educational, maker, and safety prototyping use. Maintained by **Deekshith Reddy** (@Deepu717).
