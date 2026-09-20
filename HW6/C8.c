// Student ID: D01-148-10
// HW6, Task C8 - Lowercase to uppercase

#include <stdio.h>

char to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';

    return c;
}

int main(void)
{
    char c;

    while ((c = getchar()) != '.')
    {
        putchar(to_upper(c));
    }

    putchar('\n');

    return 0;
}
