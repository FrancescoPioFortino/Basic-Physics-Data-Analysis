# C-Basic-Physics-Data-Analysis

A modular command-line tool written in C for basic statistical analysis of experimental physics data.

## Overview
This project was developed as a foundational tool for a 1st-year Physics Laboratory course. It takes an array of floating-point measurements and calculates fundamental statistical quantities. Instead of a monolithic script, the project demonstrates a modular software architecture separating logic and interfaces.

## Features
- **Modular Design:** Clean separation using header (`.h`) and source (`.c`) files.
- **Core Statistical Calculations:** Computes the mean , maximum and minimum values of the dataset.
- **Standard Error of the Mean :** Implements the formula for the statistical error (standard deviation of the mean).
- **Custom Numerical Algorithm:** Instead of relying on the  `<math.h>` library for square roots, the standard error implements a custom function using the Newton-Raphson method.

## How to Compile and  Run
You must have a C compiler (like GCC) installed. Run the following command in your terminal to compile the source files and execute the program:
```bash
gcc main.c functions.c -o basic_data_analysis
./basic_data_analysis
```
