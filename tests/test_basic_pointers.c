#include <stdio.h>
#include "../q1_basic_pointers/pointers.h"

int main() {
    int passed = 0;
    int total = 6;

    // Test update_temperature with different values
    float temp1 = 25.0f;
    update_temperature(&temp1, 30.0f);
    if (temp1 == 30.0f) passed++;

    float temp2 = 100.0f;
    update_temperature(&temp2, 0.0f);
    if (temp2 == 0.0f) passed++;

    // Test with negative values
    float temp3 = -10.0f;
    update_temperature(&temp3, 20.0f);
    if (temp3 == 20.0f) passed++;

    // Test calculate_double with positive
    int val1 = 5;
    if (calculate_double(&val1) == 10) passed++;

    // Test with zero
    int val2 = 0;
    if (calculate_double(&val2) == 0) passed++;

    // Test with negative
    int val3 = -3;
    if (calculate_double(&val3) == -6) passed++;

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

