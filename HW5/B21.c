// Student ID: D01-148-10
// HW5, Task B21 - Uppercase to lowercase

#include <stdio.h>

int main(void)
{
    char c;

    while (scanf("%c", &c) == 1 && c != '.')
    {
        if (c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a';

        printf("%c", c);
    }

    printf("\n");

    return 0;
}
