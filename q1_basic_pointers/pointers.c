/*
 * Day 3 Exercise 1: Basic Pointer Operations
 *
 * TODO: Fix the pointer operations in the functions below.
 * This exercise teaches you how to:
 * - Use the address-of operator (&)
 * - Dereference pointers (*)
 * - Modify values through pointers
 *
 * Compile with: gcc -Wall -Wextra -std=c99 -g -o pointers pointers.c
 */

#include <stdio.h>
#include "pointers.h"

void update_temperature(float *temp_ptr, float new_value) {
    // TODO: Fix this function to actually update the value at temp_ptr
    // Hint: You need to dereference the pointer to modify the value it points to
    temp_ptr = &new_value;  // BUG: This just changes where temp_ptr points, not the value
}

int calculate_double(int *value_ptr) {
    // TODO: Fix this function to return double the value pointed to by value_ptr
    // Hint: Dereference value_ptr first, then multiply by 2
    return value_ptr * 2;  // BUG: Can't multiply a pointer by 2, need to dereference first
}

#ifndef UNIT_TEST
int main(void) {
    printf("Basic Pointer Operations Exercise\n");
    printf("==================================\n\n");

    // Test 1: Update temperature
    float temp = 25.0f;
    printf("Test 1: Update Temperature\n");
    printf("Original temperature: %.1f°C\n", temp);
    update_temperature(&temp, 30.0f);
    printf("After update: %.1f°C\n", temp);
    if (temp == 30.0f) {
        printf("✓ PASS\n\n");
    } else {
        printf("✗ FAIL (expected 30.0°C)\n\n");
    }

    // Test 2: Calculate double
    int value = 10;
    printf("Test 2: Calculate Double\n");
    printf("Original value: %d\n", value);
    int doubled = calculate_double(&value);
    printf("Doubled value: %d\n", doubled);
    if (doubled == 20) {
        printf("✓ PASS\n\n");
    } else {
        printf("✗ FAIL (expected 20)\n\n");
    }

    return 0;
}
#endif

