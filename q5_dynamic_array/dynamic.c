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
// TODO: Include <stdlib.h>

int main() {
    int n;
    // TODO: scanf("%d", &n);

    // Placeholder n for testing
    n = 0; // Replace with actual read

    if (n <= 0) {
        printf("Invalid size. Use positive integer.\n");
        return 1;
    }

    // TODO: int *arr = malloc(n * sizeof(int));
    // if (arr == NULL) { printf("Allocation failed!\n"); return 1; }

    int *arr = NULL; // Placeholder

    // TODO: Fill array: for(int i = 0; i < n; i++) arr[i] = i + 1;

    // TODO: Sum: int sum = 0; for(int i = 0; i < n; i++) sum += arr[i];

    int sum = 0; // Placeholder

    printf("Sum: %d\n", sum);

    // TODO: free(arr);

    return 0;
}

