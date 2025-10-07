# Makefile for Day 3 C Pointers Implementation Exercises

CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
TARGETS = q1_basic_float_pointer/basic q2_swap_function/swap q3_sum_array/sum_array q4_student_struct/student q5_dynamic_array/dynamic

all: $(TARGETS)
	@echo "✓ All Day 3 pointer implementation exercises compiled successfully!"

# Build individual exercise targets
q1_basic_float_pointer/basic: q1_basic_float_pointer/basic.c
	$(CC) $(CFLAGS) -o $@ $<

q2_swap_function/swap: q2_swap_function/swap.c q2_swap_function/swap.h
	$(CC) $(CFLAGS) -o $@ $<

q3_sum_array/sum_array: q3_sum_array/sum_array.c q3_sum_array/sum_array.h
	$(CC) $(CFLAGS) -o $@ $<

q4_student_struct/student: q4_student_struct/student.c q4_student_struct/student.h
	$(CC) $(CFLAGS) -o $@ $<

q5_dynamic_array/dynamic: q5_dynamic_array/dynamic.c
	$(CC) $(CFLAGS) -o $@ $<

test: $(TARGETS)
	@echo "Running Day 3 Pointers implementation tests..."
	@echo "Test 1: Basic Float Pointer"
	@./q1_basic_float_pointer/basic | grep -q "Correct implementation! ✓" && echo "Q1: ✓ PASS" || echo "Q1: ✗ FAIL"
	@echo "Test 2: Swap Function"
	@./q2_swap_function/swap | grep -q "Swap successful! ✓" && echo "Q2: ✓ PASS" || echo "Q2: ✗ FAIL"
	@echo "Test 3: Sum Array"
	@./q3_sum_array/sum_array | grep -q "Sum correct! ✓" && echo "Q3: ✓ PASS" || echo "Q3: ✗ FAIL"
	@echo "Test 4: Student Struct"
	@./q4_student_struct/student | grep -q "Grade updated! ✓" && echo "Q4: ✓ PASS" || echo "Q4: ✗ FAIL"
	@echo "Test 5: Dynamic Array"
	@echo "4" | ./q5_dynamic_array/dynamic | grep -q "Sum: 10" && echo "Q5: ✓ PASS" || echo "Q5: ✗ FAIL"
	@echo "Test run complete. Check above for PASS/FAIL."

clean:
	rm -f $(TARGETS) *.o *~

.PHONY: all clean test

