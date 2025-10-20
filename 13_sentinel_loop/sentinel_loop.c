#include <stdio.h>

double getGrade(int student_number);
double sumStudentGrades(int student_count);
double sumStudentGradesSentinel();

int main() {
    double total = sumStudentGrades(3);
    printf("The sum of the first 3 student's grades was %.2lf%%\n", total);
    
    double total2 = sumStudentGradesSentinel();
    printf("The sentinal sum was %.2lf%%\n", total2);

    return 0;
}

double getGrade(int student_number) {
    printf("Please enter the grade for student %d: ", student_number);
    double grade;
    scanf("%lf", &grade);

    return grade;
}

double sumStudentGrades(int student_count) {
    double total = 0;
    for (int current_student = 1; current_student <= student_count; current_student++)
        total += getGrade(current_student);
    return total;
}

double sumStudentGradesSentinel() {
    double total = 0;
    double grade = 0;

    for (int current_student = 1; grade != -1; current_student++) {
        total += grade;
        grade = getGrade(current_student);
    }

    return total;
}