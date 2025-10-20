#include <stdio.h>

void setToZero(int* n);

int main() {
    int a = 10;
    
    printf("a before %d\n", a);
    setToZero(&a);
    printf("a after %d\n", a);

    return 0;
}

void setToZero(int* n_ptr) {
    *n_ptr = 0;
    printf("input is %d\n", *n_ptr);
}