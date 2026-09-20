// Student ID: D01-148-10
// HW8, Task E7 - Reverse each half

#include <stdio.h>

int main(void)
{
    int a[10];

    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 2; i++)
    {
        int temp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = temp;
    }

    for (int i = 0; i < 2; i++)
    {
        int temp = a[5 + i];
        a[5 + i] = a[9 - i];
        a[9 - i] = temp;
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
