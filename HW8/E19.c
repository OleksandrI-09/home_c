// Student ID: D01-148-10
// HW8, Task E19 - Digits in original order

#include <stdio.h>

int main(void)
{
    int n;
    int digits[20];
    int count = 0;

    scanf("%d", &n);

    while (n > 0)
    {
        digits[count] = n % 10;
        count++;
        n /= 10;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d", digits[i]);

        if (i > 0)
            printf(" ");
    }

    printf("\n");

    return 0;
}
