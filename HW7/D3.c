// Student ID: D01-148-10
// HW7, Task D3 - Digits in reverse order

#include <stdio.h>

void print_reverse(int n)
{
    printf("%d", n % 10);

    if (n >= 10)
    {
        printf(" ");
        print_reverse(n / 10);
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);

    print_reverse(n);
    printf("\n");

    return 0;
}
