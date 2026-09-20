// Student ID: D01-148-10
// HW9, Task F19 - Positive elements greater than diagonal average

#include <stdio.h>

double diagonal_average(int a[5][5])
{
    int sum = 0;

    for (int i = 0; i < 5; i++)
        sum += a[i][i];

    return sum / 5.0;
}

int main(void)
{
    int a[5][5];
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    }

    double average = diagonal_average(a);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] > 0 && a[i][j] > average)
                count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
