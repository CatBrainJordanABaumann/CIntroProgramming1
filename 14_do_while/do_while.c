#include <stdio.h>

void clearInputBuffer() {
    while (getchar() != '\n');
}

int main() {
    char input;
    do {
        printf("Input an uppercase letter: ");
        scanf("%c", &input);
        clearInputBuffer();
    } while (input < 'A' || input > 'Z');

    printf("You input the letter \"%c\"\n", input);

    int number;
    do {
        printf("Input a positive number: ");
        scanf(" %d", &number);
    } while (number <= 0);

    printf("You input the number \"%d\"\n", number);

    int choice;
    do {
        printf("Choose either \"1\" or \"2\": ");
        scanf(" %d", &choice);
    } while (choice != 1 && choice != 2);
    
    printf("You chose the option \"%d\"\n", choice);
    char* chosenOutput = choice == 1 ? "A" : "A\n";
    for (int i = 0; i < 5; i++)
        printf("%s", chosenOutput);
    puts("");

    return 0;
}