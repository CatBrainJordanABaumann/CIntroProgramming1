#include <stdio.h>
//Actually => is an operator, just not a boolean one lol. Well, it is in C++ that is, I can't remember what it does though
int main() {
    int input_seconds = -1;

    puts("Enter the number of seconds:");
    scanf("%d", &input_seconds);

    if (input_seconds < 0)
    {
        puts("Invalid input!");
        return 0;
    }

    int result_hours = input_seconds / 3600;
    int result_minutes = input_seconds / 60 % 60;
    int result_seconds = input_seconds % 60;

    int non_printed_values = 0;

    if (result_hours > 1)
        printf("%d hours", result_hours);
    else if (result_hours == 1)
        printf("%d hour", result_hours);
    else
        non_printed_values++;

    if (result_minutes > 0 && non_printed_values == 0)
        printf(", ");

    if (result_minutes > 1)
        printf("%d minutes", result_minutes);
    else if (result_minutes == 1)
        printf("%d minute", result_minutes);
    else
        non_printed_values++;
    
    if (non_printed_values == 1)
        printf(" and ");
    else if (non_printed_values == 0)
        printf(", and ");

    if (result_seconds != 1)
        printf("%d seconds = ", result_seconds);
    else
        printf("%d second = ", result_seconds);

    if (input_seconds != 1)
        printf("%d seconds\n", input_seconds);
    else
        printf("%d second\n", input_seconds);

    return 0;
}