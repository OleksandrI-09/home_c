// Student ID: D01-148-10
// HW6, Task C1 - Absolute value

#include <stdio.h>

int absolute(int x)
{
    if (x < 0)
        return -x;
    else
        return x;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%d\n", absolute(n));

    return 0;
}
