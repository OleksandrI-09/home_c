// Student ID: D01-148-10
// HW7, Task D9 - Sum of digits

#include <stdio.h>

int sum_digits(int n)
{
    if (n == 0)
        return 0;

    return n % 10 + sum_digits(n / 10);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%d\n", sum_digits(n));

    return 0;
}
