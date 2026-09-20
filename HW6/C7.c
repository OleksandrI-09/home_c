// Student ID: D01-148-10
// HW6, Task C7 - Convert N to base P

#include <stdio.h>

long long convert_base(int n, int p)
{
    long long result = 0;
    long long place = 1;

    if (n == 0)
        return 0;

    while (n > 0)
    {
        int digit = n % p;

        result += digit * place;
        place *= 10;

        n /= p;
    }

    return result;
}

int main(void)
{
    int n, p;

    scanf("%d %d", &n, &p);

    printf("%lld\n", convert_base(n, p));

    return 0;
}
