# Day 3: Mastering Pointers in C - Implementation Exercises

This repository contains a tutorial-style set of exercises for learning C pointers through hands-on implementation. Unlike debugging-focused approaches, you'll build pointer-based functions from scratch based on specifications. Each exercise builds on the previous one, starting from basics and progressing to dynamic memory.

Pointers are essential in C for efficient memory management, especially in hardware programming where you need to manipulate sensor data, registers, and dynamic structures without unnecessary copying.

## Tutorial Overview

Follow the steps below to understand pointers, then implement the exercises in the `q1` to `q5` directories. Each exercise includes:
- A starter `.c` file with TODOs and a main() to test your implementation.
- A header `.h` file with function prototypes.
- Instructions in the exercise README.
- Unit tests in `tests/` to verify your code.

### Prerequisites
- Basic C knowledge (variables, functions, loops, printf).
- Compiler: `gcc` (install with `sudo apt install gcc make`).
- Build: `make all` to compile exercises; `make test` to run autograder.

### Step 1: What Are Pointers? (The Basics)
Pointers are variables that store **memory addresses** of other variables. Think of them as "arrows" pointing to data in memory.
- **Why use them?** To modify variables indirectly (e.g., pass by reference in functions), handle arrays efficiently, or manage dynamic memory.
- **Declaration**: `type *name;` (e.g., `int *p;` means "p is a pointer to an int").
- **Operators**:
  - `&`: Get the address of a variable (e.g., `&x`).
  - `*`: Dereference (access the value at the address).
**Example Code**:
```c
#include <stdio.h>
int main() {
    int x = 42; // A normal int variable
    int *p = &x; // p points to x's address
    printf("Value of x: %d\n", x); // 42
    printf("Address of x: %p\n", (void*)&x); // Some hex address, e.g., 0x7ffd12345678
    printf("Value of p (address): %p\n", (void*)p); // Same as above
    printf("Value at p (*p): %d\n", *p); // 42 (dereference)
    *p = 100; // Change x indirectly via p
    printf("New value of x: %d\n", x); // 100
    return 0;
}
```
**Key Pitfall**: Don't dereference uninitialized pointers (e.g., `int *p; printf("%d", *p);` → crash!).

### Step 2: Pointers and Functions (Pass by Reference)
C functions pass by value by default. Pointers let you modify originals.
**Example Code**:
```c
#include <stdio.h>
void increment(int *num) { // Takes a pointer
    (*num)++; // Dereference and increment
}
int main() {
    int value = 5;
    increment(&value); // Pass address
    printf("Value: %d\n", value); // 6
    return 0;
}
```

### Step 3: Pointers and Arrays
Arrays are contiguous memory; the array name is a pointer to the first element.
**Example Code**:
```c
#include <stdio.h>
int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr; // Same as &arr[0]
    printf("First element: %d\n", *p); // 10
    printf("Second: %d\n", *(p + 1)); // 20 (pointer arithmetic)
    printf("Third: %d\n", arr[2]); // 30 (array syntax == pointer syntax)
    // Modify via pointer
    *(p + 1) = 25;
    printf("New second: %d\n", arr[1]); // 25
    return 0;
}
```
**Key Pitfall**: Don't go out of bounds (e.g., `*(p + 3)` → undefined behavior).

### Step 4: Pointers to Structs
Structs group data; pointers to structs use `->` for dereferencing members.
**Example Code** (Simple struct, no nesting):
```c
#include <stdio.h>
typedef struct {
    int id;
    float temp;
} Chip;
void print_chip(Chip *c) {
    printf("ID: %d, Temp: %.1f\n", c->id, c->temp);
}
int main() {
    Chip my_chip = {1, 25.0};
    Chip *ptr = &my_chip;
    ptr->temp = 30.0; // Same as (*ptr).temp
    print_chip(ptr); // ID: 1, Temp: 30.0
    return 0;
}
```

### Step 5: Dynamic Memory (Intro to malloc/free)
For flexible sizes. Always check for NULL and free memory.
**Example Code**:
```c
#include <stdio.h>
#include <stdlib.h> // For malloc/free
int main() {
    int *arr = (int*)malloc(3 * sizeof(int)); // Allocate for 3 ints
    if (arr == NULL) { printf("Allocation failed!\n"); return 1; }
    arr[0] = 10; arr[1] = 20; arr[2] = 30;
    printf("Second: %d\n", *(arr + 1)); // 20
    free(arr); // Clean up
    return 0;
}
```
**Pitfall**: Forgetting free → memory leak. Dangling pointers after free.

## Exercises
Implement each exercise in its directory. Start with `cd q1_basic_float_pointer`, implement the TODOs, compile with `gcc -o basic basic.c`, run `./basic`, then `make test` for autograding.

- **Q1**: Basic float pointer (Step 1 exercise).
- **Q2**: Swap function (Step 2 exercise).
- **Q3**: Sum array with pointers (Step 3 exercise).
- **Q4**: Student struct update (Step 4 exercise).
- **Q5**: Dynamic array sum (Step 5 exercise).

## Building and Testing
```bash
make clean
make all    # Builds all exercises
make test   # Runs autograder (5 tests, 20 points each)
```

## Autograding
Configured for GitHub Classroom. Push your implementations to trigger tests verifying function correctness.

## Tips
- Compile often: `gcc -Wall basic.c -o basic`.
- Use the examples as guides, but implement from scratch.
- For Q5, include `<stdlib.h>` and handle malloc failure.
- No debugging needed—focus on correct implementation.

Complete all exercises to master pointers! If stuck, review the tutorial steps above.

