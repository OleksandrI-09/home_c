// Student ID: D01-148-10
// HW9, Task F18 - Sum of row maximums

#include <stdio.h>

int row_max(int a[10])
{
    int max = a[0];

    for (int i = 1; i < 10; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    return max;
}

int main(void)
{
    int a[10][10];
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            scanf("%d", &a[i][j]);
    }

    for (int i = 0; i < 10; i++)
        sum += row_max(a[i]);

    printf("%d\n", sum);

    return 0;
}
