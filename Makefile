# Makefile for Day 3 C Pointers Implementation Exercises

CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
TARGETS = q1_basic_float_pointer/basic q2_swap_function/swap q3_sum_array/sum_array q4_student_struct/student q5_dynamic_array/dynamic
TEST_TARGETS = tests/test_q2 tests/test_q3 tests/test_q4

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

# Build test executables - compile function implementations as object files first
q2_swap_function/swap_impl.o: q2_swap_function/swap.c q2_swap_function/swap.h
	$(CC) $(CFLAGS) -c -DTEST_MODE -o $@ q2_swap_function/swap.c

q3_sum_array/sum_array_impl.o: q3_sum_array/sum_array.c q3_sum_array/sum_array.h
	$(CC) $(CFLAGS) -c -DTEST_MODE -o $@ q3_sum_array/sum_array.c

q4_student_struct/student_impl.o: q4_student_struct/student.c q4_student_struct/student.h
	$(CC) $(CFLAGS) -c -DTEST_MODE -o $@ q4_student_struct/student.c

tests/test_q2: tests/test_q2.c q2_swap_function/swap_impl.o
	$(CC) $(CFLAGS) -o $@ $< q2_swap_function/swap_impl.o -Iq2_swap_function

tests/test_q3: tests/test_q3.c q3_sum_array/sum_array_impl.o
	$(CC) $(CFLAGS) -o $@ $< q3_sum_array/sum_array_impl.o -Iq3_sum_array

tests/test_q4: tests/test_q4.c q4_student_struct/student_impl.o
	$(CC) $(CFLAGS) -o $@ $< q4_student_struct/student_impl.o -Iq4_student_struct

test: $(TARGETS) $(TEST_TARGETS)
	@echo "Running Day 3 Pointers implementation tests..."
	@echo ""
	@echo "Test 1: Basic Float Pointer (20 points)"
	@./q1_basic_float_pointer/basic | grep -q "Correct implementation! ✓" && echo "Q1: ✓ PASS (20/20)" || echo "Q1: ✗ FAIL (0/20)"
	@echo ""
	@echo "Test 2: Swap Function (20 points)"
	@./tests/test_q2 && echo "Q2: ✓ PASS (20/20)" || echo "Q2: ✗ FAIL (0/20)"
	@echo ""
	@echo "Test 3: Sum Array (20 points)"
	@./tests/test_q3 && echo "Q3: ✓ PASS (20/20)" || echo "Q3: ✗ FAIL (0/20)"
	@echo ""
	@echo "Test 4: Student Struct (20 points)"
	@./tests/test_q4 && echo "Q4: ✓ PASS (20/20)" || echo "Q4: ✗ FAIL (0/20)"
	@echo ""
	@echo "Test 5: Dynamic Array (20 points)"
	@echo "4" | ./q5_dynamic_array/dynamic | grep -q "Sum: 10" && echo "Q5: ✓ PASS (20/20)" || echo "Q5: ✗ FAIL (0/20)"
	@echo ""
	@echo "Test run complete."

clean:
	rm -f $(TARGETS) $(TEST_TARGETS) q2_swap_function/*.o q3_sum_array/*.o q4_student_struct/*.o *.o *~

.PHONY: all clean test
