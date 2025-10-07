#include <stdio.h>
#include "../q2_pointer_functions/swap.h"

int main() {
    int passed = 0;
    int total = 6;

    // Test swap_values with positive numbers
    int a1 = 1, b1 = 2;
    swap_values(&a1, &b1);
    if (a1 == 2 && b1 == 1) passed++;

    // Test swap with negatives
    int a2 = -5, b2 = 3;
    swap_values(&a2, &b2);
    if (a2 == 3 && b2 == -5) passed++;

    // Test swap with same values
    int a3 = 10, b3 = 10;
    swap_values(&a3, &b3);
    if (a3 == 10 && b3 == 10) passed++;

    // Test increment_both with positives
    int x1 = 5, y1 = 7;
    increment_both(&x1, &y1);
    if (x1 == 6 && y1 == 8) passed++;

    // Test with zeros
    int x2 = 0, y2 = 0;
    increment_both(&x2, &y2);
    if (x2 == 1 && y2 == 1) passed++;

    // Test with negatives
    int x3 = -2, y3 = 1;
    increment_both(&x3, &y3);
    if (x3 == -1 && y3 == 2) passed++;

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

