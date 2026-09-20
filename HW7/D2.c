// Student ID: D01-148-10
// HW7, Task D2 - Sum from 1 to N

#include <stdio.h>

int sum_1_to_n(int n)
{
    if (n == 1)
        return 1;

    return n + sum_1_to_n(n - 1);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%d\n", sum_1_to_n(n));

    return 0;
}
