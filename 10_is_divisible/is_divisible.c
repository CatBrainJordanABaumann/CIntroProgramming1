#include <stdio.h>
#include <stdbool.h>

bool is_valid_division(int potential_denominator);
bool is_divisible_both(int numerator, int denominator);

char bool_to_char(bool b);

int main() {
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
    return b ? 'F' : 'T';
}