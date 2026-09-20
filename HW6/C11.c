// Student ID: D01-148-10
// HW6, Task C11 - GCD

#include <stdio.h>

int nod(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", nod(a, b));

    return 0;
}
