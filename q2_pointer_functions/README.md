
Test 1: Swap Values
Before swap - x: 5, y: 10
After swap - x: 10, y: 5
✓ PASS

Test 2: Increment Both
Before increment - x: 3, y: 7
After increment - x: 4, y: 8
✓ PASS
```

## Debugging with GDB
1. `gdb ./swap`
2. `break swap_values`
3. `run`
4. `print a` (should show address after fix)
5. `print *a` (shows value)
6. Step through to verify swap logic.

## Autograding
Unit tests will call your functions with various inputs and verify the modifications.

