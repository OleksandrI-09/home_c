// Student ID: D01-148-10
// HW7, Task D19 - Count character 'a'

#include <stdio.h>

int acounter(void)
{
    char c = getchar();

    if (c == '.')
        return 0;

    if (c == 'a')
        return 1 + acounter();

    return acounter();
}

int main(void)
{
    printf("%d\n", acounter());

    return 0;
}
