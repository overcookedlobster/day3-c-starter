
Test 1: Update Temperature
Original temperature: 25.0°C
After update: 30.0°C
✓ PASS

Test 2: Calculate Double
Original value: 10
Doubled value: 20
✓ PASS
```

## Testing with GDB (Optional)
If you want to debug:
1. `gdb ./pointers`
2. `break update_temperature`
3. `run`
4. `print temp_ptr` (should show address)
5. `print *temp_ptr` (should show the value)
6. `next` to step through and see the bug

## Autograding
The unit tests in `tests/test_basic_pointers` will verify your fixes by calling the functions with various inputs and checking outputs.

