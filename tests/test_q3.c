/*
 * Unit test for Q3: Sum Array with Pointers
 * Tests the sum_array function using pointer arithmetic
 */

#include "sum_array.h"
#include <stdio.h>

int test_basic_sum() {
  int arr[4] = {1, 2, 3, 4};
  return (sum_array(arr, 4) == 10);
}

int test_single_element() {
  int arr[1] = {42};
  return (sum_array(arr, 1) == 42);
}

int test_with_zeros() {
  int arr[5] = {1, 0, 2, 0, 3};
  return (sum_array(arr, 5) == 6);
}

int test_negative_numbers() {
  int arr[4] = {-1, -2, 3, 4};
  return (sum_array(arr, 4) == 4);
}

int test_all_negative() {
  int arr[3] = {-5, -10, -15};
  return (sum_array(arr, 3) == -30);
}

int test_large_array() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  return (sum_array(arr, 10) == 55);
}

int main() {
  int passed = 0;
  int total = 6;

  printf("Testing Q3: Sum Array\n");
  printf("--------------------\n");

  if (test_basic_sum()) {
    printf("✓ Test 1: Basic sum [1,2,3,4] = 10\n");
    passed++;
  } else {
    printf("✗ Test 1: Basic sum [1,2,3,4]\n");
  }

  if (test_single_element()) {
    printf("✓ Test 2: Single element [42] = 42\n");
    passed++;
  } else {
    printf("✗ Test 2: Single element [42]\n");
  }

  if (test_with_zeros()) {
    printf("✓ Test 3: Array with zeros [1,0,2,0,3] = 6\n");
    passed++;
  } else {
    printf("✗ Test 3: Array with zeros\n");
  }

  if (test_negative_numbers()) {
    printf("✓ Test 4: Mixed negatives [-1,-2,3,4] = 4\n");
    passed++;
  } else {
    printf("✗ Test 4: Mixed negatives\n");
  }

  if (test_all_negative()) {
    printf("✓ Test 5: All negative [-5,-10,-15] = -30\n");
    passed++;
  } else {
    printf("✗ Test 5: All negative\n");
  }

  if (test_large_array()) {
    printf("✓ Test 6: Large array [1..10] = 55\n");
    passed++;
  } else {
    printf("✗ Test 6: Large array\n");
  }

  printf("--------------------\n");
  printf("Passed: %d/%d tests\n", passed, total);

  return (passed == total) ? 0 : 1;
}
