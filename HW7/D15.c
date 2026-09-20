// Student ID: D01-148-10
// HW7, Task D15 - Find maximum

#include <stdio.h>

int max_find(int max)
{
    int n;

    scanf("%d", &n);

    if (n == 0)
        return max;

    if (n > max)
        max = n;

    return max_find(max);
}

int main(void)
{
    int first;

    scanf("%d", &first);

    printf("%d\n", max_find(first));

    return 0;
}
