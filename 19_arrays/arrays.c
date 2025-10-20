#include <stdio.h>

#define SIZE 11

int main() {

    double d_arr[SIZE] = { 0 };
    printf("Second element = %.2lf and last element = %.2lf\n", d_arr[1], d_arr[SIZE - 1]);

    int c[] = { -45, 6, 0, 72, 1543 };
    printf("Sum of first and third element: %d\n", c[0] + c[2]);

    int arr[SIZE];
    
    arr[0] = 10;
    for (int i = 1; i < SIZE; i++)
        arr[i] = arr[i - 1] + 10;
    
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
        printf("%d, ", arr[i]);

    puts("");

    return 0;
}