# Exercise 2: Pointers and Functions (Pass by Reference)

## Objective
Learn how to use pointers to enable functions to modify original variables (pass by reference in C).

This exercise simulates hardware calibration where functions need to update sensor values directly.

## Instructions
1. Compile with debug symbols: `gcc -Wall -Wextra -std=c99 -g -o swap swap.c`
2. Run the program: `./swap`
3. Observe the failures - the functions don't modify the original variables.
4. Fix the TODOs in `swap.c`:
   - Change `swap_values(int a, int b)` to `swap_values(int *a, int *b)`
   - Implement the swap using dereferencing: `int temp = *a; *a = *b; *b = temp;`
   - Change `increment_both(int x, int y)` to `increment_both(int *x, int *y)`
   - Use `*x++` and `*y++` (or `(*x)++; (*y)++;`)
5. Recompile and run: `./swap` should show all PASS ✓
6. Run the autograder tests: `make test`

## Key Concepts
- **Pass by Value**: C functions receive copies of arguments. Changes to parameters don't affect originals.
- **Pass by Reference**: Pass pointers (`&variable`) so the function can modify the original via dereferencing (`*ptr`).
- **Calling**: Always pass addresses: `swap_values(&x, &y);`

## Common Mistakes
- Forgetting to pass addresses in main: `swap_values(x, y);` → wrong type error.
- Forgetting to dereference in function: `*a = *b;` → type mismatch.
- Incrementing pointer instead of value: `x++` on pointer increments the address, not the value.

## Expected Output After Fixes
```
Pointers and Functions Exercise

