/*
 * Day 3 Exercise 2: Pointers and Functions (Pass by Reference)
 *
 * TODO: Fix the functions to properly modify variables using pointers.
 * This exercise teaches you how to:
 * - Pass pointers to functions to modify original variables
 * - Implement swap functionality using pointers
 * - Avoid pass-by-value limitations
 *
 * Compile with: gcc -Wall -Wextra -std=c99 -g -o swap swap.c
 */

#include <stdio.h>
#include "swap.h"

void swap_values(int a, int b) {
    // TODO: Fix this function to actually swap the values of a and b
    // Hint: Change the parameters to pointers: int *a, int *b
    // Then use a temp variable and dereference: int temp = *a; *a = *b; *b = temp;
    int temp = a;
    a = b;
    b = temp;  // BUG: This only swaps local copies, not the original variables
}

void increment_both(int x, int y) {
    // TODO: Fix this function to increment both x and y by 1
    // Hint: Use pointers to modify the original values
    x++;  // BUG: Only increments local copy
    y++;  // BUG: Only increments local copy
}

#ifndef UNIT_TEST
int main(void) {
    printf("Pointers and Functions Exercise\n");
    printf("================================\n\n");

    // Test 1: Swap values
    int x = 5, y = 10;
    printf("Test 1: Swap Values\n");
    printf("Before swap - x: %d, y: %d\n", x, y);
    swap_values(x, y);
    printf("After swap - x: %d, y: %d\n", x, y);
    if (x == 10 && y == 5) {
        printf("✓ PASS\n\n");
    } else {
        printf("✗ FAIL (values not swapped)\n\n");
    }

    // Test 2: Increment both
    x = 3; y = 7;
    printf("Test 2: Increment Both\n");
    printf("Before increment - x: %d, y: %d\n", x, y);
    increment_both(x, y);
    printf("After increment - x: %d, y: %d\n", x, y);
    if (x == 4 && y == 8) {
        printf("✓ PASS\n\n");
    } else {
        printf("✗ FAIL (values not incremented)\n\n");
    }

    return 0;
}
#endif

