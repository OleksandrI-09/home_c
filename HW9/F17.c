// Student ID: D01-148-10
// HW9, Task F17 - Matrix trace

#include <stdio.h>

int matrix_trace(int a[5][5])
{
    int sum = 0;

    for (int i = 0; i < 5; i++)
        sum += a[i][i];

    return sum;
}

int main(void)
{
    int a[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    }

    printf("%d\n", matrix_trace(a));

    return 0;
}
