/*
    Introduction to variables in C
*/

#include <stdio.h>

int main() {
    printf("Hello world!\n");

    // Initialize variable
    int first_number; // No camel case =[
    // Set variable
    first_number = -52;
    // Initialize and set variable in one line
    int second_number = 78;

    printf("first_number = %d\n", first_number); // %d and %i both would print it in both cases
    printf("second_number = %d\n", second_number);

    // Calculate the sum
    int sum = first_number + second_number;
    printf("%d + %d = %d\n", first_number, second_number, sum);

    printf("Goodbye world!\n");
    return 0;
}