// Student ID: D01-148-10
// HW5, Task B7 - Two equal digits

#include <stdio.h>

int main(void)
{
    int n;
    int found = 0;

    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        int digit = n % 10;
        int rest = n / 10;

        while (rest > 0)
        {
            if (rest % 10 == digit)
            {
                found = 1;
                break;
            }

            rest /= 10;
        }

        if (found)
            break;

        n /= 10;
    }

    if (found)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
