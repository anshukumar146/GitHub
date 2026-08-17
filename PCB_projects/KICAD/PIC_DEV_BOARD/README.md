# 🎛️ PIC18F Development / Trainer Board

A full-featured, multi-peripheral development and trainer board for the PIC18F microcontroller family — combining an on-board USB programmer, dual power input, and eleven plug-in peripheral modules (LEDs, keypad, LCD, UART, EEPROM, stepper driver, relays, and more) on a single 4-layer PCB, designed in KiCad.

![KiCad](https://img.shields.io/badge/Made%20with-KiCad%2010.0.5-314CB0?style=for-the-badge&logo=kicad&logoColor=white)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)
![PRs](https://img.shields.io/badge/PRs-Welcome-blue?style=for-the-badge)

---

## 📋 Specifications

| Property | Value |
|---|---|
| **Target MCU** | PIC18F4331-IP (DIP-40) |
| **On-board Programmer MCU** | PIC18F2550-ISO (USB ↔ ICSP) |
| **PCB Layers** | 4 |
| **Software** | KiCad 10.0.5 |
| **Board Size** | 180 × 157 mm |
| **Power Input** | DC Barrel Jack + USB-C |
| **Oscillator** | 20 MHz crystal |
| **Peripheral Modules** | 11 (see below) |

---

## 📖 Project Overview

**Purpose**
This repository contains the full KiCad design (schematic, PCB layout, and fabrication outputs) for a PIC18F trainer/development board. It's built around a socketed `PIC18F4331-IP` target MCU with its own onboard USB-based ICSP programmer (`PIC18F2550-ISO`), and breaks out every port to eleven dedicated peripheral interface modules — everything needed to learn and prototype PIC18 firmware without any external programmer or breadboarding.

**Real-World Applications**
- A university-lab-style trainer board for embedded systems / microprocessor courses
- A single-board reference platform for learning GPIO, ADC, UART, SPI, and I²C on PIC18
- A rapid-prototyping base for keypad/LCD UI projects, stepper motor control, and sensor logging
- A hobbyist board for experimenting with PIC18F peripherals without extra hardware

**Target Users**
- Students and instructors in digital electronics / embedded systems labs
- Hobbyists learning the PIC18 architecture and MPLAB X / XC8 toolchain
- Makers who want a single board that already exposes LEDs, a keypad, an LCD, UART, EEPROM, and a motor driver

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

✅ Socketed PIC18F4331-IP (DIP-40) target MCU
✅ On-board PIC18F2550-ISO USB-to-ICSP programmer — program the target without an external PICkit
✅ Dual power input: DC barrel jack (with bridge rectifier) and USB-C
✅ 20 MHz crystal oscillator with load capacitors
✅ Manual reset circuit
✅ 8× LED array with SIP resistor network
✅ 4×4-style 16-button keypad interface
✅ 8-position DIP switch bank with SIP resistor network
✅ 16×2 character LCD header with contrast trim potentiometer
✅ RS-232 UART interface via MAX232 level shifter
✅ SPI EEPROM (25LCxxx) and I²C EEPROM (24LC04) sockets
✅ DS18B20 1-Wire digital temperature sensor
✅ Stepper motor driver (ULN2803A) + LM35 analog temperature sensor + trim pots for ADC testing
✅ Dual relay outputs (SPDT) with buzzer, driven via BC547 transistor switches
✅ All four MCU ports (PORTA–PORTD) broken out to standard 10-pin headers
✅ 4-layer PCB (F.Cu / In1.Cu / In2.Cu / B.Cu), fully routed with complete Gerber/drill fabrication output

---

## 🛠️ Technologies Used

| Category | Details |
|---|---|
| **EDA Tool** | KiCad 10.0.5 |
| **Target MCU** | PIC18F4331-IP (DIP-40) |
| **Programmer MCU** | PIC18F2550-ISO (USB, SOIC-28) |
| **Power** | R-78B5.0-2.0 DC-DC converter, bridge rectifier |
| **Board** | 4-layer, 1.6 mm thickness, 180 × 157 mm |
| **Manufacturing Output** | Gerber (RS-274X) + Excellon drill files, ready for fab |
| **Version Control** | Git & GitHub |

---

## 📂 Repository Structure

```
PIC_DEV_BOARD/
├── README.md
├── Images/
├── KiCad/
│   ├── PIC_DEV_BOARD.kicad_pro
│   └── PIC_DEV_BOARD.kicad_pcb
├── Schematic/
│   ├── PIC_DEV_BOARD.kicad_sch          # Top sheet: MCUs, oscillator, reset, port headers
│   ├── POWER_SUPPLY.kicad_sch
│   ├── LED_INTERFACING.kicad_sch
│   ├── KEYPAD_INTERFACE.kicad_sch
│   ├── DIP_SWITCH.kicad_sch
│   ├── LCD_INTERFACE.kicad_sch
│   ├── UART.kicad_sch
│   ├── SPI_I2C_EEPROM.kicad_sch
│   ├── DS1820_TEMPERATURE_SENSOR.kicad_sch
│   ├── STEPPER_MOTOR_INTERFACE.kicad_sch
│   └── BUZZER_RELAY.kicad_sch
├── Gerber/
├── BOM/
└── Datasheets/
```

Browse each folder directly on GitHub for the full contents:
- **KiCad/** — the PCB layout and project file
- **Schematic/** — one sheet per module, plus the top-level sheet tying them together
- **Gerber/** — Gerber (`.gbr`) and drill (`.drl`) fabrication output, plus the `.gbrjob` job file
- **BOM/** — Bill of materials
- **Datasheets/** — Component datasheets (both MCUs, sensors, drivers, etc.)
- **Images/** — Schematic, PCB, and 3D renders used in this README

---

## ⚙️ How It Works

1. **Power In** — DC power enters through the barrel jack (J1) via a bridge rectifier (D3) for reverse-polarity protection, or the board can be powered over USB-C (J4). An R-78B5.0-2.0 DC-DC module (U1) regulates the supply to a clean 5V rail, indicated by an on-board LED (D1).
2. **Programming** — The PIC18F2550-ISO (U2) acts as an on-board USB-to-ICSP bridge: it talks to a host PC over USB (D+/D−) and drives the PGC/PGD/MCLR lines into the target PIC18F4331 (U3), so the board can be programmed with just a USB cable — no external programmer required.
3. **Target MCU** — The PIC18F4331-IP (U3) is the DIP-40 target device, clocked by a 20 MHz crystal (X1) with load capacitors (C6, C7), and reset via a push-button (SW1) with pull-up (R5) and pull-down/decoupling network (R4, D2, C8, C9).
4. **Port Breakout** — All four ports (PORTA–PORTD) are broken out to 10-pin headers (J3, J5, J6, J7), and each peripheral module below connects into these headers.
5. **Peripheral Modules** — Each module is its own schematic sheet and plugs into a port header:
   - **LED Interfacing** — 8 LEDs (D4–D11) with a SIP resistor array (RN1) for current limiting.
   - **Keypad Interface** — 16 push-buttons wired as a matrix keypad with pull-up resistors (R7–R10).
   - **DIP Switch** — An 8-position DIP switch (SW18) with a SIP resistor array (RN2) for binary/logic-level input testing.
   - **LCD Interface** — A 16-pin header (J15) for a standard 16×2 character LCD, with a contrast potentiometer (RV3).
   - **UART** — A MAX232 (U4) level-shifter with four 10 µF charge-pump capacitors (C10–C13) for RS-232 communication.
   - **SPI/I²C EEPROM** — A socketed SPI EEPROM (25LCxxx, U8) and I²C EEPROM (24LC04, U9) with pull-up resistors (R11, R15) for non-volatile storage experiments.
   - **DS1820 Temperature Sensor** — A DS18B20 (U5) 1-Wire digital temperature sensor with pull-up (R6).
   - **Stepper Motor Interface** — A ULN2803A Darlington driver (U6) for driving a stepper/relay load, alongside an LM35 analog temperature sensor (U7) and trim potentiometers (RV1, RV2) for ADC channel testing.
   - **Buzzer/Relay** — Two SPDT relays (K1, K2) switched via BC547 transistors (Q1–Q3) with flyback diodes (D12, D13), plus a piezo buzzer (BZ1).

---

## 🔍 Bill of Materials (Key Components)

| Ref | Part | Value | Module |
|---|---|---|---|
| U3 | PIC18F4331-IP | Target MCU | DIP-40 |
| U2 | PIC18F2550-ISO | On-board USB programmer MCU | SOIC-28 |
| X1 | Crystal | 20 MHz | Top sheet |
| U1 | R-78B5.0-2.0 | DC-DC converter (5V) | Power Supply |
| D3 | Diode bridge | Bridge rectifier | Power Supply |
| J1 | Barrel jack | DC power in | Power Supply |
| J4 | USB-C receptacle | USB power/programming | Power Supply |
| D4–D11 | LED | 5 mm | LED Interfacing |
| RN1, RN2 | SIP resistor array | — | LED / DIP Switch |
| SW2–SW17 | Push-button | 6 mm | Keypad Interface |
| SW18 | 8-position DIP switch | — | DIP Switch |
| J15 | 1×16 pin header | LCD | LCD Interface |
| RV1–RV3 | Trim potentiometer | 5 kΩ | LCD / Stepper Motor |
| U4 | MAX232 | RS-232 level shifter | UART |
| U8 | 25LCxxx | SPI EEPROM | SPI/I²C EEPROM |
| U9 | 24LC04 | I²C EEPROM | SPI/I²C EEPROM |
| U5 | DS18B20 | 1-Wire temp sensor | DS1820 Temperature Sensor |
| U6 | ULN2803A | Darlington driver array | Stepper Motor Interface |
| U7 | LM35-LP | Analog temp sensor | Stepper Motor Interface |
| K1, K2 | SPDT relay | — | Buzzer/Relay |
| Q1–Q3 | BC547 | NPN transistor | Buzzer/Relay |
| BZ1 | Buzzer | 12×9.5mm | Buzzer/Relay |

*(Full net-level detail lives in the schematic sheets under `Schematic/`.)*

---

## 💻 Getting the Project Open

**1. Clone the repository**
```bash
git clone https://github.com/anshukumar146/GitHub.git
cd GitHub/PCB_projects/KICAD/PIC_DEV_BOARD
```

**2. Install KiCad (version 10.0.5 or later recommended)**
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
kicad KiCad/PIC_DEV_BOARD.kicad_pro
```

The top-level schematic (`Schematic/PIC_DEV_BOARD.kicad_sch`) links to each module's sheet — open it in KiCad's Schematic Editor to navigate between them.

---

## ▶️ Building & Fabricating the Board

**Option A — Use the pre-generated Gerbers**
The files in `Gerber/` are ready to upload directly to any PCB fabricator (JLCPCB, PCBWay, OSH Park, etc.):
1. Zip all `.gbr` and `.drl` files together.
2. Upload the zip to your fab house's Gerber viewer/order page.
3. Confirm the board outline, layer count (4), and dimensions (180 mm × 157 mm, 1.6 mm thickness) match the preview.
4. Place the order.

**Option B — Regenerate Gerbers from source**
1. Open the `.kicad_pcb` file from `KiCad/` in KiCad's PCB Editor.
2. Run **File → Fabrication Outputs → Gerbers** (and **Drill Files**) to regenerate output.
3. Review the plot in **File → Fabrication Outputs → Gerber Viewer** before ordering.

---

## 🧑‍💻 Usage (After Assembly)

1. Solder/populate components per the BOM above (both MCUs can be socketed for easy replacement).
2. Power the board via the barrel jack or USB-C.
3. Connect a USB cable to J4 and use the on-board PIC18F2550 as your ICSP programmer to flash firmware onto the PIC18F4331 target — no external programmer needed.
4. Use the PORTA–PORTD headers (J3, J5–J7) to route signals into whichever peripheral module you're working with (LEDs, keypad, LCD, etc.).
5. Connect an RS-232 cable to the UART module for serial communication, or use the SPI/I²C headers for EEPROM read/write experiments.
6. Press SW1 at any time to reset the target MCU.

---

## 📊 Design Summary

- **Layers:** 4 (F.Cu / In1.Cu / In2.Cu / B.Cu)
- **Board size:** 180 mm × 157 mm
- **Thickness:** 1.6 mm
- **Finish:** None (as generated — set per fab house preference at order time)
- **Min track/clearance:** 0.2 mm (per design rules in the Gerber job file)

---

## 🧭 Design Motivation

Most PIC trainer boards either require a separate PICkit/ICD programmer or only expose a handful of peripherals at a time. This board folds a USB-based ICSP programmer directly onto the PCB and wires up eleven common peripheral interfaces around a single target MCU — giving a one-board, one-cable setup for learning the full breadth of PIC18 GPIO, ADC, UART, SPI, and I²C peripherals, with a fully open schematic and layout anyone can inspect, modify, or fabricate themselves.

---

## 🚀 Future Improvements

- Add silkscreen labels identifying each module block on the PCB
- Add a bootloader option on the PIC18F2550 so firmware updates don't require re-flashing via ICSP
- Add reverse-polarity/overcurrent protection on the barrel jack input
- Add mounting holes and a matching enclosure design
- Add a schematic-level ERC/DRC report to the repo for reviewers
- Document the exact PORTA–PORTD-to-module pin mapping in a dedicated table

---

## 🎓 Learning Outcomes

By studying and building this project, you will learn:

- How to design a multi-module trainer board around a PIC18 target MCU
- Building an on-board USB-to-ICSP programmer using a second PIC18F USB-capable MCU
- 4-layer PCB stack-up design for a large, densely-populated board
- Power supply design combining a barrel jack, bridge rectifier, and DC-DC converter module
- RS-232 interfacing via a MAX232 charge-pump level shifter
- SPI and I²C EEPROM interfacing and pull-up resistor sizing
- Darlington array (ULN2803A) motor/relay driving from MCU GPIO
- 1-Wire (DS18B20) and analog (LM35) temperature sensing
- Reading and generating Gerber/Excellon fabrication files from KiCad

---

## 🧩 Skills Demonstrated

- Schematic Capture & Multi-Sheet Hierarchical Design (KiCad)
- 4-Layer PCB Layout & Routing
- Power Supply Design (AC/DC input, rectification, regulation)
- USB & ICSP Programmer Circuit Design
- Peripheral Interfacing: UART, SPI, I²C, 1-Wire, Analog
- Motor/Relay Driver Circuit Design
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

- Microchip's PIC18F4331 and PIC18F2550 datasheets for MCU electrical and pinout reference
- Maxim's MAX232 datasheet for the RS-232 interface reference design
- The KiCad project and community libraries for schematic symbols and footprints
- The open-source hardware community for encouraging fully documented, reproducible PCB designs

---

<div align="center">

⭐ If you found this repository helpful, consider giving it a star!

</div>
