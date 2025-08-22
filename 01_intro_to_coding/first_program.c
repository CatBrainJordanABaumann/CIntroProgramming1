/*

08/20/25
This is a multi-line comment.
Jordan (Bruce) Baumann
My first program in C for this course.

*/

// This is an example single line comment
//.h files are header files and are made to be included by other .h files or by .c files
#include <stdio.h> // Standard input output

// Create the main function
// Same-line squiggly brackets is referred to as K&H style
int main() { // <- void can go in the parenthesis but it's optional and doesn't fit my programming style so it has been left out for now.
    // All the stuff in a block of squiggly brackets "{}" are referred to as a "block" of code
    printf("Hello\nworld!\n\n");

    printf("I\nam\nready\nto\ncode!\n\n");

    printf("Farewell\nworld!\n");
    return 0; // <- Anything other than a 0 is an error
}