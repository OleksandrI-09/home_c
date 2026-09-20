// Student ID: D01-148-10
// HW5, Task B11 - Reverse a number

#include <stdio.h>

int main(void)
{
    int n;
    int reverse = 0;

    scanf("%d", &n);

    while (n > 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    printf("%d\n", reverse);

    return 0;
}
