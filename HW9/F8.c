// Student ID: D01-148-10
// HW9, Task F8 - Find missing number

#include <stdio.h>

int main(void)
{
    int x;
    int min, max;
    int first = 1;
    int sum = 0;

    while (1)
    {
        scanf("%d", &x);

        if (x == 0)
            break;

        sum += x;

        if (first)
        {
            min = x;
            max = x;
            first = 0;
        }
        else
        {
            if (x < min)
                min = x;

            if (x > max)
                max = x;
        }
    }

    int expected = 0;

    for (int i = min; i <= max; i++)
        expected += i;

    printf("%d\n", expected - sum);

    return 0;
}
