// Student ID: D01-148-10
// HW5, Task B2 - Squares from A to B

#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        printf("%d", i * i);

        if (i < b)
            printf(" ");
    }

    printf("\n");

    return 0;
}
