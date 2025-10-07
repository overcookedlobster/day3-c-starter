
Test 1: Sum Array
Array: [1, 2, 3, 4, 5]
Sum: 15
✓ PASS

Test 2: Find Max
Array: [10, 30, 20, 40]
Max: 40
✓ PASS
```

## Debugging with GDB
1. `gdb ./array_ops`
2. `break sum_array`
3. `run`
4. `print size` (should be 5)
5. `print i` in loop to see when it goes out of bounds
6. `print *ptr` to inspect current element

## Autograding
Unit tests will verify sum and max calculations with various array sizes and values, including edge cases (empty arrays, single elements).

