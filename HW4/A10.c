// Student ID: D01-148-10
// HW4, Task A10 - Minimum of five numbers

#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    int min;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    min = a;

    if (b < min)
        min = b;

    if (c < min)
        min = c;

    if (d < min)
        min = d;

    if (e < min)
        min = e;

    printf("%d\n", min);

    return 0;
}
