// Student ID: D01-148-10
// HW8, Task E14 - Repeated numbers

#include <stdio.h>

int main(void)
{
    int a[10];
    int result[10];
    int result_count = 0;

    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 10; i++)
    {
        int count = 0;
        int already_added = 0;

        for (int j = 0; j < 10; j++)
        {
            if (a[j] == a[i])
                count++;
        }

        for (int j = 0; j < result_count; j++)
        {
            if (result[j] == a[i])
            {
                already_added = 1;
                break;
            }
        }

        if (count > 1 && !already_added)
        {
            result[result_count] = a[i];
            result_count++;
        }
    }

    for (int i = 0; i < result_count; i++)
    {
        if (i > 0)
            printf(" ");

        printf("%d", result[i]);
    }

    printf("\n");

    return 0;
}
