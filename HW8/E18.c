// Student ID: D01-148-10
// HW8, Task E18 - Multiples from 2 to 9

#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int divisor = 2; divisor <= 9; divisor++)
    {
        int count = 0;

        for (int x = 2; x <= n; x++)
        {
            if (x % divisor == 0)
                count++;
        }

        printf("%d %d\n", divisor, count);
    }

    return 0;
}
