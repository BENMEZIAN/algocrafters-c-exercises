# AlgoCrafters — C Programming Exercises

This repository contains solutions to the five beginner challenges from the **Practice Time: C Programming Exercises** post.

## Exercises

1. `01_arithmetic_operators.c` — sum, difference, product, integer quotient, and remainder.
2. `02_positive_negative_zero.c` — classify an integer as positive, negative, or zero.
3. `03_range_check.c` — check whether a value is in the inclusive range 10–100 using `&&`.
4. `04_switch_calculator.c` — a simple `switch`-based calculator for `+`, `-`, `*`, and `/`.
5. `05_multiplication_table.c` — print a multiplication table from 1 to 10 using a `for` loop.

## Compile and run

With GCC installed, open a terminal in this folder and compile each file separately:

```bash
gcc 01_arithmetic_operators.c -o arithmetic
./arithmetic
```

Replace the source filename and output name to run another exercise. On Windows, the executable can be run as `arithmetic.exe`.

Each `.c` file has its own `main()` function, so compile **one file at a time**.

## Notes

- Exercise 1 uses integer division because both inputs are integers.
- Division and remainder are checked to avoid dividing by zero.
- The calculator uses `double` values, so it supports decimal inputs.
- These are example solutions for learning. Try solving each challenge yourself before reviewing the code.

Created for the AlgoCrafters C programming learning series.
