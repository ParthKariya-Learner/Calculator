# 🧮 Console Calculator in C

A simple console-based calculator application built using the C programming language. It supports basic arithmetic operations like addition, subtraction, multiplication, division, modulus, and exponentiation (power), with proper error handling and a menu-driven interface.

---

## ✨ Features

- Menu-driven interface for ease of use
- Supports:
  - Addition
  - Subtraction
  - Multiplication
  - Division (with zero-division handling)
  - Modulus (with zero-division handling)
  - Power (using `pow` from `<math.h>`)
- Input validation for invalid choices
- Graceful exit option

---

## 🛠️ How to Compile & Run

### ✅ Requirements:
- GCC or any C compiler
- Terminal or Command Prompt

### 🔧 Compilation:

```bash
gcc calc.c -o calculator -lm
./calculator

```
### 📋Sample Output
____________________________________
Welcome to our Calculator!
Choose one of the following options:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Exit
Enter your choice: 1

Please Enter the first Number: 10
Please Enter the second Number: 20
Your Result is: 30.000000

## 🚫Error Handling Examples

* Invalid menu choice:
        Invalid Menu Choice
* Division or modulus by zero:
        Invalid Argument: Division by zero
        Invalid Argument: Modulus by zero

## 👨‍💻Developer
Parth Kariya
