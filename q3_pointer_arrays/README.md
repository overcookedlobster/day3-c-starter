# Exercise 3: Pointers and Arrays

## Objective
Learn how arrays and pointers are related in C:
- Array names decay to pointers to their first element
- Pointer arithmetic to traverse arrays
- Avoiding buffer overflows with proper bounds checking

This exercise simulates processing sensor data arrays from hardware.

## Instructions
1. Compile with debug symbols: `gcc -Wall -Wextra -std=c99 -g -o array_ops array_ops.c`
2. Run the program: `./array_ops`
3. Observe the failures - sum will be wrong due to out-of-bounds, max will skip elements.
4. Fix the TODOs in `array_ops.c`:
   - In `sum_array`: Change loop to `for (int i = 0; i < size; i++)` (remove <=)
   - In `find_max`: Change the loop to increment ptr one by one: `ptr++;` inside a loop from 0 to size-1, or use `for (int i = 1; i < size; i++) { ptr++; if (*ptr > max) max = *ptr; }`
5. Recompile and run: `./array_ops` should show all PASS ✓
6. Run the autograder tests: `make test`

## Key Concepts
- **Array-Pointer Equivalence**: `arr[i]` is the same as `*(arr + i)`
- **Pointer Arithmetic**: `ptr++` moves to the next element (adds sizeof(type))
- **Bounds Checking**: Always ensure `i < size`, never `i <= size` for 0-based indexing

## Common Mistakes
- **Off-by-One Errors**: `i <= size` accesses arr[size] which is out of bounds
- **Wrong Pointer Increment**: `ptr += i` jumps i steps, skipping elements
- **No Initialization**: Always initialize max with a valid starting value

## Expected Output After Fixes
```
Pointers and Arrays Exercise

