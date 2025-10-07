/*
 * Day 3 Exercise 4: Pointers to Structs
 *
 * TODO: Fix the struct operations using pointers to structs.
 * This exercise teaches you how to:
 * - Declare and use pointers to structs
 * - Access struct members via -> operator
 * - Pass structs to functions by pointer
 *
 * Compile with: gcc -Wall -Wextra -std=c99 -g -o struct_ops struct_ops.c
 */

#include <stdio.h>
#include "struct_ops.h"

void initialize_sensor(Sensor *sensor_ptr, int id, float temp) {
    // TODO: Fix this function to properly initialize the sensor struct
    // Hint: Use -> to access members through the pointer
    sensor_ptr.id = id;  // BUG: This won't compile - need sensor_ptr->id
    sensor_ptr->temperature = temp;  // This is correct, but first one is wrong
    strcpy(sensor_ptr.status, "Active");  // BUG: Need -> for status too
}

void update_status(Sensor *sensor_ptr, const char *new_status) {
    // TODO: Fix this function to update the status string
    // Hint: Use strcpy with -> to access the status member
    strcpy(sensor_ptr.status, new_status);  // BUG: Need sensor_ptr->status
}

int get_sensor_id(Sensor *sensor_ptr) {
    // TODO: Fix this function to return the sensor's ID
    // Hint: Use -> to access the id member
    return sensor_ptr.id;  // BUG: Need sensor_ptr->id
}

#ifndef UNIT_TEST
int main(void) {
    printf("Pointers to Structs Exercise\n");
    printf("===========================\n\n");

    // Test 1: Initialize sensor
    Sensor sensor1;
    printf("Test 1: Initialize Sensor\n");
    initialize_sensor(&sensor1, 42, 25.5f);
    printf("Sensor ID: %d\n", sensor1.id);
    printf("Temperature: %.1f°C\n", sensor1.temperature);
    printf("Status: %s\n", sensor1.status);
    if (sensor1.id == 42 && sensor1.temperature == 25.5f && strcmp(sensor1.status, "Active") == 0) {
        printf("✓ PASS\n\n");
    } else {
        printf("✗ FAIL (initialization incorrect)\n\n");
    }

    // Test 2: Update status
    Sensor sensor2 = {1, 30.0f, "Inactive"};
    printf("Test 2: Update Status\n");
    printf("Before update - Status: %s\n", sensor2.status);
    update_status(&sensor2, "Active");
    printf("After update - Status: %s\n", sensor2.status);
    if (strcmp(sensor2.status, "Active") == 0) {
        printf("✓ PASS\n\n");
    } else {
        printf("✗ FAIL (status not updated)\n\n");
    }

    // Test 3: Get sensor ID
    Sensor sensor3 = {99, 20.0f, "Active"};
    printf("Test 3: Get Sensor ID\n");
    int id = get_sensor_id(&sensor3);
    printf("Retrieved ID: %d\n", id);
    if (id == 99) {
        printf("✓ PASS\n\n");
    } else {
        printf("✗ FAIL (wrong ID returned)\n\n");
    }

    return 0;
}
#endif

