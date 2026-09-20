// Student ID: D01-148-10
// HW7, Task D10 - Prime number check

#include <stdio.h>

int is_prime(int n, int delitel)
{
    if (n < 2)
        return 0;

    if (delitel * delitel > n)
        return 1;

    if (n % delitel == 0)
        return 0;

    return is_prime(n, delitel + 1);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    if (is_prime(n, 2))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
