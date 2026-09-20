// Student ID: D01-148-10
// HW7, Task D5 - Convert decimal to binary

#include <stdio.h>

void print_binary(int n)
{
    if (n >= 2)
        print_binary(n / 2);

    printf("%d", n % 2);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    print_binary(n);
    printf("\n");

    return 0;
}
