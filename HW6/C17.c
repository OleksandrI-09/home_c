// Student ID: D01-148-10
// HW6, Task C17 - Sum of digits equals product

#include <stdio.h>

int is_happy_number(int n)
{
    int sum = 0;
    int product = 1;

    if (n == 0)
        return 1;

    while (n > 0)
    {
        int digit = n % 10;

        sum += digit;
        product *= digit;

        n /= 10;
    }

    return sum == product;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    if (is_happy_number(n))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
