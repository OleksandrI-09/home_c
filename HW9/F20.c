// Student ID: D01-148-10
// HW9, Task F20 - Even and odd elements

#include <stdio.h>

int product_odd_digits(int n)
{
    if (n < 0)
        n = -n;

    int product = 1;
    int found = 0;

    while (n > 0)
    {
        int digit = n % 10;

        if (digit % 2 != 0)
        {
            product *= digit;
            found = 1;
        }

        n /= 10;
    }

    if (!found)
        return 0;

    return product;
}

int product_even_digits(int n)
{
    if (n < 0)
        n = -n;

    if (n == 0)
        return 0;

    int product = 1;
    int found = 0;

    while (n > 0)
    {
        int digit = n % 10;

        if (digit % 2 == 0)
        {
            product *= digit;
            found = 1;
        }

        n /= 10;
    }

    if (!found)
        return 0;

    return product;
}

int main(void)
{
    int a[10];
    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    if (even_count > odd_count)
    {
        for (int i = 0; i < 10; i++)
        {
            if (a[i] % 2 != 0)
                a[i] = product_odd_digits(a[i]);
        }
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            if (a[i] % 2 == 0)
                a[i] = product_even_digits(a[i]);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (i > 0)
            printf(" ");

        printf("%d", a[i]);
    }

    printf("\n");

    return 0;
}
