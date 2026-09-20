// Student ID: D01-148-10
// HW5, Task B13 - Count even and odd digits

#include <stdio.h>

int main(void)
{
    int n;
    int even = 0;
    int odd = 0;

    scanf("%d", &n);

    if (n == 0)
    {
        even = 1;
    }
    else
    {
        while (n > 0)
        {
            int digit = n % 10;

            if (digit % 2 == 0)
                even++;
            else
                odd++;

            n /= 10;
        }
    }

    printf("%d %d\n", even, odd);

    return 0;
}
