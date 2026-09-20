// Student ID: D01-148-10
// HW6, Task C14 - Even sum of digits

#include <stdio.h>

int even_sum_digits(int n)
{
    int sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum % 2 == 0;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    if (even_sum_digits(n))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
