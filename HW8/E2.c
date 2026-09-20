// Student ID: D01-148-10
// HW8, Task E2 - Minimum element

#include <stdio.h>

int main(void)
{
    int a[5];

    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    int min = a[0];

    for (int i = 1; i < 5; i++)
    {
        if (a[i] < min)
            min = a[i];
    }

    printf("%d\n", min);

    return 0;
}
