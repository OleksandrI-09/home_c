// Student ID: D01-148-10
// HW7, Task D13 - Print prime factors

#include <stdio.h>

void print_factors(int n, int divisor)
{
    if (n == 1)
        return;

    if (n % divisor == 0)
    {
        printf("%d", divisor);

        if (n / divisor != 1)
            printf(" ");

        print_factors(n / divisor, divisor);
    }
    else
    {
        print_factors(n, divisor + 1);
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);

    print_factors(n, 2);
    printf("\n");

    return 0;
}
