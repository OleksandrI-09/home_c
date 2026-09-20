// Student ID: D01-148-10
// HW5, Task B8 - Exactly one digit 9

#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;

    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        if (n % 10 == 9)
            count++;

        n /= 10;
    }

    if (count == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
