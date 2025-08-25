#include <stdio.h>

int main() { // <- void can go in parenthesis but I don't like it 
    printf("Hello world!\n");
    
    // If I wanted to have a name variable it'd go like:
    char* name = "Jordan A. Baumann";
    int course_ID = 2271;
    int student_ID = 0;
    int student_ID_course_ID_difference = student_ID - course_ID;
    printf("Name: /t%s\nCourse ID:/t%d\nStudent ID:/t%d\nStudent ID - Course ID:/t%d\n");

    printf("Goodbye world!\n");
    return 0;
}