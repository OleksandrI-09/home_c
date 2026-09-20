// Student ID: D01-148-10
// HW5, Task B10 - Digits in increasing order

#include <stdio.h>

int main(void)
{
    int n;
    int increasing = 1;

    scanf("%d", &n);

    if (n < 0)
        n = -n;

    int previous = n % 10;
    n /= 10;

    while (n > 0)
    {
        int current = n % 10;

        if (current >= previous)
        {
            increasing = 0;
            break;
        }

        previous = current;
        n /= 10;
    }

    if (increasing)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
