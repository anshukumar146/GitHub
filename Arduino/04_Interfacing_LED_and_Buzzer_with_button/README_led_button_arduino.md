# 🔌 Interfacing LED with a Pushbutton (Arduino)

A simple Arduino sketch demonstrating digital input/output — reading a pushbutton's state and using it to control an LED in real time.

![Arduino](https://img.shields.io/badge/Platform-Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)
![Language](https://img.shields.io/badge/Language-C%2FC%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)

---

## 📖 Project Overview

**Purpose**
This project is an introductory embedded systems exercise demonstrating how to read a digital input (a pushbutton) and use that value to drive a digital output (an LED) on an Arduino board.

**Problem Solved**
It's one of the first practical steps beyond "blink an LED" — teaching how to make hardware **respond to user input** in real time using `digitalRead()` and `digitalWrite()`, the foundation of virtually all interactive embedded projects.

**Real-World Applications**
This exact input-to-output pattern scales up to real systems: light switches, safety interlocks, door sensors, appliance controls, and any device where a physical button or sensor needs to trigger an immediate electronic response.

**Target Users**
- Beginners starting out with Arduino and embedded C/C++
- Students in electronics or embedded systems courses
- Hobbyists prototyping simple input-driven circuits on breadboards or TinkerCAD

---

## ✨ Features

✅ Reads real-time pushbutton state using `digitalRead()`
✅ Drives an LED on/off based on that input using `digitalWrite()`
✅ Minimal, well-commented sketch — easy to read in one pass
✅ Includes circuit diagrams (TinkerCAD simulation + handmade schematic)
✅ Based on Arduino's official public-domain `Button` example

---

## 🛠️ Technologies Used

| Category | Details |
|---|---|
| **Language** | C/C++ (Arduino sketch, `.ino`) |
| **Platform** | Arduino (any board with a digital I/O pin 13 and pin 2, e.g., Uno/Nano) |
| **Frameworks/Libraries** | Arduino Core (`pinMode`, `digitalRead`, `digitalWrite`) — no external libraries |
| **Simulation Tool** | TinkerCAD Circuits |
| **Tools** | Arduino IDE |
| **Version Control** | Git & GitHub |

---

## 📂 Folder Structure

```
04_Interfacing_LED_and_Buzzer_with_button/
│
├── Button.ino              # Main Arduino sketch — pushbutton controls an LED
└── circuit_diagram.md       # TinkerCAD circuit diagram, block code screenshot, and handmade schematic
```

> **Note:** Despite the folder name mentioning a buzzer, the current `Button.ino` sketch only controls an LED — no buzzer logic is present in the code at this time and the buzzer is connected with the same LED.

---

## ⚙️ How It Works

1. **Input** — The pushbutton on pin 2 is read continuously inside `loop()` using `digitalRead(buttonPin)`, which returns `HIGH` when pressed and `LOW` when released.
2. **Processing** — An `if/else` check compares `buttonState` against `HIGH`.
3. **Output** — If the button is pressed, `digitalWrite(ledPin, HIGH)` turns the LED on; otherwise `digitalWrite(ledPin, LOW)` keeps it off.
4. **Internal Workflow** — Because this logic runs inside Arduino's continuously repeating `loop()` function, the LED responds to the button in real time with no noticeable delay.

---

## 🔍 Code Explanation

| Element | Type | Purpose |
|---|---|---|
| `buttonPin` | `const int` | Stores the digital pin (2) the pushbutton is wired to. |
| `ledPin` | `const int` | Stores the digital pin (13) the LED is wired to — pin 13 also maps to most Arduino boards' built-in LED. |
| `buttonState` | `int` | Holds the current reading (`HIGH`/`LOW`) from the pushbutton each loop cycle. |
| `setup()` | Function | Runs once at startup; configures `ledPin` as `OUTPUT` and `buttonPin` as `INPUT`. |
| `loop()` | Function | Runs continuously; reads the button state and sets the LED on or off accordingly. |

**Circuit (as described in `circuit_diagram.md` and the sketch comments):**
- LED: connected from pin 13 to ground through a 220Ω resistor
- Pushbutton: connected to pin 2 from +5V
- Pull-down resistor: 10KΩ from pin 2 to ground (ensures a defined `LOW` state when the button isn't pressed)

---

## 💻 Installation

**1. Clone the repository**
```bash
git clone https://github.com/anshukumar146/github.git
cd github/Arduino/04_Interfacing_LED_and_Buzzer_with_button
```

**2. Install the Arduino IDE**
Download from [arduino.cc/en/software](https://www.arduino.cc/en/software) if not already installed.

**3. Open the sketch**
Open `Button.ino` in the Arduino IDE.

---

## ▶️ Running the Project

**Option A — On real hardware:**
1. Wire the circuit as described above (LED on pin 13 with a 220Ω resistor, pushbutton on pin 2 with a 10KΩ pull-down resistor).
2. Connect your Arduino board via USB.
3. In the Arduino IDE, select your board and port under **Tools**.
4. Click **Upload** to flash `Button.ino` to the board.
5. Press the button — the LED should light up while held down.

**Option B — In simulation (TinkerCAD):**
1. Recreate the circuit in [TinkerCAD Circuits](https://www.tinkercad.com/circuits) (or open the provided diagram as reference).
2. Paste the sketch code into the TinkerCAD code editor.
3. Start the simulation and click the virtual pushbutton to toggle the LED.

---

## 🧑‍💻 Usage

- **Press and hold** the pushbutton → LED turns **on**.
- **Release** the pushbutton → LED turns **off**.

No serial input or additional configuration is required — behavior is entirely driven by the physical/simulated button state.

---

## 🖼️ Screenshots

## Circuit Diagram (TinkerCAD)
<img width="1536" height="598" alt="Smashing Snicket-Bruticus" src="https://github.com/user-attachments/assets/a6f57719-e70b-4e85-bfd9-365a26c2152a" />




---

## 🎥 Demo Video



https://github.com/user-attachments/assets/71c1d971-fd90-4016-9e24-a131835a2a32



---

## 📊 Results

The LED on pin 13 mirrors the pushbutton's state in real time:
- Button held down → LED lit
- Button released → LED off

No additional output (serial or otherwise) is produced by the current sketch.

---

## 🚀 Future Improvements

- Add the buzzer functionality implied by the folder name — e.g., sound a buzzer on pin X whenever the button is pressed alongside the LED
- Debounce the button input in software (using `millis()`-based debouncing) for more reliable readings on real hardware
- Add serial output (`Serial.println()`) to log button state changes for debugging
- Use `INPUT_PULLUP` mode to simplify the circuit by removing the need for an external 10KΩ resistor
- Add a toggle mode (press once to turn LED on, press again to turn it off) instead of hold-to-light behavior

---

## 🎓 Learning Outcomes

By studying and building this project, you will learn:

- How to configure Arduino pins as `INPUT` or `OUTPUT` using `pinMode()`
- Reading digital input values with `digitalRead()`
- Controlling digital output with `digitalWrite()`
- The role of pull-down resistors in maintaining a defined `LOW` signal
- How Arduino's `setup()`/`loop()` execution model drives continuous, real-time behavior
- Basic circuit design and simulation using TinkerCAD

---

## 🧩 Skills Demonstrated

- Embedded C/C++ Programming
- Digital I/O (GPIO) Control
- Circuit Design & Component Wiring
- Arduino IDE Workflow (writing, uploading, testing)
- Circuit Simulation (TinkerCAD)
- Technical Documentation

---

## 👤 Author

**Name:** Anshu Kumar
**GitHub:** [@anshukumar146](https://github.com/anshukumar146)
**LinkedIn:** _(add your LinkedIn URL here)_
**Email:** _(add your email here)_

---

## 📜 License

This project is licensed under the **MIT License**. The base sketch (`Button.ino`) is adapted from Arduino's official public-domain `Button` example (created 2005 by DojoDave, modified 2011 by Tom Igoe).

```
MIT License

Copyright (c) 2025 Anshu Kumar

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

- [Arduino's official `Button` example](https://docs.arduino.cc/built-in-examples/digital/Button/), the public-domain basis for this sketch
- Original authors: DojoDave (2005) and Tom Igoe (2011 revision)
- TinkerCAD Circuits for enabling circuit simulation and diagramming
- The open-source Arduino community for maintaining accessible embedded learning resources

---

<div align="center">

⭐ If you found this repository helpful, consider giving it a star!

</div>
