// Student ID: D01-148-10
// HW8, Task E5 - Sum of positive elements

#include <stdio.h>

int main(void)
{
    int a[10];
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] > 0)
            sum += a[i];
    }

    printf("%d\n", sum);

    return 0;
}
