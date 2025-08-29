/*

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    unsigned long long int ohDear;
    unsigned int idk;
    int square_side = 1;

    // Get the input
    // Print the prompt
    puts("Enter the side length for a square");

    // Get the input
    // &x = The memory address of variable x
    scanf("%d", &square_side); // <- Pointer =]

    int square_perimeter = square_side * 4, square_area = square_side * square_side;

    printf("The perimeter of a square with a side %d is %d\n", square_side, square_perimeter);
    printf("The area of a square with a side %d is %d\n", square_side, square_area);
}