// Student ID: D01-148-10
// HW7, Task D7 - Print from N to 1

#include <stdio.h>

void print_n_to_1(int n)
{
    printf("%d", n);

    if (n > 1)
    {
        printf(" ");
        print_n_to_1(n - 1);
    }
}

int main(void)
{
    int n;

    scanf("%d", &n);

    print_n_to_1(n);
    printf("\n");

    return 0;
}
