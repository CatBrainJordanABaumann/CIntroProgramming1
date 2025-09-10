#include <stdio.h>
#include <math.h>

int printPrompt(char coefficient);
int getCoefficient();
int calculateDiscriminant(int a, int b, int c);
void printRoots(int a, int b, int c);

int main() {
    int a, b, c;

    printPrompt('a');
    a = getCoefficient();
    printPrompt('b');
    b = getCoefficient();
    printPrompt('c');
    c = getCoefficient();

    printRoots(a, b, c);
    
    return 0;
}

int printPrompt(char coefficient) {
    printf("Enter the coefficient of %c: ", coefficient);
}

int getCoefficient() {
    int coeff;
    scanf("%d", &coeff);
    return coeff;
}

int calculateDiscriminant(int a, int b, int c) {
    return b * b - 4 * a * c;
}

void printRoots(int a, int b, int c) {
    int discriminant = calculateDiscriminant(a, b, c);

    if (discriminant < 0) {
        puts("No real roots!");
        return;
    }
    if (discriminant == 0) {
        printf("x = %lf", -b * 0.5 / a);
        return;
    }
    double sqrtDiscriminant = sqrt(discriminant);
    double x1 = (-b - sqrtDiscriminant) / (2 * a);
    double x2 = (-b + sqrtDiscriminant) / (2 * a);
    printf("x1 = %lf and x2 = %lf", x1, x2);
}