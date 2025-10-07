/*
 * Day 3 Exercise 3: Pointers and Arrays
 *
 * TODO: Fix the array operations using pointer arithmetic.
 * This exercise teaches you how to:
 * - Treat arrays as pointers to their first element
 * - Use pointer arithmetic to traverse arrays
 * - Avoid out-of-bounds access
 *
 * Compile with: gcc -Wall -Wextra -std=c99 -g -o array_ops array_ops.c
 */

#include <stdio.h>
#include "array_ops.h"

int sum_array(int arr[], int size) {
    // TODO: Fix this function to correctly sum the array using pointer arithmetic
    // Hint: Use a pointer to the array and increment it in a loop
    int *ptr = arr;
    int sum = 0;
    for (int i = 0; i < size; i++) {  // FIXED: Changed <= to < to avoid out-of-bounds
        sum += *ptr;  // This is correct, but loop condition is wrong
        ptr++;  // Correct pointer arithmetic
    }
    return sum;
}

int find_max(int arr[], int size) {
    // TODO: Fix this function to find the maximum value using pointers
    // Hint: Initialize max with first element, then compare with subsequent elements
    int *ptr = arr;
    int max = *ptr;  // Good start
    for (int i = 1; i < size; i++) {
        ptr++;  // FIXED: Increment pointer one by one
        if (*ptr > max) {
            max = *ptr;
        }
    }
    return max;
}

#ifndef UNIT_TEST
int main(void) {
    printf("Pointers and Arrays Exercise\n");
    printf("=============================\n\n");

    // Test 1: Sum array
    int arr1[5] = {1, 2, 3, 4, 5};
    printf("Test 1: Sum Array\n");
    printf("Array: [1, 2, 3, 4, 5]\n");
    int sum = sum_array(arr1, 5);
    printf("Sum: %d\n", sum);
    if (sum == 15) {
        printf("✓ PASS\n\n");
    } else {
        printf("✗ FAIL (expected 15)\n\n");
    }

    // Test 2: Find max
    int arr2[4] = {10, 30, 20, 40};
    printf("Test 2: Find Max\n");
    printf("Array: [10, 30, 20, 40]\n");
    int max_val = find_max(arr2, 4);
    printf("Max: %d\n", max_val);
    if (max_val == 40) {
        printf("✓ PASS\n\n");
    } else {
        printf("✗ FAIL (expected 40)\n\n");
    }

    return 0;
}
#endif

