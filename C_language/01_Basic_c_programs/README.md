# 🧠 Basic C Programs

A curated collection of beginner-friendly C programs covering core programming fundamentals — variables, conditionals, loops, switch-case, and bitwise operations — each written to be simple, readable, and easy to learn from.

![C](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)
![PRs](https://img.shields.io/badge/PRs-Welcome-blue?style=for-the-badge)

---

## 📖 Project Overview

**Purpose**
This repository is a hands-on learning resource for anyone starting out with the C programming language. Instead of scattered snippets, it organizes classic beginner exercises into one clean, well-documented folder.

**Problem Solved**
New C learners often struggle to find simple, correctly commented, self-contained examples that demonstrate exactly *one* concept at a time. This project solves that by providing small, focused programs — each solving a single, well-known problem.

**Real-World Applications**
While the programs themselves are educational, the concepts they teach (bit manipulation, number theory, conditional logic, loops, switch-case menus) are the building blocks used in embedded systems, competitive programming, technical interviews, and low-level software development.

**Target Users**
- Students learning C for the first time
- Instructors looking for teaching examples
- Developers preparing for coding interviews
- Anyone refreshing fundamental programming logic

---

## ✨ Features

✅ 12 self-contained, ready-to-compile C programs
✅ Clear inline comments explaining the logic of every step
✅ Covers arithmetic, bitwise, conditional, and loop-based problems
✅ A multi-option **switch-case calculator**
✅ A multi-shape **geometry calculator** (10 shapes supported)
✅ Beginner-friendly code style with no external dependencies
✅ Individual `.c` files — run and study each program independently

---

## 🛠️ Technologies Used

| Category | Details |
|---|---|
| **Language** | C (C99/C11 compatible) |
| **Compiler** | GCC (GNU Compiler Collection) |
| **Frameworks/Libraries** | None — uses only the C Standard Library (`stdio.h`) |
| **Tools** | Terminal / Command Prompt |
| **IDE** | Any (VS Code, Code::Blocks, Dev-C++, CLion, etc.) |
| **Version Control** | Git & GitHub |

---

## 📂 Folder Structure

```
01_Basic_c_programs/
│
├── 00_README.md                                  # Original folder-level notes
├── 01_hello_world.c                              # Print "Hello, World!"
├── 02_swap_numbers_without_third_variable.c      # Swap using arithmetic
├── 03_swap_numbers_with_third_variable.c         # Swap using a temp variable
├── 04_swap_numbers_using_XOR.c                   # Swap using XOR bitwise operator
├── 05_largest_of_number.c                        # Largest of 3 numbers
├── 06_check_even_odd.c                           # Even/Odd checker
├── 07_factorial.c                                # Factorial using a for loop
├── 08_reverse_a_number.c                         # Reverse digits of a number
├── 09_palindrome_check.c                         # Palindrome number check
├── 10_fibonacci_sequence.c                       # Fibonacci series generator
├── 11_calculator_using_switch.c                  # Basic calculator (switch-case)
├── 12_geometry_calculator.c                      # Multi-shape geometry calculator
└── .gitignore                                    # Ignores build artifacts/binaries
```

---

## ⚙️ How It Works

Every program in this collection follows the same simple flow:

1. **Input** — The program prompts the user via `printf()` and reads values using `scanf()`.
2. **Processing** — The core logic (arithmetic, bitwise operation, loop, or conditional) transforms the input.
3. **Output** — The result is displayed back to the user with `printf()`.
4. **Internal Workflow** — Since each file has a single `main()` function with no external dependencies, execution is linear: input → compute → output → exit.

For example, in `10_fibonacci_sequence.c`:
- The user enters the number of terms (`n`).
- A `for` loop iterates `n` times, calculating each Fibonacci term from the previous two (`t1`, `t2`).
- Each term is printed as it's generated.

---

## 🔍 Code Explanation

| File | Core Concept | How It Works |
|---|---|---|
| `01_hello_world.c` | Basic I/O | Prints a static string using `printf()`. |
| `02_swap_numbers_without_third_variable.c` | Arithmetic swap | Uses addition/subtraction (`a=a+b; b=a-b; a=a-b;`) to swap two values without extra memory. |
| `03_swap_numbers_with_third_variable.c` | Temporary variable swap | Uses a `tempo` variable to hold one value while swapping. |
| `04_swap_numbers_using_XOR.c` | Bitwise XOR swap | Swaps two integers using the `^` operator three times, avoiding any extra variable. |
| `05_largest_of_number.c` | Conditional logic | Compares three numbers using `if / else if / else` to find the maximum. |
| `06_check_even_odd.c` | Modulo operator | Checks `a % 2 == 0` to classify a number as even or odd. |
| `07_factorial.c` | Iterative loop | Uses a `for` loop counting down from `a` to `1`, multiplying into an accumulator `fact`. |
| `08_reverse_a_number.c` | While loop + modulo | Repeatedly extracts the last digit (`num % 10`) and builds the reversed number, printing intermediate steps for clarity. |
| `09_palindrome_check.c` | Number reversal + comparison | Reverses the number (same technique as above) and compares it to the original to detect palindromes. |
| `10_fibonacci_sequence.c` | Sequence generation | Iteratively computes Fibonacci terms using two tracking variables (`t1`, `t2`) instead of recursion. |
| `11_calculator_using_switch.c` | Switch-case | Reads an operator (`+ - * /`) and performs the matching arithmetic operation, with a zero-division guard. |
| `12_geometry_calculator.c` | Nested switch-case + formulas | Presents a 10-shape menu (square, cube, rectangle, cuboid, circle, sphere, triangle, cone, cylinder, parallelogram) and computes area/perimeter or surface area using standard geometric formulas. |

---

## 💻 Installation

**1. Clone the repository**
```bash
git clone https://github.com/anshukumar146/github.git
cd github/C_language/01_Basic_c_programs
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

Compile and run any program individually. For example:

```bash
gcc 07_factorial.c -o factorial
./factorial
```

On Windows (Command Prompt):
```bash
gcc 07_factorial.c -o factorial.exe
factorial.exe
```

Repeat this pattern for any file in the folder — just swap the filename.

---

## 🧑‍💻 Usage

1. Compile the desired `.c` file using GCC.
2. Run the generated executable.
3. Follow the on-screen prompts (e.g., enter numbers, choose an operator, or pick a shape).
4. View the computed result printed directly in the terminal.

**Example — Geometry Calculator (`12_geometry_calculator.c`):**
```
Geometry Calculator:

Select a shape:
1 : Square
2 : Cube
3 : Rectangle
...
Enter your choice: 1
Enter the side of square: 5
Area = 25.00
Perimeter = 20.00
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

Each program produces a direct, deterministic console output based on user input:

- Swap programs display the two values after swapping.
- Even/Odd, Largest, and Palindrome programs print a classification result.
- Factorial and Fibonacci programs print computed numeric results/sequences.
- The Calculator and Geometry Calculator print computed arithmetic or geometric results based on user-selected operations/shapes.

---

## 🚀 Future Improvements

- Add input validation to handle invalid or non-numeric entries gracefully
- Convert the calculator and geometry programs into reusable functions/modules
- Add unit tests for each logic function
- Introduce a main menu to run any program from a single entry point
- Extend the geometry calculator with additional shapes (e.g., trapezoid, ellipse)
- Add a Makefile for one-command compilation of all programs

---

## 🎓 Learning Outcomes

By studying and building this project, you will learn:

- Core C syntax: variables, data types, and operators
- Standard I/O using `printf()` and `scanf()`
- Conditional branching with `if / else if / else`
- Iterative logic using `for` and `while` loops
- Multi-way branching using `switch-case`
- Bitwise operations (XOR-based swapping)
- Number manipulation techniques (digit extraction, reversal, palindrome detection)
- How to structure and comment beginner-level C programs professionally

---

## 🧩 Skills Demonstrated

- C Programming Fundamentals
- Problem Decomposition
- Bitwise Operations
- Conditional & Loop-Based Algorithm Design
- Command-Line Program Design
- Code Documentation & Commenting Practices
- Git & GitHub Repository Organization

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

- The C Standard Library documentation for reference on `stdio.h` functions
- Classic beginner CS curricula that inspired these canonical exercises (swap techniques, Fibonacci, palindrome check, etc.)
- The open-source community for encouraging clean, well-documented learning repositories

---

<div align="center">

⭐ If you found this repository helpful, consider giving it a star!

</div>
