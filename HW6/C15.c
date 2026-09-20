// Student ID: D01-148-10
// HW6, Task C15 - Digits in increasing order

#include <stdio.h>

int grow_up(int n)
{
    if (n < 10)
        return 1;

    int previous = n % 10;
    n /= 10;

    while (n > 0)
    {
        int current = n % 10;

        if (current >= previous)
            return 0;

        previous = current;
        n /= 10;
    }

    return 1;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    if (grow_up(n))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
