#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printNRandom(int n);
int randMinMax(int min, int max);

void main() {
    srand(time(0));
    printf("Enter a number: ");
    int input;
    scanf("%d", &input);
    puts("Here's that many random numbers:");
    printNRandom(input);
    printf("The max value of rand is %d\n", RAND_MAX);
}

void printNRandom(int n) {
    for (; n >= 0; n--)
        printf("%d\n", randMinMax(3, 17));
}

int randMinMax(int min, int max) {
    return min + rand() % (max - min + 1);
}