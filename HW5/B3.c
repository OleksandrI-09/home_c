// Student ID: D01-148-10
// HW5, Task B3 - Sum of squares

#include <stdio.h>

int main(void)
{
    int a, b;
    int sum = 0;

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        sum += i * i;
    }

    printf("%d\n", sum);

    return 0;
}
