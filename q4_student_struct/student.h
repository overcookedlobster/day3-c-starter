#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    char name[20];
    int grade;
} Student;

/**
 * Updates the grade of a student using a pointer to the struct.
 * @param s Pointer to Student struct
 * @param new_grade The new grade value
 */
void update_grade(Student *s, int new_grade);

#endif

