/*
 * Unit test for Q5: Dynamic Array
 * Tests malloc, array filling, summing, and free
 */

#include <stdio.h>
#include <stdlib.h>

// Test helper function that mimics what students should implement
int test_dynamic_allocation(int n, int expected_sum) {
  int *arr = (int *)malloc(n * sizeof(int));
  if (arr == NULL) {
    return 0; // Allocation failed
  }

  // Fill array with values 1 to n
  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
  }

  // Calculate sum
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  free(arr);

  return (sum == expected_sum);
}

int test_small_array() {
  return test_dynamic_allocation(4, 10); // 1+2+3+4 = 10
}

int test_single_element() {
  return test_dynamic_allocation(1, 1); // Just 1
}

int test_medium_array() {
  return test_dynamic_allocation(10, 55); // 1+2+...+10 = 55
}

int test_larger_array() {
  return test_dynamic_allocation(100, 5050); // Sum of 1..100
}

int test_pointer_arithmetic() {
  int *arr = (int *)malloc(5 * sizeof(int));
  if (arr == NULL)
    return 0;

  // Test pointer arithmetic access
  for (int i = 0; i < 5; i++) {
    *(arr + i) = i * 2; // 0, 2, 4, 6, 8
  }

  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += *(arr + i);
  }

  free(arr);
  return (sum == 20); // 0+2+4+6+8 = 20
}

int main() {
  int passed = 0;
  int total = 5;

  printf("Testing Q5: Dynamic Array\n");
  printf("-------------------------\n");

  if (test_small_array()) {
    printf("✓ Test 1: Small array (n=4, sum=10)\n");
    passed++;
  } else {
    printf("✗ Test 1: Small array\n");
  }

  if (test_single_element()) {
    printf("✓ Test 2: Single element (n=1, sum=1)\n");
    passed++;
  } else {
    printf("✗ Test 2: Single element\n");
  }

  if (test_medium_array()) {
    printf("✓ Test 3: Medium array (n=10, sum=55)\n");
    passed++;
  } else {
    printf("✗ Test 3: Medium array\n");
  }

  if (test_larger_array()) {
    printf("✓ Test 4: Large array (n=100, sum=5050)\n");
    passed++;
  } else {
    printf("✗ Test 4: Large array\n");
  }

  if (test_pointer_arithmetic()) {
    printf("✓ Test 5: Pointer arithmetic with malloc\n");
    passed++;
  } else {
    printf("✗ Test 5: Pointer arithmetic\n");
  }

  printf("-------------------------\n");
  printf("Passed: %d/%d tests\n", passed, total);

  return (passed == total) ? 0 : 1;
}
