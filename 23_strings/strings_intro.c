#include <stdio.h>
#include <stdbool.h>

#define SIZE 100

bool isUpper(char c);
bool isLower(char c);

bool isAlpha(char c);
bool isDigit(char c);
bool is(char c);

int main() {
    char str[SIZE] = "Hello";
    fgets(str, SIZE - 1, stdin);

    printf("%s\n", str);
    printf("%s\n", str);
    printf("%s\n\n", str);

    for (int i = 0; str[i] != '\0'; i++)
        putchar(str[i]); // <- There's a special function for printing just chars quickly
    puts("\n");

    puts("Lower");
    for (int i = 0; str[i] != '\0'; i++)
        if (isLower(str[i]))
            putchar(str[i]); // <- There's a special function for printing just chars quickly
    puts("\n");

    puts("Upper");
    for (int i = 0; str[i] != '\0'; i++)
        if (isUpper(str[i]))
            putchar(str[i]); // <- There's a special function for printing just chars quickly
    puts("");

    return 0;
}

bool isUpper(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isLower(char c) {
    return c >= 'a' && c <= 'z';
}