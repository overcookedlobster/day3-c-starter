/*
 * Unit test for Q4: Student Struct with Pointers
 * Tests the update_grade function
 */

#include "student.h"
#include <stdio.h>
#include <string.h>

int test_basic_update() {
  Student s;
  strcpy(s.name, "Alice");
  s.grade = 80;

  update_grade(&s, 90);

  return (s.grade == 90 && strcmp(s.name, "Alice") == 0);
}

int test_grade_increase() {
  Student s = {"Bob", 70};
  update_grade(&s, 85);
  return (s.grade == 85);
}

int test_grade_decrease() {
  Student s = {"Charlie", 95};
  update_grade(&s, 75);
  return (s.grade == 75);
}

int test_zero_grade() {
  Student s = {"David", 50};
  update_grade(&s, 0);
  return (s.grade == 0);
}

int test_perfect_score() {
  Student s = {"Eve", 85};
  update_grade(&s, 100);
  return (s.grade == 100);
}

int test_name_unchanged() {
  Student s;
  strcpy(s.name, "TestStudent");
  s.grade = 60;

  update_grade(&s, 80);

  return (strcmp(s.name, "TestStudent") == 0 && s.grade == 80);
}

int main() {
  int passed = 0;
  int total = 6;

  printf("Testing Q4: Student Struct\n");
  printf("--------------------------\n");

  if (test_basic_update()) {
    printf("✓ Test 1: Basic grade update (80 → 90)\n");
    passed++;
  } else {
    printf("✗ Test 1: Basic grade update\n");
  }

  if (test_grade_increase()) {
    printf("✓ Test 2: Grade increase (70 → 85)\n");
    passed++;
  } else {
    printf("✗ Test 2: Grade increase\n");
  }

  if (test_grade_decrease()) {
    printf("✓ Test 3: Grade decrease (95 → 75)\n");
    passed++;
  } else {
    printf("✗ Test 3: Grade decrease\n");
  }

  if (test_zero_grade()) {
    printf("✓ Test 4: Zero grade (50 → 0)\n");
    passed++;
  } else {
    printf("✗ Test 4: Zero grade\n");
  }

  if (test_perfect_score()) {
    printf("✓ Test 5: Perfect score (85 → 100)\n");
    passed++;
  } else {
    printf("✗ Test 5: Perfect score\n");
  }

  if (test_name_unchanged()) {
    printf("✓ Test 6: Name unchanged after update\n");
    passed++;
  } else {
    printf("✗ Test 6: Name unchanged\n");
  }

  printf("--------------------------\n");
  printf("Passed: %d/%d tests\n", passed, total);

  return (passed == total) ? 0 : 1;
}
