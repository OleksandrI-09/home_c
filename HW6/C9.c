// Student ID: D01-148-10
// HW6, Task C9 - Factorial

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

uint64_t factorial(int n)
{
    uint64_t result = 1;

    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%" PRIu64 "\n", factorial(n));

    return 0;
}
