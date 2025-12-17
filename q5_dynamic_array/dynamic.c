/*
 * Day 3 Exercise 5: Dynamic Memory with Pointers
 *
 * Implement dynamic array allocation and sum as described in tutorial Step 5.
 *
 * TODO:
 * 1. Include <stdlib.h> for malloc/free
 * 2. In main:
 *    - Read size N from input (scanf("%d", &n))
 *    - Allocate int *arr = malloc(n * sizeof(int))
 *    - Check if arr == NULL, if so print "Allocation failed" and exit 1
 *    - Fill arr[i] = i+1 for i=0 to n-1 (use loop)
 *    - Sum the array (can use loop with *(arr + i) or pointer arithmetic)
 *    - Print "Sum: %d\n", sum
 *    - free(arr)
 *
 * For testing, input will be "4", expected sum 10 (1+2+3+4).
 *
 * Expected output for n=4:
 * Sum: 10
 */

#include <stdio.h>
#include <stdlib.h> // TODO: Make sure this is included for malloc/free

int main() {
  int n = 0;

  // TODO: Read size from user input
  // scanf("%d", &n);

  // Remove this placeholder when you implement scanf above
  printf("Implement scanf to read n from input.\n");
  return 1;

  // TODO: Validate input
  // if (n <= 0) {
  //     printf("Invalid size.\n");
  //     return 1;
  // }

  // TODO: Allocate memory for n integers
  // int *arr = (int*)malloc(n * sizeof(int));

  // TODO: Check if allocation succeeded
  // if (arr == NULL) {
  //     printf("Allocation failed!\n");
  //     return 1;
  // }

  // TODO: Fill the array with values 1 to n
  // for (int i = 0; i < n; i++) {
  //     arr[i] = i + 1;
  // }

  // TODO: Calculate sum using pointer arithmetic or array indexing
  // int sum = 0;
  // for (int i = 0; i < n; i++) {
  //     sum += arr[i];  // or: sum += *(arr + i);
  // }

  // TODO: Print the sum
  // printf("Sum: %d\n", sum);

  // TODO: Free the allocated memory
  // free(arr);

  // return 0;  // Uncomment when implemented
}
