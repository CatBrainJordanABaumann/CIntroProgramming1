#include <stdio.h>

int main() {
    double number1 = 123;
    double* pF = &number1;
    printf("%lf\n", *pF);

    double number2 = *pF;
    
    *pF *= 2;

    printf("%p\n", &number1);
    printf("%p\n", &pF);

    return 0;
}