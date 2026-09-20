// Student ID: D01-148-10
// HW6, Task C4 - Function by formula

#include <stdio.h>

int f(int x)
{
    if (x < -2)
        return 4;

    if (x < 2)
        return x * x;

    return x * x + 4 * x + 5;
}

int main(void)
{
    int x;
    int max_value;

    scanf("%d", &x);

    max_value = f(x);

    while (1)
    {
        scanf("%d", &x);

        if (x == 0)
            break;

        int value = f(x);

        if (value > max_value)
            max_value = value;
    }

    printf("%d\n", max_value);

    return 0;
}
