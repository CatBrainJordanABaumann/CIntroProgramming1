#include <stdio.h>

typedef struct splitNumber {
    int tens, ones;
} splitNumber;

splitNumber splitDigits(int n);

int main() {
    printf("Enter a number: ");
    int a;
    scanf("%d", &a);
    splitNumber result = splitDigits(a);
    if (result.tens != -1) {
        printf("Tens is %d, ones is %d\n", result.tens, result.ones);
    }

    return 0;
}

splitNumber splitDigits(int n) {
    if (n < 10 || n > 99) {
        puts("Not a 2 digit number");
        return (splitNumber) { -1, -1 };
    }
    return (splitNumber) { n / 10, n % 10 };
}