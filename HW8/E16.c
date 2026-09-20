// Student ID: D01-148-10
// HW8, Task E16 - Most frequent element

#include <stdio.h>

int main(void)
{
    int a[10];

    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    int most_frequent = a[0];
    int max_count = 0;

    for (int i = 0; i < 10; i++)
    {
        int count = 0;

        for (int j = 0; j < 10; j++)
        {
            if (a[j] == a[i])
                count++;
        }

        if (count > max_count)
        {
            max_count = count;
            most_frequent = a[i];
        }
    }

    printf("%d\n", most_frequent);

    return 0;
}
