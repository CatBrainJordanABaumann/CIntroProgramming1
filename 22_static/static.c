#include <stdio.h>

int addOne(int n);
int addOneStatic(int n);

int main() {
    for (int i = 0; i < 10; i++)
        printf("addOne returns %d\n", addOne(i));
        
    puts("\n-------------------\n");

    for (int i = 0; i < 10; i++)
        printf("addOneStatic returns %d\n", addOneStatic(i));
}

int addOne(int n) {
    int result = 1;
    result += n;
    return result;
}

int addOneStatic(int n) {
    static int result = 1;
    result += n;
    return result;
}