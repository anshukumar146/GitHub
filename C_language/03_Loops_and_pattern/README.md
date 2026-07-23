# 📗 Loops and Patterns in C

A focused collection of 7 C programs practicing iteration logic — from multiplication tables and natural number sums to classic star-pattern printing using nested loops.

![C](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)
![PRs](https://img.shields.io/badge/PRs-Welcome-blue?style=for-the-badge)

---

## 📖 Project Overview

**Purpose**
This repository is dedicated to strengthening one of the most essential programming skills: **loop control**. It walks through single loops, nested loops, and the classic "print a pattern" exercises that every C learner eventually tackles.

**Problem Solved**
Loops are simple in syntax but hard to master conceptually — especially nested loops where an outer loop controls rows and an inner loop controls columns or repetitions. This collection isolates that skill with small, visual, easy-to-verify programs.

**Real-World Applications**
Nested-loop thinking directly maps to real tasks like rendering grids/UI layouts, generating reports row-by-row, processing 2D data, and building any algorithm with repeated sub-repetition (e.g., sorting, matrix operations, simulations).

**Target Users**
- Beginners who have learned basic C syntax and are moving on to loop-heavy logic
- Students practicing for lab exams or coding interviews that ask for pattern printing
- Instructors who need simple, self-contained nested-loop teaching examples

---

## ✨ Features

✅ 7 self-contained C programs covering single and nested loops
✅ Multiplication table generator for any number
✅ Natural number listing and summation
✅ Three classic star-pattern programs (right triangle, inverted triangle, pyramid)
✅ Simple, well-commented `for` loop logic throughout
✅ No external dependencies — pure C Standard Library

---

## 🛠️ Technologies Used

| Category | Details |
|---|---|
| **Language** | C (C99/C11 compatible) |
| **Compiler** | GCC (GNU Compiler Collection) |
| **Frameworks/Libraries** | None — uses only `stdio.h` |
| **Tools** | Terminal / Command Prompt |
| **IDE** | Any (VS Code, Code::Blocks, Dev-C++, CLion, etc.) |
| **Version Control** | Git & GitHub |

---

## 📂 Folder Structure

```
03_Loops_and_pattern/
│
├── 00_README.md                          # Original folder-level notes
│
├── 🔢 Numeric Loops
│   ├── 01_table_of_number.c              # Multiplication table of a number (1–10)
│   ├── 02_print_N_natural_number.c       # Prints first N natural numbers
│   └── 03_sum_of_first_N_natural_number.c # Sum of first N natural numbers
│
├── 📐 Star Patterns
│   ├── 04_star_right_triangle.c          # Right-angled triangle pattern
│   ├── 05_reverse_right_angle_triangle.c # Inverted right-angled triangle pattern
│   └── 06_pyramid.c                      # Centered pyramid pattern
│
└── 07_Armstrong.c                        # See note in "Code Explanation" below
```

---

## ⚙️ How It Works

Every program follows the same simple loop-driven flow:

1. **Input** — The user enters a number (a value to multiply, a limit `n`, or a row count) via `scanf()`.
2. **Processing** — A `for` loop (or nested `for` loops for patterns) iterates over the range, computing a value or printing a character each pass.
3. **Output** — Results are printed line-by-line as the loop executes.

**Example — `06_pyramid.c`:**
- The user enters the number of rows `n`.
- For each row `i`, an inner loop first prints `(n - i)` leading spaces to center the pyramid.
- A second inner loop prints `(2*i - 1)` stars, growing the row width as `i` increases.
- A newline is printed after each row, building the pyramid shape top to bottom.

---

## 🔍 Code Explanation

| File | Core Concept | How It Works |
|---|---|---|
| `01_table_of_number.c` | Single `for` loop | Multiplies the user's number by `1` through `10`, printing each result as a line of the multiplication table. |
| `02_print_N_natural_number.c` | Single `for` loop | Iterates from `1` to `n`, printing each natural number in sequence. |
| `03_sum_of_first_N_natural_number.c` | Loop + accumulator | Iterates from `1` to `n`, adding each value into a running `sum` variable, then prints the total. |
| `04_star_right_triangle.c` | Nested `for` loop | Outer loop `i` controls the row number; inner loop `j` runs from `1` to `i`, printing one more star each row to form a right-angled triangle. |
| `05_reverse_right_angle_triangle.c` | Nested `for` loop (descending) | Outer loop controls the row; inner loop counts **down** from `a` to `i`, printing fewer stars as rows progress — forming an inverted triangle. |
| `06_pyramid.c` | Nested loops with spacing | Uses one inner loop for leading spaces and a second inner loop for `(2*i - 1)` stars per row, producing a centered pyramid. |
| `07_Armstrong.c` | ⚠️ Mislabeled file | The filename and folder README describe this as an **Armstrong number checker**, but the current source code is actually a duplicate of the right-angled star triangle pattern (identical to `04_star_right_triangle.c`). This appears to be a copy-paste placeholder that hasn't been replaced with the real Armstrong number logic yet. |

---

## 💻 Installation

**1. Clone the repository**
```bash
git clone https://github.com/anshukumar146/github.git
cd github/C_language/03_Loops_and_pattern
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
gcc 06_pyramid.c -o pyramid
./pyramid
```

On Windows (Command Prompt):
```bash
gcc 06_pyramid.c -o pyramid.exe
pyramid.exe
```

Repeat this pattern for any file in the folder — just swap the filename.

---

## 🧑‍💻 Usage

1. Compile the desired `.c` file using GCC.
2. Run the generated executable.
3. Enter the requested number (multiplier, limit, or row count) when prompted.
4. View the printed table, sum, or star pattern in the terminal.

**Example — Pyramid Pattern (`06_pyramid.c`):**
```
Enter number of rows: 4
      *
    * * *
  * * * * *
* * * * * * *
```

---

## 🖼️ Screenshots

## Output Screenshot
(Add screenshot here)

---

## 🎥 Demo Video

(Add video/GIF here)

---

## 📊 Results

Each program produces direct, predictable console output based on the entered number:

- Numeric programs print a multiplication table, a sequence of natural numbers, or their sum.
- Pattern programs print a star shape sized according to the entered row count.
- `07_Armstrong.c` currently prints a right-angled star triangle rather than an Armstrong number result (see note above).

---

## 🚀 Future Improvements

- Implement the actual **Armstrong number check** in `07_Armstrong.c` (extract each digit, cube it, sum, and compare to the original number)
- Add input validation for negative or zero row counts
- Extend pattern programs with additional shapes (diamond, hollow triangle, number patterns)
- Refactor repeated pattern-printing logic into reusable functions
- Add a menu-driven entry point to run any exercise from a single program

---

## 🎓 Learning Outcomes

By studying and building this project, you will learn:

- How `for` loops control repetition using initialization, condition, and increment/decrement
- How nested loops coordinate rows and columns to build visual patterns
- Using accumulator variables to compute running sums
- Controlling loop direction (ascending vs. descending) to change pattern shape
- Combining spacing loops with printing loops to center output (as in the pyramid)
- Recognizing and fixing mismatched code (as illustrated by the `07_Armstrong.c` file)

---

## 🧩 Skills Demonstrated

- Loop Control & Iteration Design
- Nested Loop Logic
- Pattern-Based Problem Solving
- Accumulator/Running-Total Techniques
- Code Review & Debugging Awareness
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

- The C Standard Library documentation for reference on `stdio.h`
- Classic CS curricula that inspired these canonical loop and pattern-printing exercises
- The open-source community for encouraging clean, well-documented learning repositories

---

<div align="center">

⭐ If you found this repository helpful, consider giving it a star!

</div>
