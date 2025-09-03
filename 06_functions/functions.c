/*
    Function format:

    <return_type> <function_name>(<optional_parameters>) {
        <function_body>
    }

    You cannot create a function inside the body of another function, nor a struct
*/

#include <stdio.h>

void print_course() {
    puts("You are in COP 2271!");
}

void print_course_with_number(int course_number) {
    if (course_number == 2271)
        printf("You are in the best %d course\n", course_number);
    else
        printf("You are in a %d course\n", course_number);
}

void two() {
    puts("two");
}

void one_three() {
    puts("one");
    two();
    puts("three");
}

int main() {
    puts("Starting now:");
    one_three();
    puts("Done!");

    print_course();
    
    print_course_with_number(2045);
    print_course_with_number(1009);
    print_course_with_number(2271);
    print_course_with_number(2104);
    print_course_with_number(2045);

    return 0;
}