// Student ID: D01-148-10
// HW5, Task B5 - Sum of digits

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

    printf("%d\n", sum);

    return 0;
}
