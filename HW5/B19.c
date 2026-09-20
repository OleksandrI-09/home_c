// Student ID: D01-148-10
// HW5, Task B19 - Sum of digits equals 10

#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;

    scanf("%d", &n);

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    if (sum == 10)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
