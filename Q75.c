#include <stdio.h>

#define STUDENTS 10
#define SUBJECTS 3

int main() {
    int num_students, num_subjects;
    printf("Enter the number of students: "); 
  scanf("%d", &num_students); 
  printf("Enter the number of subjects: "); 
  scanf("%d", &num_subjects);  

    int marks[STUDENTS][SUBJECTS];
    int total_marks[STUDENTS] = {0};
    int highest_marks[SUBJECTS] = {0};
    int highest_marks_student[SUBJECTS] = {0};
    int highest_total = 0, highest_total_student = 0;

    for (int i = 0; i < num_students; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for (int j = 0; j < num_subjects; j++) {
            scanf("%d", &marks[i][j]);
            total_marks[i] += marks[i][j];

            if (marks[i][j] > highest_marks[j]) {
                highest_marks[j] = marks[i][j];
                highest_marks_student[j] = i + 1;
            }
        }

        if (total_marks[i] > highest_total) {
            highest_total = total_marks[i];
            highest_total_student = i + 1;
        }
    }

    printf("\nTotal marks for each student:\n");
    for (int i = 0; i < num_students; i++) 
    {
        printf("Student %d: %d\n", i + 1, total_marks[i]);
    }

    printf("\nHighest marks in each subject:\n");
    for (int i = 0; i < num_subjects; i++) 
    {
        printf("Subject %d: %d (Student %d)\n", i + 1, highest_marks[i], highest_marks_student[i]);
    }

    printf("\nStudent with the highest total marks: student %d\n", highest_total_student);

}