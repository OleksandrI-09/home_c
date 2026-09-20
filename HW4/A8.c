// Student ID: D01-148-10
// HW4, Task A8 - Maximum of three numbers

#include <stdio.h>

int main(void)
{
    int a, b, c;
    int max;

    scanf("%d %d %d", &a, &b, &c);

    max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    printf("%d\n", max);

    return 0;
}
