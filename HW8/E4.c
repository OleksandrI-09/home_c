// Student ID: D01-148-10
// HW8, Task E4 - Two maximum elements

#include <stdio.h>

int main(void)
{
    int a[10];

    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    int max1, max2;

    if (a[0] > a[1])
    {
        max1 = a[0];
        max2 = a[1];
    }
    else
    {
        max1 = a[1];
        max2 = a[0];
    }

    for (int i = 2; i < 10; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2)
        {
            max2 = a[i];
        }
    }

    printf("%d\n", max1 + max2);

    return 0;
}
