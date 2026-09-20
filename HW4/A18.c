// Student ID: D01-148-10
// HW4, Task A18 - Above, Less, Equal

#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Above\n");
    else if (a < b)
        printf("Less\n");
    else
        printf("Equal\n");

    return 0;
}
