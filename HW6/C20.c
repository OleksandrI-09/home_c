// Student ID: D01-148-10
// HW6, Task C20 - Correct brackets

#include <stdio.h>

int main(void)
{
    char c;
    int balance = 0;
    int correct = 1;

    while ((c = getchar()) != '.')
    {
        if (c == '(')
        {
            balance++;
        }
        else if (c == ')')
        {
            balance--;

            if (balance < 0)
            {
                correct = 0;
                break;
            }
        }
    }

    if (balance != 0)
        correct = 0;

    if (correct)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
