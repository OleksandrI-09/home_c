// Student ID: D01-148-10
// HW6, Task C6 - Grains on a chessboard square

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

uint64_t grains(int n)
{
    uint64_t result = 1;

    for (int i = 1; i < n; i++)
    {
        result *= 2;
    }

    return result;
}

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("%" PRIu64 "\n", grains(n));

    return 0;
}
