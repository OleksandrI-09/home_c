// Student ID: D01-148-10
// HW7, Task D8 - Numbers from A to B

#include <stdio.h>

void print_a_to_b(int a, int b)
{
    printf("%d", a);

    if (a == b)
        return;

    printf(" ");

    if (a < b)
        print_a_to_b(a + 1, b);
    else
        print_a_to_b(a - 1, b);
}

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    print_a_to_b(a, b);
    printf("\n");

    return 0;
}
