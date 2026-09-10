# 💻 C Language

A structured collection of C programs tracking progress from basic syntax through arrays/strings/pointers, loop-based pattern logic, and intermediate topics like structures, dynamic memory allocation, and file handling.

![C](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)
![PRs](https://img.shields.io/badge/PRs-Welcome-blue?style=for-the-badge)

---

## 📋 Overview

| Property | Value |
|---|---|
| **Language** | C (C99/C11 compatible) |
| **Compiler** | GCC |
| **Modules** | 4 |
| **Total Programs** | 44 |
| **Level Progression** | Basics → Arrays/Strings/Pointers → Loops & Patterns → Structures/DMA/File I/O |

Welcome to my C language learning repository! This workspace tracks my progress through foundational programming problems, data structures, algorithm implementations, and memory management tasks — each module building on the concepts of the one before it.

---

## 📂 Repository Structure

Each folder targets a specific proficiency level or module in C:

| Module | Focus | Programs |
|---|---|---|
| 📁 [01_Basic_c_programs](./01_Basic_c_programs) | Entry-level code covering fundamental input/output, conditional structures, basic operators, and basic logic. | 12 |
| 📁 [02_Arrays_strings_pointers](./02_Arrays_strings_pointers) | Sequential data structures, matrix operations, string manipulation, and pointer arithmetic. | 18 |
| 📁 [03_Loops_and_pattern](./03_Loops_and_pattern) | Iterative loops, multi-layered nested loops, and console pattern-printing shapes. | 7 |
| 📁 [04_DMA_STRUCTURE_FILE_HANDLING](./04_DMA_STRUCTURE_FILE_HANDLING) | Dynamic memory allocation (`malloc`/`calloc`), user-defined structures, and file I/O. | 5 |

Each module folder has its own README with a per-program breakdown, example input/output, and concept notes.

---

## 🔍 Module Details

### 01 — Basic C Programs
Fundamentals: I/O, conditionals, operators, and simple algorithms.
`hello world` · variable swapping (3 ways: temp variable, arithmetic, XOR) · largest of numbers · even/odd check · factorial · number reversal · palindrome check · Fibonacci sequence · switch-based calculator · geometry calculator.

### 02 — Arrays, Strings & Pointers
Sequential data, matrix operations, string manipulation, and pointer arithmetic.
Array sum (direct & pointer-based) · largest/smallest in array · matrix sum & multiplication · array reversal · bubble sort · string length/reverse/palindrome · word search · pointer-based swap · anagram check · 2D array row/column sums and diagonal sums · NULL/identity matrix check · even/odd element extraction · character-class replacement (alphabets → `@`, digits → `#`, special characters → `$`).

### 03 — Loops & Pattern Printing
Iterative logic and nested-loop console patterns.
Multiplication table · print first N natural numbers · sum of first N natural numbers · right-angle triangle (normal & reversed) · pyramid pattern · Armstrong number check.

### 04 — DMA, Structures & File Handling
Intermediate C: user-defined types, runtime memory allocation, and persisting data to disk.
Student percentage calculator (structures) · date-adder with leap-year handling · file handling (write/read/classify characters into separate files) · `calloc()`-based dynamic array comparison · customer records processed via functions.

*(See [04_DMA_STRUCTURE_FILE_HANDLING/README.md](./04_DMA_STRUCTURE_FILE_HANDLING/README.md) for the full breakdown of this module.)*

---

## ⚙️ Compilation & Execution

All programs can be compiled using the standard GNU Compiler Collection (GCC).

**1. Clone the repository**
```bash
git clone https://github.com/anshukumar146/GitHub.git
cd GitHub/C_language
```

**2. Navigate to the module you want**
```bash
cd 01_Basic_c_programs
```

**3. Compile and run any program**
```bash
gcc 01_hello_world.c -o hello_world
./hello_world
```

On Windows (Command Prompt):
```bash
gcc 01_hello_world.c -o hello_world.exe
hello_world.exe
```

Repeat this pattern for any `.c` file in any module — just swap the filename.

---

## 🛠️ Technologies Used

| Category | Details |
|---|---|
| **Language** | C (C99/C11 compatible) |
| **Compiler** | GCC (GNU Compiler Collection) |
| **Libraries** | C Standard Library only (`stdio.h`, `stdlib.h`, `string.h`) |
| **Tools** | Terminal / Command Prompt |
| **IDE** | Any (VS Code, Code::Blocks, Dev-C++, CLion, etc.) |
| **Version Control** | Git & GitHub |

---

## 🎓 Learning Outcomes

By working through this repository, you'll build up:

- Core C syntax: variables, operators, conditionals, and control flow
- Iterative logic and nested-loop pattern construction
- Array, string, and 2D matrix manipulation
- Pointer arithmetic and pointer-based function parameters
- Sorting and searching fundamentals (e.g. bubble sort, linear search)
- Defining and using `struct` to model real-world records
- Dynamic memory allocation with `calloc()`/`malloc()`
- File I/O with `fopen()`, `getc()`, `putc()`, and `fclose()`

---

## 🚀 Future Improvements

- Add a top-level Makefile or build script to compile every module in one pass
- Add input validation across all programs (reject invalid/negative input)
- Add a consistent example input/output block to every program's comments
- Expand Module 04 with linked lists and more advanced dynamic data structures
- Add a fifth module covering recursion and function pointers

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

<div align="center">

⭐ If you found this repository helpful, consider giving it a star!

</div>
