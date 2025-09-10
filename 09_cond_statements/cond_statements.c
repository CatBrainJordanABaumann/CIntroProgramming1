#include <stdio.h>

int main() {
    int inp;
    printf("Enter a number: ");
    scanf("%d", &inp);

    if (inp >= 0 && inp <= 100 || inp % 2 == 0)
        printf("%d is even or between 0 and 100\n", inp);

    int attempts = 0;
    while (inp != 7 && attempts < 3) {
        printf("Enter a number from 1-10. If you guess it right you'll win: ");
        scanf("%d", &inp);
        attempts++;
    }
    if (inp == 7)
        printf("Nice job! You got it on attempt %d\n", attempts);
    else
        puts("Oops! You did not succeed");
    
    return 0;
}