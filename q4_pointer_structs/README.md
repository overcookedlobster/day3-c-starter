# Exercise 4: Pointers to Structs

## Objective
Learn how to work with pointers to struct variables:
- Declaring pointers to structs
- Using the arrow operator (`->`) to access members
- Passing structs to functions by pointer (efficient)

This exercise simulates managing hardware sensor objects using struct pointers.

## Instructions
1. Compile with debug symbols: `gcc -Wall -Wextra -std=c99 -g -o struct_ops struct_ops.c`
2. Run the program: `./struct_ops`
3. Observe compilation errors or wrong outputs due to incorrect struct access.
4. Fix the TODOs in `struct_ops.c`:
   - In `initialize_sensor`: Use `sensor_ptr->id = id;`, `sensor_ptr->temperature = temp;`, `strcpy(sensor_ptr->status, "Active");`
   - In `update_status`: Use `strcpy(sensor_ptr->status, new_status);`
   - In `get_sensor_id`: Use `return sensor_ptr->id;`
5. Recompile and run: `./struct_ops` should show all PASS ✓
6. Run the autograder tests: `make test`

## Key Concepts
- **Struct Pointer Declaration**: `Sensor *sensor_ptr;`
- **Arrow Operator**: `sensor_ptr->member` is shorthand for `(*sensor_ptr).member`
- **Passing Structs**: Pass by pointer (`&sensor`) to avoid copying large structs
- **String Handling**: Use `strcpy` for char arrays in structs, but watch for buffer overflows

## Common Mistakes
- **Dot vs. Arrow**: Use `.` for direct struct access (`sensor.id`), `->` for pointers (`sensor_ptr->id`)
- **Missing Dereference**: `sensor_ptr.id` won't compile - need `->`
- **Forgetting Headers**: Need `#include <string.h>` for `strcpy` and `strcmp`

## Expected Output After Fixes
```
Pointers to Structs Exercise

