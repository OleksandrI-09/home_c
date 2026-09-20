// Student ID: D01-148-10
// HW3, Task A12 - Sum of digits

#include <stdio.h>

int main(void)
{
    int number;
    int hundreds, tens, ones;

    scanf("%d", &number);

    hundreds = number / 100;
    tens = (number / 10) % 10;
    ones = number % 10;

    printf("%d\n", hundreds + tens + ones);

    return 0;
}
