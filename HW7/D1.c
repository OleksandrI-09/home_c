// Student ID: D01-148-10
// HW7, Task D1 - Print from 1 to N

#include <stdio.h>

void print_1_to_n(int n)
{
    if (n == 0)
        return;

    print_1_to_n(n - 1);

    printf("%d", n);

    if (n > 0)
        printf(" ");
}

int main(void)
{
    int n;

    scanf("%d", &n);

    print_1_to_n(n);
    printf("\n");

    return 0;
}
