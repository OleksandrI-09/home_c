// Student ID: D01-148-10
// HW9, Task F10 - Compress string

#include <stdio.h>

int main(void)
{
    char s[1001];

    scanf("%1000s", s);

    int count = 1;

    for (int i = 1; s[i] != '.'; i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            printf("%c%d", s[i - 1], count);
            count = 1;
        }
    }

    int i = 0;

    while (s[i] != '.')
        i++;

    printf("%c%d\n", s[i - 1], count);

    return 0;
}
