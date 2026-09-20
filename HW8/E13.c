// Student ID: D01-148-10
// HW8, Task E13 - Tens digit is zero

#include <stdio.h>

int main(void)
{
    int a[10];
    int result[10];
    int count = 0;

    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 10; i++)
    {
        int n = a[i];

        if (n < 0)
            n = -n;

        if ((n / 10) % 10 == 0)
        {
            result[count] = a[i];
            count++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (i > 0)
            printf(" ");

        printf("%d", result[i]);
    }

    printf("\n");

    return 0;
}
