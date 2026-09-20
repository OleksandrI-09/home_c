// Student ID: D01-148-10
// HW6, Task C5 - Sum from 1 to N

#include <stdio.h>

int sum_to_n(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%d\n", sum_to_n(n));

    return 0;
}
