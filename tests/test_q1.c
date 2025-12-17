/*
 * Unit test for Q1: Basic Float Pointer
 * Tests that students correctly implement pointer basics
 */

#include <math.h>
#include <stdio.h>

// We'll test the student's understanding by checking if they can:
// 1. Create and use a pointer to a float
// 2. Modify the value through the pointer

int test_basic_pointer() {
  float temp = 25.5f;
  float *ptr = &temp;

  // Check initial value
  if (*ptr != 25.5f)
    return 0;

  // Modify through pointer
  *ptr = 30.0f;

  // Check if original variable changed
  if (temp != 30.0f)
    return 0;

  return 1;
}

int test_pointer_arithmetic() {
  float values[3] = {10.0f, 20.0f, 30.0f};
  float *ptr = values;

  if (*ptr != 10.0f)
    return 0;
  if (*(ptr + 1) != 20.0f)
    return 0;
  if (*(ptr + 2) != 30.0f)
    return 0;

  return 1;
}

int test_pointer_assignment() {
  float a = 5.0f;
  float b = 10.0f;
  float *ptr1 = &a;
  float *ptr2 = &b;

  *ptr1 = *ptr2; // a should now be 10.0f

  if (a != 10.0f)
    return 0;
  if (b != 10.0f)
    return 0;

  return 1;
}

int main() {
  int passed = 0;
  int total = 3;

  printf("Testing Q1: Basic Float Pointer\n");
  printf("--------------------------------\n");

  if (test_basic_pointer()) {
    printf("✓ Test 1: Basic pointer operations\n");
    passed++;
  } else {
    printf("✗ Test 1: Basic pointer operations\n");
  }

  if (test_pointer_arithmetic()) {
    printf("✓ Test 2: Pointer arithmetic\n");
    passed++;
  } else {
    printf("✗ Test 2: Pointer arithmetic\n");
  }

  if (test_pointer_assignment()) {
    printf("✓ Test 3: Pointer assignment\n");
    passed++;
  } else {
    printf("✗ Test 3: Pointer assignment\n");
  }

  printf("--------------------------------\n");
  printf("Passed: %d/%d tests\n", passed, total);

  return (passed == total) ? 0 : 1;
}
