// Student ID: D01-148-10
// HW8, Task E6 - Arithmetic mean of 12 elements

#include <stdio.h>

int main(void)
{
    int a[12];
    int sum = 0;

    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("%.2f\n", sum / 12.0);

    return 0;
}
