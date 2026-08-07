# 🌦️ ESP32-S3 4-Layer Weather Station Board

A 4-layer ESP32-S3 development board built as a standalone weather station — combining a Wi-Fi/BLE MCU, a TFT display, and a set of environmental sensors (temperature/humidity, barometric pressure, and ambient light/UV) into a single self-contained PCB, designed in KiCad.

![KiCad](https://img.shields.io/badge/Made%20with-KiCad%2010.0.0-314CB0?style=for-the-badge&logo=kicad&logoColor=white)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)
![PRs](https://img.shields.io/badge/PRs-Welcome-blue?style=for-the-badge)

---

## 📋 Specifications

| Property | Value |
|---|---|
| **MCU** | ESP32-S3-WROOM-1 |
| **PCB Layers** | 4 |
| **Software** | KiCad 10.0.0 |
| **Board Size** | 39.9 × 58.5 mm |
| **Power Input** | USB-C |
| **Regulator** | AMS1117-3.3 (3.3V) |
| **Display** | 8-pin TFT LCD header |
| **Sensors** | DHT11, BMP280, SI1145 |
| **Interfaces** | UART, SPI (display), I²C (sensors), 4× buttons |

---

## 📖 Project Overview

**Purpose**
This repository contains the full KiCad design (schematic, PCB layout, and fabrication outputs) for a 4-layer ESP32-S3 weather station board. It's built around the `ESP32-S3-WROOM-1` module and integrates a TFT display, temperature/humidity sensing, barometric pressure sensing, and ambient light sensing on a single compact board, powered over USB-C.

**Real-World Applications**
- A desktop or window-mounted weather/environment display
- A reference design for ESP32-S3 sensor-hub and IoT projects
- A base platform for Wi-Fi-connected environmental data logging
- A teaching aid for multi-layer PCB design and sensor integration

**Target Users**
- Hobbyists and makers building IoT/environmental monitoring projects
- Electronics enthusiasts wanting a fully open, fabricable ESP32-S3 reference design
- Students learning 4-layer PCB layout and sensor-bus (I²C/SPI) design

---

## 📸 Preview

### Schematic
_(image)_

### PCB — Top
_(image)_

### PCB — Bottom
_(image)_

### 3D View
_(image)_

---

## ✨ Features

✅ ESP32-S3-WROOM-1 module — Wi-Fi + BLE, USB OTG
✅ USB-C power/data input (USB 2.0, 14-pin receptacle)
✅ On-board AMS1117-3.3 linear regulator for a clean 3.3V rail
✅ DHT11 temperature & humidity sensor
✅ BMP280 barometric pressure sensor
✅ SI1145 UV/ambient light/proximity sensor
✅ 8-pin TFT LCD header (SPI: DIN, CLK, CS, DC, RST, BL)
✅ SK6812 addressable RGB status LED
✅ 4× tactile push-buttons + reset/boot strapping
✅ ESD protection diodes on USB data lines
✅ 4-layer PCB (F.Cu / In1.Cu / In2.Cu / B.Cu), fully routed with complete Gerber/drill fabrication output

---

## 🛠️ Technologies Used

| Category | Details |
|---|---|
| **EDA Tool** | KiCad 10.0.0 |
| **MCU** | ESP32-S3-WROOM-1 (Wi-Fi/BLE SoC module) |
| **Regulator** | AMS1117-3.3 (SOT-223) |
| **Sensors** | DHT11 (temp/humidity), BMP280 (pressure), SI1145 (light/UV) |
| **Board** | 4-layer, 1.6 mm thickness, ~39.9 mm × 58.5 mm |
| **Manufacturing Output** | Gerber (RS-274X) + Excellon drill files, ready for fab |
| **Version Control** | Git & GitHub |

---

## 📂 Repository Structure

```
ESP32_4Layer/
├── README.md
├── Images/
├── Schematic/
├── PCB/
├── Gerber/
├── BOM/
└── Datasheets/
```

Browse each folder directly on GitHub for the full contents:
- **Schematic/** — `.kicad_sch` source
- **PCB/** — `.kicad_pcb` layout + `.kicad_pro` project file
- **Gerber/** — Gerber (`.gbr`) and drill (`.drl`) fabrication output, plus the `.gbrjob` job file
- **BOM/** — Bill of materials
- **Datasheets/** — Component datasheets (ESP32-S3, sensors, regulator, etc.)
- **Images/** — Schematic, PCB, and 3D renders used in this README

---

## ⚙️ How It Works

1. **Power In** — USB-C (J1) supplies 5V, with ESD protection diodes (D2–D4) on the data and power lines.
2. **Regulation** — The AMS1117-3.3 (U4) steps the 5V input down to a clean, regulated 3.3V rail for the MCU and sensors, with bulk/decoupling capacitors (C2, C4, C5, C7) smoothing the supply.
3. **Core** — The ESP32-S3-WROOM-1 (U1) handles Wi-Fi/BLE connectivity, sensor polling, and driving the display, with decoupling capacitors (C1, C6, C8, C10, C11) and a pull-up on the EN/boot-strapping pins (R6, R7).
4. **Display** — An 8-pin header (J2) breaks out an SPI-driven TFT LCD (DIN, CLK, CS, DC, RST, BL).
5. **Sensing** — The DHT11 (U3) reads temperature/humidity over a single-wire bus with pull-up (R5); the BMP280 (U6) reads barometric pressure over SPI/I²C; the SI1145 (U2) reads ambient light and UV index over I²C, with pull-ups (R2, R3) on the bus.
6. **Status & Input** — An SK6812 addressable RGB LED (D5) and a standard LED (D6, current-limited by R1) give visual status feedback; four push-buttons (SW1–SW4) provide user input/reset/boot control.

---

## 🔍 Bill of Materials (Key Components)

| Ref | Part | Value | Footprint |
|---|---|---|---|
| U1 | ESP32-S3-WROOM-1 | Wi-Fi/BLE module | RF_Module (SMD) |
| U2 | SI1145-M01-GMR | UV/light/proximity sensor | XDCR SI1145-M01-GMR |
| U3 | DHT11 | Temp/humidity sensor | Aosong DHT11 5.5×12.0mm |
| U4 | AMS1117-3.3 | 3.3V LDO regulator | SOT-223-3 |
| U6 | BMP280 | Barometric pressure sensor | LGA-8 2×2.5mm |
| J1 | USB_C_Receptacle_USB2.0_14P | USB-C power/data in | USB-C 14P receptacle |
| J2 | 1×8 pin header | TFT LCD | 2.54mm vertical header |
| D1 | 1N5819 | Schottky diode | SOD-123 |
| D2, D3, D4 | PESD5V0S1UL | ESD protection diode | SOD-882 |
| D5 | SK6812 | Addressable RGB LED | PLCC4 5.0×5.0mm |
| D6 | LED | Status LED | LED 0805 |
| R1 | Resistor | 10 kΩ | LED current limit |
| R2, R3 | Resistor | 5.1 kΩ | I²C pull-ups (SI1145) |
| R4 | Resistor | 75 Ω | RGB data line |
| R5, R6, R7 | Resistor | 10 kΩ | Sensor/strapping pull-ups |
| C1, C6, C8, C10, C11 | Ceramic capacitor | 0.1 µF | Decoupling |
| C2, C4, C5, C7 | Electrolytic capacitor | 10 µF | Bulk/regulator filtering |
| C3 | Ceramic capacitor | 1 µF | Decoupling |
| SW1–SW4 | Push-button | SMD tactile | User input / reset / boot |

*(Full net-level detail lives in the schematic file under `Schematic/`.)*

---

## 💻 Getting the Project Open

**1. Clone the repository**
```bash
git clone https://github.com/anshukumar146/GitHub.git
cd GitHub/PCB_projects/KICAD/ESP32_4Layer
```

**2. Install KiCad (version 10.0.0 or later recommended)**
```bash
# Ubuntu/Debian
sudo apt install kicad

# macOS (via Homebrew)
brew install --cask kicad

# Windows
# Download the installer from https://www.kicad.org/download/
```

**3. Open the project**
```bash
kicad ESP32_4Layer.kicad_pro
```

---

## ▶️ Building & Fabricating the Board

**Option A — Use the pre-generated Gerbers**
The files in `Gerber/` are ready to upload directly to any PCB fabricator (JLCPCB, PCBWay, OSH Park, etc.):
1. Zip all `.gbr` and `.drl` files together.
2. Upload the zip to your fab house's Gerber viewer/order page.
3. Confirm the board outline, layer count (4), and dimensions (~39.9 mm × 58.5 mm, 1.6 mm thickness) match the preview.
4. Place the order.

**Option B — Regenerate Gerbers from source**
1. Open the `.kicad_pcb` file from `PCB/` in KiCad's PCB Editor.
2. Run **File → Fabrication Outputs → Gerbers** (and **Drill Files**) to regenerate output.
3. Review the plot in **File → Fabrication Outputs → Gerber Viewer** before ordering.

---

## 🧑‍💻 Usage (After Assembly)

1. Solder/populate components per the BOM above.
2. Connect the board via USB-C for power and programming.
3. Flash your firmware to the ESP32-S3-WROOM-1 (e.g. via Arduino/ESP-IDF/MicroPython) to read the DHT11, BMP280, and SI1145 sensors and drive the TFT display.
4. Connect a compatible SPI TFT display to the 8-pin header (J2).
5. Use the buttons (SW1–SW4) for UI navigation, reset, or boot-mode entry as configured in firmware.
6. Watch the SK6812 RGB LED for status indication (e.g. Wi-Fi connection state, alerts).

---

## 📊 Design Summary

- **Layers:** 4 (F.Cu / In1.Cu / In2.Cu / B.Cu)
- **Board size:** ≈ 39.9 mm × 58.5 mm
- **Thickness:** 1.6 mm
- **Finish:** None (as generated — set per fab house preference at order time)
- **Min track/clearance:** 0.2 mm outer layers, 0.2 mm inner layers (per design rules in the Gerber job file)

---

## 🧭 Design Motivation

Most ESP32 sensor projects are prototyped on breadboards or stitched together from separate breakout boards. This design consolidates the MCU, display interface, and three environmental sensors onto a single 4-layer PCB — giving a compact, self-contained weather station with a fully open schematic and layout that anyone can inspect, modify, or fabricate themselves.

---

## 🚀 Future Improvements

- Add a battery/LiPo charging circuit for portable operation
- Add silkscreen pin labels for the TFT header and sensor test points
- Add a dedicated I²C/SPI test header for debugging sensors independently of firmware
- Add mounting holes and a matching enclosure design
- Add a schematic-level ERC/DRC report to the repo for reviewers

---

## 🎓 Learning Outcomes

By studying and building this project, you will learn:

- How to design a multi-sensor IoT board around an ESP32-S3 module
- 4-layer PCB stack-up design (signal/inner plane layering)
- Power regulation basics: selecting and decoupling an LDO regulator
- USB-C power/data interfacing with ESD protection
- I²C and single-wire sensor bus design with pull-up resistor sizing
- Driving an SPI TFT display and an addressable RGB LED from an MCU
- Reading and generating Gerber/Excellon fabrication files from KiCad

---

## 🧩 Skills Demonstrated

- Schematic Capture & Electrical Design (KiCad)
- Multi-Layer PCB Layout & Routing
- Power Supply / LDO Regulator Design
- USB-C Interface Design
- Sensor Bus (I²C/SPI) Integration
- Fabrication Output Generation (Gerber/Excellon)
- Embedded Hardware Documentation

---

## 👤 Author

**Name:** Anshu Kumar
**GitHub:** [@anshukumar146](https://github.com/anshukumar146)
**LinkedIn:** _(add your LinkedIn URL here)_
**Email:** _(add your email here)_

---

## 📜 License

This project is licensed under the **MIT License**.

```
MIT License

Copyright (c) 2026 Anshu Kumar

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

---

## 🙏 Acknowledgements

- Espressif's ESP32-S3-WROOM-1 datasheet for module electrical and pinout reference
- Bosch, Aosong, and Silicon Labs datasheets for the BMP280, DHT11, and SI1145 sensors
- The KiCad project and community libraries for schematic symbols and footprints
- The open-source hardware community for encouraging fully documented, reproducible PCB designs

---

<div align="center">

⭐ If you found this repository helpful, consider giving it a star!

</div>
