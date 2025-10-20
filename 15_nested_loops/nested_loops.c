#include <stdio.h>

void printTriangleTopLeft(int n);
void printTriangleBottomLeft(int n);
void printTriangleBottomRight(int n);
void printTriangleTopRight(int n);
void printPyramidAsterisk(int n);
void printPyramid(int n);
void printDiamond(int n);

int main() {
    int n = 0;
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n <= 0);

    printTriangleBottomLeft(n);
    printTriangleTopLeft(n);
    puts("");
    printTriangleBottomRight(n);
    printTriangleTopRight(n);
    puts("");
    printPyramid(n);
    puts("");
    printDiamond(n);
    puts("");
    /*for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++)
            printf("%d", j);
        puts("");
    }
    puts("");
    for (int i = 0; i < n; i++) {
        for (int j = n - i; j > 0; j--)
            printf("%d", j);
        puts("");
    }
    puts("");
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf("%d", j);
        puts("");
    }*/

    return 0;
}

void printTriangleTopLeft(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++)
            printf("*");
        puts("");
    }
}

void printTriangleBottomLeft(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            printf("*");
        puts("");
    }
}

void printTriangleBottomRight(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n - 1; j++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("*");
        puts("");
    }
}

void printTriangleTopRight(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int j = i; j < n; j++)
            printf("*");
        puts("");
    }
}

void printPyramidAsterisk(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n - 1; j++)
            printf(" ");
        for (int j = 0; j <= i * 2; j++)
            printf("*");
        puts("");
    }
}

void printPyramid(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n - 1; j++)
            printf(" ");
        for (int j = i + 1; j > 0; j--)
            printf("%d", j);
        for (int j = 2; j <= i + 1; j++)
            printf("%d", j);
        puts("");
    }
}

void printDiamond(int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j < n; j++)
            printf(" ");
        for (int j = 0; j < i * 2 - 1; j++)
            printf("*");
        puts("");
    }

    for (int i = 0; i < n * 2 - 1; i++)
        printf("*");
    puts("");

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j <= i; j++)
            printf(" ");
        for (int j = i; j <= n * 2 - i - 4; j++)
            printf("*");
        puts("");
    }
}