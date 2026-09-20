// Student ID: D01-148-10
// HW9, Task F11 - Indices of two elements with minimum sum

#include <stdio.h>
#include <limits.h>

int main(void)
{
    int a[30];

    for (int i = 0; i < 30; i++)
        scanf("%d", &a[i]);

    long long min_sum = (long long)a[0] + a[1];
    int index1 = 0;
    int index2 = 1;

    for (int i = 0; i < 29; i++)
    {
        for (int j = i + 1; j < 30; j++)
        {
            long long sum = (long long)a[i] + a[j];

            if (sum < min_sum)
            {
                min_sum = sum;
                index1 = i;
                index2 = j;
            }
        }
    }

    printf("%d %d\n", index1, index2);

    return 0;
}
