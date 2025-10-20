#include <stdio.h>

#define SIZE 10

void printArray(const int* arr, int length);

int main() {
    int a[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    printf("%p\n", a);
    printArray(a, sizeof(a) / sizeof(int));
    
    return 0;
}

void printArray(const int* arr, int length) {
    for (; length > 0; arr++, length--)
        printf("%d ", *arr);
    puts("");
}