// Student ID: D01-148-10
// HW5, Task B6 - Two equal adjacent digits

#include <stdio.h>

int main(void)
{
    int n;
    int found = 0;

    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n >= 10)
    {
        if (n % 10 == (n / 10) % 10)
        {
            found = 1;
            break;
        }

        n /= 10;
    }

    if (found)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
