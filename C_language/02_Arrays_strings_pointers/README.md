# 📘 Arrays, Strings & Pointers in C

A hands-on collection of 18 C programs exploring arrays (1D & 2D), string manipulation, and pointer-based logic — each solving a distinct, well-known programming problem with clear, commented code.

![C](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)
![PRs](https://img.shields.io/badge/PRs-Welcome-blue?style=for-the-badge)

---

## 📖 Project Overview

**Purpose**
This repository builds on core C fundamentals by focusing on three of the language's most important building blocks: **arrays**, **strings**, and **pointers**. Each program isolates one concept so it can be studied and run independently.

**Problem Solved**
Arrays, strings, and pointers are notoriously tricky for C beginners — especially pointer arithmetic and manual string handling without library shortcuts. This collection breaks those topics into small, digestible, working examples instead of abstract theory.

**Real-World Applications**
These patterns form the backbone of real systems programming: matrix operations appear in graphics and scientific computing, string parsing underlies text processing and compilers, and pointer-based array traversal is central to memory-efficient embedded and low-level software.

**Target Users**
- Students moving past "Hello World" into intermediate C
- Learners preparing for technical interviews involving arrays/strings
- Anyone wanting to understand pointer arithmetic through practical examples
- Instructors seeking ready-made classroom exercises

---

## ✨ Features

✅ 18 self-contained C programs covering arrays, strings, and pointers
✅ Both 1D and 2D array operations (sum, sorting, diagonals, matrix multiplication)
✅ String algorithms implemented **without** relying on `<string.h>` where possible
✅ Manual pointer arithmetic for array traversal and swapping
✅ Practical utilities: anagram checker, palindrome checker, character classifier
✅ A themed vocabulary search program (Japanese Romaji lookup)
✅ Beginner-friendly inline comments explaining every key step

---

## 🛠️ Technologies Used

| Category | Details |
|---|---|
| **Language** | C (C99/C11 compatible) |
| **Compiler** | GCC (GNU Compiler Collection) |
| **Frameworks/Libraries** | C Standard Library only (`stdio.h`, `string.h`, `ctype.h` where used) |
| **Tools** | Terminal / Command Prompt |
| **IDE** | Any (VS Code, Code::Blocks, Dev-C++, CLion, etc.) |
| **Version Control** | Git & GitHub |

---

## 📂 Folder Structure

```
02_Arrays_strings_pointers/
│
├── 00_README.md                                                # Original folder-level notes
│
├── 📊 Arrays (1D & 2D)
│   ├── 01_simple_array_sum.c                                   # Element-wise sum of two 1D arrays
│   ├── 03_Largest_Smallest_number_in_array.c                   # Largest/smallest in an array
│   ├── 04_matrix_sum.c                                         # Sum of all elements in a 3x3 matrix
│   ├── 05_matrix_multiplication.c                               # Multiplies two 3x3 matrices
│   ├── 06_Array_reversal.c                                     # Reverses array elements in place
│   ├── 07_Bubble_sort.c                                        # Bubble sort (ascending/descending)
│   ├── 14_sum_of_row_and_column_of_2D_array.c                  # Row/column sum in a 2D array
│   ├── 15_principle_and_secondary_diagonal_2D_array.c          # Prints both matrix diagonals
│   ├── 16_check_for_NULL_and_Identity_matrix.c                 # Detects NULL or Identity matrix
│   └── 17_Return_of_even_and_odd_element_in_1D_array.c         # Sums even & odd elements via a function
│
├── 🔤 Strings & Text Processing
│   ├── 08_String_length.c                                      # Manual string length (no string.h)
│   ├── 09_String_reverse.c                                     # In-place string reversal via pointers
│   ├── 10_String_Palindrome.c                                  # Palindrome check via pointers
│   ├── 11_Japanese_Vocab_search.c                              # Romaji vocabulary lookup tool
│   ├── 13_Anagram.c                                            # Anagram checker using letter frequency
│   └── 18_replace_all_the_alphabet_with_@_..._.c               # Character-type replacer (@ # $)
│
├── 📍 Pointers
│   ├── 02_array_addition_pointer.c                             # Adds two arrays using pointer arithmetic
│   └── 12_Swap_number_using_pointer.c                          # Swaps numbers via pointers + a temp var
│
└── .gitignore                                                  # Ignores build artifacts/binaries
```

---

## ⚙️ How It Works

Each program follows a consistent, linear workflow:

1. **Input** — The user is prompted for values (array sizes, elements, strings, or a menu choice) via `printf()`/`scanf()`/`fgets()`.
2. **Processing** — The core algorithm runs: array traversal, pointer arithmetic, sorting, string scanning, or matrix computation.
3. **Output** — Results are printed directly to the console.
4. **Internal Workflow** — Most programs use loops (`for`/`while`) to iterate over arrays or string buffers, and several use `switch-case` menus to let the user pick between operations (e.g., ascending vs. descending sort, row-sum vs. column-sum).

**Example — `07_Bubble_sort.c`:**
- User enters array size and elements.
- User selects ascending (1) or descending (2) order via `switch`.
- Nested `for` loops perform the classic bubble sort, swapping adjacent out-of-order elements pass by pass.
- The sorted array is printed.

---

## 🔍 Code Explanation

| File | Core Concept | How It Works |
|---|---|---|
| `01_simple_array_sum.c` | 1D array traversal | Reads two arrays of size `n` and adds them index-by-index into a third array. |
| `02_array_addition_pointer.c` | Pointer arithmetic | Same array-sum logic as above, but accesses elements via pointer offsets (`*(p1 + i)`) instead of indexing. |
| `03_Largest_Smallest_number_in_array.c` | Array scanning + switch | Lets the user choose to find either the largest or smallest value by scanning the array once. |
| `04_matrix_sum.c` | 2D array traversal | Uses nested loops to read a 3×3 matrix and accumulate the sum of all elements. |
| `05_matrix_multiplication.c` | Matrix algorithm | Implements standard matrix multiplication using a triple nested loop (row × column × shared dimension). |
| `06_Array_reversal.c` | In-place swap | Reverses an array by swapping elements from both ends toward the middle using a temporary variable. |
| `07_Bubble_sort.c` | Sorting algorithm | Classic Bubble Sort with a `switch` to toggle between ascending and descending order. |
| `08_String_length.c` | Manual string parsing | Counts characters up to the null terminator without using `strlen()`, then strips the trailing newline from `fgets()`. |
| `09_String_reverse.c` | Pointer-based reversal | Uses two pointers (`start`, `end`) that move toward each other, swapping characters until they meet. |
| `10_String_Palindrome.c` | Two-pointer comparison | Compares characters from both ends inward; sets a `flag` to 0 on any mismatch to detect non-palindromes. |
| `11_Japanese_Vocab_search.c` | Array of strings + `strcmp` | Stores a fixed vocabulary array, lowercases user input with `tolower()`, and searches for a match using `strcmp()`. |
| `12_Swap_number_using_pointer.c` | Function + pointers | Passes addresses (`&a`, `&b`) into a separate `swap()` function that dereferences pointers to exchange values. |
| `13_Anagram.c` | Frequency counting | Builds a 26-letter frequency array, incrementing for the first string and decrementing for the second — if all counts return to zero, the strings are anagrams. |
| `14_sum_of_row_and_column_of_2D_array.c` | Dynamic 2D array | Reads a user-defined `rows × cols` matrix and computes the sum of a specific row or column chosen by the user. |
| `15_principle_and_secondary_diagonal_2D_array.c` | Diagonal traversal | Prints the main diagonal (`arr[i][i]`) and the secondary diagonal (`arr[i][m-1-i]`) of a matrix. |
| `16_check_for_NULL_and_Identity_matrix.c` | Matrix validation | Checks whether every element is zero (NULL matrix) or whether diagonal elements are `1` with all others `0` (Identity matrix). |
| `17_Return_of_even_and_odd_element_in_1D_array.c` | Pointers + output parameters | A custom `sum()` function receives a pointer to the array plus two output pointers, accumulating even and odd sums separately. |
| `18_replace_all_...c` | Character classification | Iterates through user input, replacing letters with `@`, digits with `#`, and any other character with `$`. |

---

## 💻 Installation

**1. Clone the repository**
```bash
git clone https://github.com/anshukumar146/github.git
cd github/C_language/02_Arrays_strings_pointers
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
gcc 07_Bubble_sort.c -o bubble_sort
./bubble_sort
```

On Windows (Command Prompt):
```bash
gcc 07_Bubble_sort.c -o bubble_sort.exe
bubble_sort.exe
```

Repeat this pattern for any file in the folder — just swap the filename.

---

## 🧑‍💻 Usage

1. Compile the desired `.c` file using GCC.
2. Run the generated executable.
3. Follow the prompts — enter array sizes, elements, strings, or menu selections as requested.
4. View the result printed directly in the terminal.

**Example — Anagram Checker (`13_Anagram.c`):**
```
Enter first string: listen
Enter second string: silent
Valid Anagram
```

**Example — Character Replacer (`18_replace_all_...c`):**
```
enter a string:
Hello123!
$$$$$###$
```
*(Note: input handling replaces letters with @, digits with #, and symbols with $ — actual letter output follows the same rule as digits/symbols in the source.)*

---

## 🖼️ Screenshots

## Output Screenshot
(Add screenshot here)

---

## 🎥 Demo Video

(Add video/GIF here)

---

## 📊 Results

Each program produces deterministic console output based on user input:

- Array programs print sums, sorted sequences, reversed arrays, or largest/smallest values.
- Matrix programs print computed sums, products, diagonals, or NULL/Identity classification.
- String programs print lengths, reversed strings, palindrome/anagram verdicts, or transformed text.
- The vocabulary search program prints whether the entered word was found in the list.

---

## 🚀 Future Improvements

- Replace fixed-size matrices (`3x3`) with fully dynamic, user-defined dimensions
- Add input validation for array sizes and matrix dimensions
- Refactor repeated array-input logic into reusable helper functions
- Expand the Japanese vocabulary search to include all 76 stored words (currently only the first 15 are searched)
- Add a unified menu program to launch any exercise from one entry point
- Introduce basic unit tests for core algorithms (bubble sort, anagram check, palindrome check)

---

## 🎓 Learning Outcomes

By studying and building this project, you will learn:

- Declaring, traversing, and manipulating 1D and 2D arrays
- Pointer arithmetic and pointer-based array/string access
- Implementing classic algorithms (Bubble Sort, matrix multiplication)
- Manual string processing without relying on `<string.h>` helpers
- Passing pointers to functions for multiple return values (output parameters)
- Character classification and frequency-counting techniques
- Designing menu-driven console programs with `switch-case`

---

## 🧩 Skills Demonstrated

- Arrays & Multi-dimensional Data Structures
- Pointer Arithmetic & Memory-Level Thinking
- String Algorithms & Character Processing
- Algorithm Implementation (Sorting, Searching, Matrix Math)
- Function Design with Pointer Parameters
- Menu-Driven Program Design
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

- The C Standard Library documentation for reference on `stdio.h`, `string.h`, and `ctype.h`
- *Minna no Nihongo* Lessons 1 & 2, the source material for the vocabulary search program
- Classic CS curricula that inspired these canonical array/string/pointer exercises
- The open-source community for encouraging clean, well-documented learning repositories

---

<div align="center">

⭐ If you found this repository helpful, consider giving it a star!

</div>
