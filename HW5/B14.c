// Student ID: D01-148-10
// HW5, Task B14 - Count numbers in sequence

#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;

    scanf("%d", &n);

    while (n != 0)
    {
        count++;
        scanf("%d", &n);
    }

    printf("%d\n", count);

    return 0;
}
