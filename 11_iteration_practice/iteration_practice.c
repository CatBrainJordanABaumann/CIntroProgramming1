#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void countDown(int n);
void printNRandom(int n);
int d20();
void printND20(int n);

void main() {
    printf("Enter a number: ");
    int input;
    scanf("%d", &input);
    puts("Here's a countdown from that number:");
    countDown(input);
    puts("Here's that many random numbers:");
    printNRandom(input);
    printf("The max value of rand is %d\n", RAND_MAX);
}

void countDown(int n) {
    for (; n >= 0; n--) {
        printf("%d\n", n);
        usleep(25000);
    }
}

void printNRandom(int n) {
    for (; n >= 0; n--) {
        printf("%d\n", rand());
        usleep(25000);
    }
}

int d20() {
    return rand() % 20 + 1;
}