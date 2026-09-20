// Student ID: D01-148-10
// HW6, Task C10 - Prime factors

#include <stdio.h>

void print_simple(int n)
{
    int divisor = 2;
    int first = 1;

    while (n > 1)
    {
        while (n % divisor == 0)
        {
            if (!first)
                printf(" ");

            printf("%d", divisor);
            first = 0;

            n /= divisor;
        }

        divisor++;
    }

    printf("\n");
}

int main(void)
{
    int n;

    scanf("%d", &n);

    print_simple(n);

    return 0;
}
