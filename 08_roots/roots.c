#include <stdio.h>
#include <math.h>

int print_prompt(char coefficient);
int get_coefficient();
int calculate_discriminant(int a, int b, int c);
void print_roots(int a, int b, int c);

int main() {
    int a, b, c;

    print_prompt('a');
    a = get_coefficient();
    print_prompt('b');
    b = get_coefficient();
    print_prompt('c');
    c = get_coefficient();
    
    return 0;
}

int print_prompt(char coefficient) {
    printf("Enter the coefficient of %c: ", coefficient);
}

int get_coefficient() {
    int coeff;
    scanf("%d", &coeff);
    return coeff;
}

int calculate_discriminant(int a, int b, int c) {
    return b * b - 4 * a * c;
}

void print_roots(int a, int b, int c) {
    int discriminant = calculate_discriminant(a, b, c);

    if (discriminant < 0) {
        puts("No real roots!");
        return;
    }
    if (discriminant == 0) {
        printf("x = %lf", -b * 0.5 / a);
        return;
    }
    double sqrtDiscriminant = sqrt(discriminant);
    double x1 = (-b + sqrtDiscriminant) / (2 * a);
    double x2 = (-b + sqrtDiscriminant) / (2 * a);
    printf("x1 = %lf and x2 = %lf", x1, x2);
}