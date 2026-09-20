// Student ID: D01-148-10
// HW5, Task B17 - Lucky numbers

#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int number = 10; number <= n; number++)
    {
        int x = number;
        int sum = 0;
        int product = 1;

        while (x > 0)
        {
            int digit = x % 10;

            sum += digit;
            product *= digit;

            x /= 10;
        }

        if (sum == product)
            printf("%d ", number);
    }

    printf("\n");

    return 0;
}
