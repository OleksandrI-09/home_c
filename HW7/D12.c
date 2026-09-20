// Student ID: D01-148-10
// HW7, Task D12 - Monotonic sequence

#include <stdio.h>

void print_sequence(int n, int k, int count)
{
    if (n == 0)
        return;

    printf("%d", k);

    if (n > 1)
        printf(" ");

    if (count < k)
        print_sequence(n - 1, k, count + 1);
    else
        print_sequence(n - 1, k + 1, 1);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    print_sequence(n, 1, 1);
    printf("\n");

    return 0;
}
