// Student ID: D01-148-10
// HW5, Task B9 - All digits are even

#include <stdio.h>

int main(void)
{
    int n;
    int all_even = 1;

    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        if ((n % 10) % 2 != 0)
        {
            all_even = 0;
            break;
        }

        n /= 10;
    }

    if (all_even)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
