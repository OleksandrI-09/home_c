// Student ID: D01-148-10
// HW8, Task E1 - Arithmetic mean of array

#include <stdio.h>

int main(void)
{
    int a[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("%.3f\n", sum / 5.0);

    return 0;
}
