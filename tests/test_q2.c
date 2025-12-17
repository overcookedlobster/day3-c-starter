/*
 * Unit test for Q2: Swap Function
 * Tests the swap function implementation
 */

#include "swap.h"
#include <stdio.h>

int test_positive_swap() {
  int a = 1, b = 2;
  swap(&a, &b);
  return (a == 2 && b == 1);
}

int test_negative_swap() {
  int a = -5, b = 10;
  swap(&a, &b);
  return (a == 10 && b == -5);
}

int test_zero_swap() {
  int a = 0, b = 100;
  swap(&a, &b);
  return (a == 100 && b == 0);
}

int test_same_values() {
  int a = 42, b = 42;
  swap(&a, &b);
  return (a == 42 && b == 42);
}

int test_large_numbers() {
  int a = 1000000, b = -1000000;
  swap(&a, &b);
  return (a == -1000000 && b == 1000000);
}

int main() {
  int passed = 0;
  int total = 5;

  printf("Testing Q2: Swap Function\n");
  printf("-------------------------\n");

  if (test_positive_swap()) {
    printf("✓ Test 1: Swap positive numbers (1, 2)\n");
    passed++;
  } else {
    printf("✗ Test 1: Swap positive numbers (1, 2)\n");
  }

  if (test_negative_swap()) {
    printf("✓ Test 2: Swap with negative (-5, 10)\n");
    passed++;
  } else {
    printf("✗ Test 2: Swap with negative (-5, 10)\n");
  }

  if (test_zero_swap()) {
    printf("✓ Test 3: Swap with zero (0, 100)\n");
    passed++;
  } else {
    printf("✗ Test 3: Swap with zero (0, 100)\n");
  }

  if (test_same_values()) {
    printf("✓ Test 4: Swap same values (42, 42)\n");
    passed++;
  } else {
    printf("✗ Test 4: Swap same values (42, 42)\n");
  }

  if (test_large_numbers()) {
    printf("✓ Test 5: Swap large numbers\n");
    passed++;
  } else {
    printf("✗ Test 5: Swap large numbers\n");
  }

  printf("-------------------------\n");
  printf("Passed: %d/%d tests\n", passed, total);

  return (passed == total) ? 0 : 1;
}
