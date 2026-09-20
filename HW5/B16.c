// Student ID: D01-148-10
// HW5, Task B16 - Greatest common divisor

#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("%d\n", a);

    return 0;
}
