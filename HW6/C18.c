// Student ID: D01-148-10
// HW6, Task C18 - Count digits in text

#include <stdio.h>

int is_digit(char c)
{
    return c >= '0' && c <= '9';
}

int main(void)
{
    char c;
    int count = 0;

    while ((c = getchar()) != '.')
    {
        if (is_digit(c))
            count++;
    }

    printf("%d\n", count);

    return 0;
}
