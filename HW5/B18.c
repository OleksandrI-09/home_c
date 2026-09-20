// Student ID: D01-148-10
// HW5, Task B18 - Fibonacci numbers

#include <stdio.h>

int main(void)
{
    int n;
    int a = 1;
    int b = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d", a);

        if (i < n)
            printf(" ");

        int next = a + b;
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}
