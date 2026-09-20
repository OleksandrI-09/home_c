// Student ID: D01-148-10
// HW3, Task A5 - Arithmetic mean of three numbers

#include <stdio.h>

int main(void)
{
    int a, b, c;
    double average;

    scanf("%d %d %d", &a, &b, &c);

    average = (a + b + c) / 3.0;

    printf("%.2f\n", average);

    return 0;
}
