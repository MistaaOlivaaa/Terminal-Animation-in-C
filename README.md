# Bouncing Circle Simulation

This is a simple C program that simulates a bouncing circle within a terminal window. The circle moves around the screen, bouncing off the edges, and its movement is visualized using ANSI color codes.

## Features

- **Circle Movement**: The circle moves in a straight line and bounces off the edges of the terminal window.
- **ANSI Colors**: The circle is displayed using different ANSI color codes.
- **Smooth Animation**: The program includes a delay to create a smooth animation effect.

## Requirements

- A terminal that supports ANSI color codes.
- GCC or another C compiler to build the program.

## Building and Running

1. Clone the repository or download the source code.
      ```bash
      https://github.com/MistaaOlivaaa/Terminal-Animation-in-C.git
      cd ./Terminal-Animation-in-C
      code .
2. Compile the program using GCC:
   ```bash
        gcc -o bouncing_circle main.c -lm
        ./bouncing_circle
