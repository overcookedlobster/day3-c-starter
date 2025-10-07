# Day 3: Mastering Pointers in C for Hardware Programming

This repository contains beginner-friendly exercises for learning C pointers in the context of hardware programming and validation. Pointers are essential for efficient memory management, passing data to functions, and working with hardware registers and sensor data.

## Why Pointers Matter in Hardware Programming
- **Memory Efficiency**: Direct access to memory-mapped I/O registers
- **Function Parameters**: Modify hardware state without copying large data structures
- **Dynamic Allocation**: Manage variable-sized sensor arrays or register maps
- **Performance**: Avoid unnecessary data copying in real-time systems

## Structure
- `q1_basic_pointers/`: Basic pointer operations (address-of, dereference)
- `q2_pointer_functions/`: Using pointers for pass-by-reference in functions
- `q3_pointer_arrays/`: Pointer arithmetic with arrays (sensor data processing)
- `q4_pointer_structs/`: Pointers to structs (hardware sensor objects)
- `tests/`: Automated unit tests for autograding
- `Makefile`: Build all exercises and run tests

## Setup
1. Clone this repository: `git clone <repo-url>`
2. Install dependencies: `sudo apt-get install gcc make gdb`
3. Build everything: `make all`
4. Run individual exercises from their directories or use `make test` for autograding

## Exercises Overview

### Q1: Basic Pointer Operations
- **Focus**: `&` (address-of), `*` (dereference), modifying via pointers
- **Hardware Context**: Updating sensor readings directly in memory
- **Files**: `pointers.c`, `pointers.h`
- **Run**: `cd q1_basic_pointers && gcc -g pointers.c -o pointers && ./pointers`

### Q2: Pointers and Functions
- **Focus**: Pass-by-reference, swap function, modifying multiple variables
- **Hardware Context**: Calibrating multiple sensors in one function call
- **Files**: `swap.c`, `swap.h`
- **Run**: `cd q2_pointer_functions && gcc -g swap.c -o swap && ./swap`

### Q3: Pointers and Arrays
- **Focus**: Array-pointer equivalence, pointer arithmetic, bounds checking
- **Hardware Context**: Processing arrays of sensor measurements
- **Files**: `array_ops.c`, `array_ops.h`
- **Run**: `cd q3_pointer_arrays && gcc -g array_ops.c -o array_ops && ./array_ops`

### Q4: Pointers to Structs
- **Focus**: Struct pointers, `->` operator, efficient struct passing
- **Hardware Context**: Managing sensor objects with multiple attributes
- **Files**: `struct_ops.c`, `struct_ops.h`
- **Run**: `cd q4_pointer_structs && gcc -g struct_ops.c -o struct_ops && ./struct_ops`

## Building and Testing
```bash
# Clean previous builds
make clean

# Build all exercises and tests
make all

# Run autograder tests
make test

# Run individual test
./tests/test_basic_pointers
```

## Debugging with GDB
Each exercise includes GDB debugging instructions in the README files. Common workflow:
```bash
gdb ./q1_basic_pointers/pointers
(gdb) break update_temperature
(gdb) run
(gdb) print *temp_ptr  # Inspect pointer value
(gdb) next            # Step through code
(gdb) continue
(gdb) quit
```

## Autograding Setup
This repository is configured for GitHub Classroom:
- **Workflow**: `.github/workflows/classroom.yml` - Runs tests on push
- **Tests**: 4 comprehensive test suites (25 points each, total 100)
- **Expected**: Students fix TODOs, push changes, autograder verifies fixes

## Compilation Flags
- `-Wall -Wextra`: Enable all warnings (fix any warnings!)
- `-std=c99`: C99 standard (modern but compatible)
- `-g`: Debug symbols for GDB
- Tests use `-DUNIT_TEST` to exclude main() functions

## Learning Progression
1. **Basics** (Q1): Understand what pointers are and how to use basic operations
2. **Functions** (Q2): See why pointers solve pass-by-value limitations
3. **Arrays** (Q3): Learn the intimate relationship between arrays and pointers
4. **Structs** (Q4): Apply pointers to real-world data structures like hardware sensors

## Tips for Success
- **Compile Often**: Use `gcc -Wall` to catch errors early
- **Test Incrementally**: Fix one function at a time, test immediately
- **Use GDB**: Great for understanding pointer values and flow
- **Read Errors**: Compiler errors about "incompatible pointer types" usually mean missing `*` or `&`
- **Avoid Common Pitfalls**: Don't dereference NULL, check bounds, free allocated memory

## Grading Criteria
- **Correctness** (80%): All test cases pass
- **Style** (10%): No warnings, clean code
- **Documentation** (10%): Functions documented, TODOs completed

## Resources
- [K&R C Book](https://en.wikipedia.org/wiki/The_C_Programming_Language) - Chapter 5 on pointers
- [Beej's Guide to C](https://beej.us/guide/bgc/) - Excellent pointers section
- [GDB Quickstart](https://sourceware.org/gdb/current/onlinedocs/gdb.html/) - For debugging help
- Online compilers: [Godbolt](https://godbolt.org/) for quick testing

Happy pointer debugging! Remember: pointers are powerful but require care - one wrong dereference can crash your program.

---
*This tutorial is designed for complete beginners. If you get stuck, ask your instructor or TA!*

