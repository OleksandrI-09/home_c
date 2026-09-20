// Student ID: D01-148-10
// HW5, Task B12 - Minimum and maximum digit

#include <stdio.h>

int main(void)
{
    int n;
    int min_digit = 9;
    int max_digit = 0;

    scanf("%d", &n);

    if (n == 0)
    {
        min_digit = 0;
        max_digit = 0;
    }
    else
    {
        while (n > 0)
        {
            int digit = n % 10;

            if (digit < min_digit)
                min_digit = digit;

            if (digit > max_digit)
                max_digit = digit;

            n /= 10;
        }
    }

    printf("%d %d\n", min_digit, max_digit);

    return 0;
}
