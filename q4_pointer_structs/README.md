
Test 1: Initialize Sensor
Sensor ID: 42
Temperature: 25.5°C
Status: Active
✓ PASS

Test 2: Update Status
Before update - Status: Inactive
After update - Status: Active
✓ PASS

Test 3: Get Sensor ID
Retrieved ID: 99
✓ PASS
```

## Debugging with GDB
1. `gdb ./struct_ops`
2. `break initialize_sensor`
3. `run`
4. `print sensor_ptr` (address)
5. `print sensor_ptr->id` (after fix, shows value)
6. Step through to verify member assignments

## Autograding
Unit tests will create Sensor structs, call your functions, and verify member values and return values.

