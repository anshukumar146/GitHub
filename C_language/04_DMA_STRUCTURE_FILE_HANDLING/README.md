# 💾 DMA, Structures & File Handling in C

A collection of 5 intermediate C programs exploring user-defined data types (structures), dynamic memory allocation, and file I/O — the building blocks for managing real, structured data in C.

![C](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)
![PRs](https://img.shields.io/badge/PRs-Welcome-blue?style=for-the-badge)

---

## 📖 Project Overview

**Purpose**
This repository moves beyond basic syntax into three pillars of intermediate C programming: **structures** (grouping related data), **Dynamic Memory Allocation** (allocating memory at runtime), and **file handling** (persisting data beyond a program's execution). Each program demonstrates one of these concepts through a practical, self-contained example.

**Problem Solved**
Real-world programs rarely work with single, isolated variables — they need to model records (like students or customers), size memory based on runtime input, and read/write data to disk. This collection breaks these often-intimidating topics into small, working programs that are easy to trace and learn from.

**Real-World Applications**
- Structures are the foundation of records in databases, employee/student management systems, and any record-based software.
- Dynamic Memory Allocation is essential for programs that don't know their data size in advance (e.g., processing variable-length input).
- File handling underlies logging systems, data persistence, configuration files, and any application that must save/load information.

**Target Users**
- Intermediate C learners moving past arrays/pointers into structured programming
- Students preparing for university C lab exams (several programs are written to match common lab assignment formats)
- Developers wanting quick, referenceable examples of `struct`, `calloc()`, and `fopen()`-based file I/O

---

## ✨ Features

✅ Structure-based student percentage calculator
✅ Date-adder utility that correctly handles month lengths and leap years
✅ File handling program that writes, reads, and categorizes characters into separate files
✅ Dynamic Memory Allocation using `calloc()` to size an array at runtime
✅ Multi-function structure program managing customer records with balance-based logic
✅ Clear inline comments explaining every key step

---

## 🛠️ Technologies Used

| Category | Details |
|---|---|
| **Language** | C (C99/C11 compatible) |
| **Compiler** | GCC (GNU Compiler Collection) |
| **Frameworks/Libraries** | C Standard Library only (`stdio.h`, `stdlib.h`) |
| **Tools** | Terminal / Command Prompt |
| **IDE** | Any (VS Code, Code::Blocks, Dev-C++, CLion, etc.) |
| **Version Control** | Git & GitHub |

---

## 📂 Folder Structure

```
04_DMA_STRUCTURE_FILE_HANDLING/
│
├── README.md                                                # Folder-level notes
│
├── 🏢 Structures
│   ├── 01_percentage_calculation_when_three_marks_given.c   # Student percentage via structures
│   ├── 02_Add_n_days_to_a_date.c                            # Date structure + leap-year-aware day addition
│   └── 05_Structure_with_Function.c                         # Customer records processed via functions
│
├── 📂 File Handling
│   └── 03_BASIC_FILE_HANDLING.c                             # Write, read, and sort characters into files
│
├── 🧠 Dynamic Memory Allocation
│   └── 04_Number_larger_smaller_or_equall_then_X.c          # calloc()-based array compared against a target value
│
└── .gitignore                                               # Ignores build artifacts, binaries, and .txt output files
```

---

## ⚙️ How It Works

Each program follows a structured flow suited to its concept:

1. **Input** — The user enters counts, values, dates, or characters via `scanf()`.
2. **Processing** — Depending on the program, this means: populating an array of `struct` records, allocating memory dynamically with `calloc()`, or writing/reading characters through file pointers (`FILE *`).
3. **Output** — Results are printed to the console, and in the file-handling program, also written to `.txt` files on disk.
4. **Internal Workflow** — Structure programs typically loop once to collect data and again to process/print it. The file-handling program writes a master file, then re-opens it to classify each character into one of three output files.

**Example — `03_BASIC_FILE_HANDLING.c`:**
- The user specifies how many characters to enter, and they're written to `Data.txt`.
- The file is reopened for reading; each character is checked and routed into `Alphabet.txt`, `Number.txt`, or `special.txt` using ASCII range checks.
- All three files are then reopened and their contents printed back to the console.

---

## 🔍 Code Explanation

| File | Core Concept | How It Works |
|---|---|---|
| `01_percentage_calculation_when_three_marks_given.c` | Structures | Defines a `struct student` holding name, roll, section, and three marks. An array of structures stores up to 20 students; percentage is computed as the average of the three marks and printed for each. |
| `02_Add_n_days_to_a_date.c` | Structures + custom logic | Defines a `struct date`. A helper function `daysInMonth()` returns the correct number of days for a given month/year, including leap-year detection (`year % 4 == 0 && year % 100 != 0`, or `year % 400 == 0`). A `while` loop repeatedly subtracts the month's day count and increments the month/year until the date is valid. |
| `03_BASIC_FILE_HANDLING.c` | File I/O (`fopen`, `putc`, `getc`) | Writes `n` user-entered characters to `Data.txt`, then reads them back character-by-character, routing digits, letters, and everything else into three separate files using ASCII value comparisons. All files are then read back and displayed. |
| `04_Number_larger_smaller_or_equall_then_X.c` | Dynamic Memory Allocation | Uses `calloc(n, sizeof(int))` to allocate a zero-initialized integer array sized exactly to user input `n`. After populating it, the program compares every element against a target value `a`, tallying counts of larger, smaller, and equal elements. |
| `05_Structure_with_Function.c` | Structures + functions | Defines a `struct customer` (name, account number, balance). One function (`myfunc`) prints names of customers with a balance under 5,000; another (`sum`) adds 1,000 to any balance over 10,000 and prints all updated records. Demonstrates passing an array of structures into functions. |

---

## 💻 Installation

**1. Clone the repository**
```bash
git clone https://github.com/anshukumar146/github.git
cd github/C_language/04_DMA_STRUCTURE_FILE_HANDLING
```

**2. Ensure GCC is installed**
```bash
gcc --version
```
If not installed:
```bash
# Ubuntu/Debian
sudo apt install gcc

# macOS (via Homebrew)
brew install gcc

# Windows
# Install MinGW or use WSL
```

---

## ▶️ Running the Project

Compile and run any program individually:

```bash
gcc 01_percentage_calculation_when_three_marks_given.c -o percentage
./percentage
```

On Windows (Command Prompt):
```bash
gcc 01_percentage_calculation_when_three_marks_given.c -o percentage.exe
percentage.exe
```

Repeat this pattern for any file in the folder — just swap the filename.

> **Note:** `03_BASIC_FILE_HANDLING.c` creates `Data.txt`, `Alphabet.txt`, `Number.txt`, and `special.txt` in the same directory when run. These are already excluded via `.gitignore` so they won't be tracked by Git.

---

## 🧑‍💻 Usage

1. Compile the desired `.c` file using GCC.
2. Run the generated executable.
3. Enter the requested values (counts, marks, dates, characters, or record details) when prompted.
4. View the computed or classified results printed in the terminal (and, for the file-handling program, saved to disk).

**Example — Percentage Calculator (`01_percentage_calculation_when_three_marks_given.c`):**
```
Total number of students: 1
Enter name, roll: Aarav 12
Enter sec: A
Enter mark1, mark2, mark3: 80 90 85

Name       = Aarav
Roll       = 12
Section    = A
Mark1      = 80
Mark2      = 90
Mark3      = 85
Percentage = 85.00
```

**Example — DMA Comparison (`04_Number_larger_smaller_or_equall_then_X.c`):**
```
enter number of elements:
5
10 20 30 40 50
enter number of your choice:
30
larger= 2
smaller= 2
equal= 1
```

---

## 📊 Results

Each program produces deterministic output based on the entered data:

- Structure programs print calculated percentages, adjusted dates, or filtered/updated customer records.
- The file-handling program prints the original character stream, then the same characters split into alphabet, number, and special-character groups — and persists this data as `.txt` files.
- The DMA program prints the original array followed by counts of elements larger than, smaller than, and equal to the target value.

---

## 🚀 Future Improvements

- Add input validation (e.g., reject negative marks, invalid dates, or non-numeric input)
- Free dynamically allocated memory explicitly with `free()` for good practice, even though the OS reclaims it on exit
- Replace the fixed-size `struct student s[20]` array with a dynamically sized array based on user input
- Add error handling for file operations (check if `fopen()` returns `NULL`)
- Refactor repeated array-of-structures input logic into reusable functions
- Add a menu-driven entry point to run any exercise from a single program

---

## 🎓 Learning Outcomes

By studying and building this project, you will learn:

- Defining and using `struct` to group related data into a single type
- Working with arrays of structures and passing them to functions
- Writing custom logic for calendar-style date arithmetic, including leap-year rules
- Allocating memory at runtime using `calloc()` instead of fixed-size arrays
- Opening, reading, writing, and closing files using `fopen()`, `getc()`, `putc()`, and `fclose()`
- Classifying character data using ASCII value ranges
- Designing functions that operate on and modify arrays of structures

---

## 🧩 Skills Demonstrated

- Structures & User-Defined Data Types
- Dynamic Memory Allocation (DMA)
- File I/O & Persistent Data Handling
- Function Design with Struct Arrays
- Date/Calendar Logic Implementation
- ASCII-Based Character Classification
- Code Documentation & Commenting Practices

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

- The C Standard Library documentation for reference on `stdio.h` and `stdlib.h`
- Common university C-lab assignment formats that inspired several of these exercises (structure-based record management)
- The open-source community for encouraging clean, well-documented learning repositories

---

<div align="center">

⭐ If you found this repository helpful, consider giving it a star!

</div>
