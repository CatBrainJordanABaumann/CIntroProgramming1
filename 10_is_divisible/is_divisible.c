#include <stdio.h>
#include <stdbool.h>

bool is_valid_division(int potential_denominator);
bool is_divisible_both(int numerator, int denominator);

char bool_to_char(bool b);

int main() {
    // Oh yeah, nobody ever talks about this, but you can make these little pockets of locality in C using squiggly brackets. In there all variables are local
    // This:
    { // <-
        for (int i = 0; i < 10; i++)
            printf("Hello %d\n", i);
    } // <-
    // Is equal to this:
    {
        int i = 0;
        while (i < 10)
        {
            printf("Hello %d\n", i);
            i++;
        }
        // i++ is the same as i = i + 1 is the same as i += 1
    }
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (is_valid_division(y))
        printf("%c\n", bool_to_char(is_divisible_both(x, y)));
    else
        puts("Invalid input!");
}

bool is_valid_division(int potential_denominator) {
    return potential_denominator != 0 && potential_denominator != 3;
}

bool is_divisible_both(int numerator, int denominator) {
    return numerator % denominator == 0 && numerator % (denominator - 3) == 0;
}

char bool_to_char(bool b) {
    return b ? 'T' : 'F';
}