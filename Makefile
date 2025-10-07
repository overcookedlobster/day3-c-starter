# Makefile for Day 3 C Pointers Exercises Autograder

CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
TARGETS = q1_basic_pointers/pointers q2_pointer_functions/swap q3_pointer_arrays/array_ops q4_pointer_structs/struct_ops
TESTS = tests/test_basic_pointers tests/test_pointer_functions tests/test_pointer_arrays tests/test_pointer_structs

all: $(TARGETS) $(TESTS)
	@echo "✓ All Day 3 pointer exercises and tests compiled successfully!"

# Build individual exercise targets
q1_basic_pointers/pointers: q1_basic_pointers/pointers.c q1_basic_pointers/pointers.h
	$(CC) $(CFLAGS) -o $@ $<

q2_pointer_functions/swap: q2_pointer_functions/swap.c q2_pointer_functions/swap.h
	$(CC) $(CFLAGS) -o $@ $<

q3_pointer_arrays/array_ops: q3_pointer_arrays/array_ops.c q3_pointer_arrays/array_ops.h
	$(CC) $(CFLAGS) -o $@ $<

q4_pointer_structs/struct_ops: q4_pointer_structs/struct_ops.c q4_pointer_structs/struct_ops.h
	$(CC) $(CFLAGS) -o $@ $<

# Build test executables (link with exercise source, exclude main with UNIT_TEST)
tests/test_basic_pointers: tests/test_basic_pointers.c q1_basic_pointers/pointers.c q1_basic_pointers/pointers.h
	$(CC) $(CFLAGS) -DUNIT_TEST -o $@ tests/test_basic_pointers.c q1_basic_pointers/pointers.c

tests/test_pointer_functions: tests/test_pointer_functions.c q2_pointer_functions/swap.c q2_pointer_functions/swap.h
	$(CC) $(CFLAGS) -DUNIT_TEST -o $@ tests/test_pointer_functions.c q2_pointer_functions/swap.c

tests/test_pointer_arrays: tests/test_pointer_arrays.c q3_pointer_arrays/array_ops.c q3_pointer_arrays/array_ops.h
	$(CC) $(CFLAGS) -DUNIT_TEST -o $@ tests/test_pointer_arrays.c q3_pointer_arrays/array_ops.c

tests/test_pointer_structs: tests/test_pointer_structs.c q4_pointer_structs/struct_ops.c q4_pointer_structs/struct_ops.h
	$(CC) $(CFLAGS) -DUNIT_TEST -o $@ tests/test_pointer_structs.c q4_pointer_structs/struct_ops.c -l m  # Note: may need string.h, but gcc handles it

test: $(TESTS)
	@echo "Running Day 3 Pointers tests..."
	@./tests/test_basic_pointers || true
	@./tests/test_pointer_functions || true
	@./tests/test_pointer_arrays || true
	@./tests/test_pointer_structs || true
	@echo "Test run complete. Check outputs above for PASS/FAIL."

clean:
	rm -f $(TARGETS) $(TESTS) *.o *~ core

.PHONY: all clean test

