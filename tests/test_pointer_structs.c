#include <stdio.h>
#include <string.h>
#include "../q4_pointer_structs/struct_ops.h"

int main() {
    int passed = 0;
    int total = 6;

    // Test initialize_sensor
    Sensor s1;
    initialize_sensor(&s1, 42, 25.5f);
    if (s1.id == 42 && s1.temperature == 25.5f && strcmp(s1.status, "Active") == 0) passed++;

    // Test with different values
    Sensor s2;
    initialize_sensor(&s2, 100, -10.0f);
    if (s2.id == 100 && s2.temperature == -10.0f && strcmp(s2.status, "Active") == 0) passed++;

    // Test update_status
    Sensor s3 = {1, 30.0f, "Inactive"};
    update_status(&s3, "Active");
    if (strcmp(s3.status, "Active") == 0) passed++;

    // Test update with longer status
    Sensor s4 = {2, 20.0f, "OK"};
    update_status(&s4, "Maintenance");
    if (strcmp(s4.status, "Maintenance") == 0) passed++;

    // Test get_sensor_id
    Sensor s5 = {99, 15.0f, "Active"};
    if (get_sensor_id(&s5) == 99) passed++;

    // Test with different ID
    Sensor s6 = {7, 40.0f, "Inactive"};
    if (get_sensor_id(&s6) == 7) passed++;

    printf("passed: %d\n", passed);
    printf("total tests: %d\n", total);

    if (passed == total) {
        printf("✓ all tests passed!\n");
        return 0;
    } else {
        printf("✗ Some tests failed!\n");
        return 1;
    }
}

