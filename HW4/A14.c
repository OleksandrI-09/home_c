// Student ID: D01-148-10
// HW4, Task A14 - Maximum digit

#include <stdio.h>

int main(void)
{
    int number;
    int a, b, c;
    int max;

    scanf("%d", &number);

    a = (number / 100) % 10;
    b = (number / 10) % 10;
    c = number % 10;

    max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    printf("%d\n", max);

    return 0;
}
