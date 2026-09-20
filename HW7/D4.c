// Student ID: D01-148-10
// HW7, Task D4 - Digits in direct order

#include <stdio.h>

void print_num(int num)
{
    if (num >= 10)
    {
        print_num(num / 10);
        printf(" ");
    }

    printf("%d", num % 10);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    print_num(n);
    printf("\n");

    return 0;
}
