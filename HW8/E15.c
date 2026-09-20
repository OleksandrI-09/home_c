// Student ID: D01-148-10
// HW8, Task E15 - Positive and negative arrays

#include <stdio.h>

int main(void)
{
    int positive[10];
    int negative[10];

    int positive_count = 0;
    int negative_count = 0;

    for (int i = 0; i < 10; i++)
    {
        int x;

        scanf("%d", &x);

        if (x > 0)
        {
            positive[positive_count] = x;
            positive_count++;
        }
        else if (x < 0)
        {
            negative[negative_count] = x;
            negative_count++;
        }
    }

    int first = 1;

    for (int i = 0; i < positive_count; i++)
    {
        if (!first)
            printf(" ");

        printf("%d", positive[i]);
        first = 0;
    }

    for (int i = 0; i < negative_count; i++)
    {
        if (!first)
            printf(" ");

        printf("%d", negative[i]);
        first = 0;
    }

    printf("\n");

    return 0;
}
