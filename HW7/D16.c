// Student ID: D01-148-10
// HW7, Task D16 - Exact power of two

#include <stdio.h>

int is2pow(int n)
{
    if (n == 1)
        return 1;

    if (n % 2 != 0)
        return 0;

    return is2pow(n / 2);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    if (is2pow(n))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
