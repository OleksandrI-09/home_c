// Student ID: D01-148-10
// HW8, Task E10 - Cyclic shift right by 4

#include <stdio.h>

int main(void)
{
    int a[12];
    int temp[4];

    for (int i = 0; i < 12; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 4; i++)
        temp[i] = a[8 + i];

    for (int i = 7; i >= 0; i--)
        a[i + 4] = a[i];

    for (int i = 0; i < 4; i++)
        a[i] = temp[i];

    for (int i = 0; i < 12; i++)
    {
        if (i > 0)
            printf(" ");

        printf("%d", a[i]);
    }

    printf("\n");

    return 0;
}
