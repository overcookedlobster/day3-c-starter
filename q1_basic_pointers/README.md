# Exercise 1: Basic Pointer Operations

## Objective
Learn the fundamentals of pointer operations in C:
- Using the address-of operator (`&`)
- Dereferencing pointers (`*`)
- Modifying values through pointers

This exercise simulates basic hardware sensor data manipulation using pointers.

## Instructions
1. Compile with debug symbols: `gcc -Wall -Wextra -std=c99 -g -o pointers pointers.c`
2. Run the program: `./pointers`
3. Observe the output - you'll see failures due to pointer bugs.
4. Fix the TODOs in `pointers.c`:
   - In `update_temperature`: Use `*temp_ptr = new_value;` instead of `temp_ptr = &new_value;`
   - In `calculate_double`: Use `return (*value_ptr) * 2;` instead of `return value_ptr * 2;`
5. Recompile and run: `./pointers` should now show all PASS ✓
6. Run the autograder tests: `make test`

## Common Pointer Mistakes to Avoid
- **Assignment vs. Dereference**: `temp_ptr = &new_value;` changes what the pointer points to, but doesn't modify the original variable. Use `*temp_ptr = new_value;` to change the value at the address.
- **Dereferencing**: Always use `*` to access the value a pointer points to. `value_ptr * 2` tries to multiply the pointer address by 2, which is wrong.

## Expected Output After Fixes
```
Basic Pointer Operations Exercise

