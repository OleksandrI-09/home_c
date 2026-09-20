// Student ID: D01-148-10
// HW7, Task D6 - Reverse string

#include <stdio.h>

void reverse_string(void)
{
    char c = getchar();

    if (c == '.')
        return;

    reverse_string();

    putchar(c);
}

int main(void)
{
    reverse_string();
    printf("\n");

    return 0;
}
