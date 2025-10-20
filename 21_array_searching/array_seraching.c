#include <stdio.h>

#define SIZE 10

int firstZero(const int* arr, int size);
int lastZero(const int* arr, int size);
int nthZero(const int* arr, int size, int n);

int main() {
    int my_array[SIZE] = { 8, 0, 3, 0, 45, -4 };

    int first_zero = firstZero(my_array, SIZE);
    if (first_zero < 0)
        puts("There are no zeros");
    else
        printf("The first zero was at index %d\n", first_zero);
        
    int last_zero = lastZero(my_array, SIZE);
    if (last_zero < 0)
        puts("There are no zeros");
    else
        printf("The last zero was at index %d\n", last_zero);

    int n;
    printf("Enter n: ");
    scanf("%d", &n);
        
    int nth_zero = nthZero(my_array, SIZE, n);
    if (nth_zero < 0)
        printf("There are not %d zeros\n", n);
    else
        printf("The %d zero was at index %d\n", n, nth_zero);

    return 0;
}

int firstZero(const int* arr, int size) {
    for (int i = 0; i < size; i++)
        if (arr[i] == 0)
            return i;
    return -1;
}

int lastZero(const int* arr, int size) {
    for (int i = size - 1; i >= 0; i--)
        if (arr[i] == 0)
            return i;
    return -1;
}

int nthZero(const int* arr, int size, int n) {
    for (int i = 0, found_zeros = 0; i < size; i++)
    {
        if (arr[i] == 0)
            found_zeros++;
        if (found_zeros == n)
            return i;
    }
    return -1;
}

/*int nthZero(const int* arr, int size, int n) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            n--;
        if (n == 0)
            return i;
    }
    return -1;
}*/