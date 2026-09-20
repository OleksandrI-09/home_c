// Student ID: D01-148-10
// HW8, Task E3 - Maximum and minimum with positions

#include <stdio.h>

int main(void)
{
    int a[10];

    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    int max = a[0];
    int min = a[0];

    int max_index = 0;
    int min_index = 0;

    for (int i = 1; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_index = i;
        }

        if (a[i] < min)
        {
            min = a[i];
            min_index = i;
        }
    }

    printf("%d %d %d %d\n",
           max_index + 1, max,
           min_index + 1, min);

    return 0;
}
