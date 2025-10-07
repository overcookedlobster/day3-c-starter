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
    // TODO: Debug this function using GDB - it doesn't update the temperature correctly
    temp_ptr = &new_value;
}

int calculate_double(int *value_ptr) {
    // TODO: Debug this function using GDB - it doesn't calculate correctly
    return value_ptr * 2;
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

