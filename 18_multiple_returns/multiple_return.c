#include <stdio.h>

/*
    // Splits the given 2 digit number into tens and ones.
    Returns 0 if the number is a 2 digit number and 1 otherwise.
*/
int splitDigits(int n, int* tens_ptr, int* ones_ptr);

void sumAndAvg(double d1, double d2, double* sum, double* avg);

int main() {
    int tens;
    int ones;

    while (1) {
        printf("Enter a number (0 to exit): ");
        int a;
        scanf("%d", &a);
        if (a == 0)
            break;
        if (splitDigits(a, &tens, &ones) == 0) {
            printf("Tens is %d, ones is %d\n", tens, ones);
        }
    }

    printf("Enter a number (decimal allowed): ");
    double b;
    scanf("%lf", &b);
    printf("Enter a number (decimal allowed): ");
    double c;
    scanf("%lf", &c);
    double sum, avg;
    sumAndAvg(b, c, &sum, &avg);
    printf("Sum is %lf, average is %lf", sum, avg);

    return 0;
}

int splitDigits(int n, int* tens_ptr, int* ones_ptr) {
    
    if (n < 10 || n > 99) {
        puts("Not a 2 digit number");
        return 1;
    }
    *tens_ptr = n / 10;
    *ones_ptr = n % 10;
    
    return 0;
}

void sumAndAvg(double d1, double d2, double* sum, double* avg) {
    *sum = d1 + d2;
    *avg = *sum / 2.0;
}