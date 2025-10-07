#ifndef POINTERS_H
#define POINTERS_H

/**
 * Updates a temperature value using a pointer.
 * @param temp_ptr Pointer to the temperature to update
 * @param new_value The new temperature value
 */
void update_temperature(float *temp_ptr, float new_value);

/**
 * Calculates double the value pointed to by value_ptr.
 * @param value_ptr Pointer to the integer value
 * @return Double the value at value_ptr
 */
int calculate_double(int *value_ptr);

#endif

