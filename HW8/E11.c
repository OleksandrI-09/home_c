// Student ID: D01-148-10
// HW8, Task E11 - Sort by last digit

#include <stdio.h>

int main(void)
{
    int a[10];

    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (a[j] % 10 > a[j + 1] % 10)
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (i > 0)
            printf(" ");

        printf("%d", a[i]);
    }

    printf("\n");

    return 0;
}
