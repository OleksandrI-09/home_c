// Student ID: D01-148-10
// HW7, Task D20 - Recursive power

#include <stdio.h>

int recurs_power(int n, int p)
{
    if (p == 0)
        return 1;

    return n * recurs_power(n, p - 1);
}

int main(void)
{
    int n, p;

    scanf("%d %d", &n, &p);

    printf("%d\n", recurs_power(n, p));

    return 0;
}
