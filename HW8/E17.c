// Student ID: D01-148-10
// HW8, Task E17 - Elements occurring once

#include <stdio.h>

int main(void)
{
    int a[10];
    int first = 1;

    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 10; i++)
    {
        int count = 0;

        for (int j = 0; j < 10; j++)
        {
            if (a[j] == a[i])
                count++;
        }

        if (count == 1)
        {
            if (!first)
                printf(" ");

            printf("%d", a[i]);
            first = 0;
        }
    }

    printf("\n");

    return 0;
}
