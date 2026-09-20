// Student ID: D01-148-10
// HW4, Task A11 - Sum of maximum and minimum

#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    int min, max;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    min = a;
    max = a;

    if (b < min)
        min = b;
    if (b > max)
        max = b;

    if (c < min)
        min = c;
    if (c > max)
        max = c;

    if (d < min)
        min = d;
    if (d > max)
        max = d;

    if (e < min)
        min = e;
    if (e > max)
        max = e;

    printf("%d\n", min + max);

    return 0;
}
