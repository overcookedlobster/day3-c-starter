#include <stdio.h>
#include "../q3_pointer_arrays/array_ops.h"

int main() {
    int passed = 0;
    int total = 8;

    // Test sum_array with positive numbers
    int arr1[3] = {1, 2, 3};
    if (sum_array(arr1, 3) == 6) passed++;

    // Test sum with zeros
    int arr2[2] = {0, 0};
    if (sum_array(arr2, 2) == 0) passed++;

    // Test sum with negatives
    int arr3[4] = {-1, -2, 3, 4};
    if (sum_array(arr3, 4) == 4) passed++;

    // Test sum single element
    int arr4[1] = {42};
    if (sum_array(arr4, 1) == 42) passed++;

    // Test find_max with positives
    int arr5[4] = {10, 30, 20, 40};
    if (find_max(arr5, 4) == 40) passed++;

    // Test find_max with negatives
    int arr6[3] = {-5, -1, -10};
    if (find_max(arr6, 3) == -1) passed++;

    // Test find_max single element
    int arr7[1] = {100};
    if (find_max(arr7, 1) == 100) passed++;

    // Test find_max all same
    int arr8[3] = {5, 5, 5};
    if (find_max(arr8, 3) == 5) passed++;

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

