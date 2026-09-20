// Student ID: D01-148-10
// HW7, Task D14 - Print all odd numbers

#include <stdio.h>

void print_odds(void)
{
    int n;

    scanf("%d", &n);

    if (n == 0)
        return;

    if (n % 2 != 0)
        printf("%d ", n);

    print_odds();
}

int main(void)
{
    print_odds();
    printf("\n");

    return 0;
}
