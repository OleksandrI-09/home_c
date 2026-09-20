// Student ID: D01-148-10
// HW5, Task B20 - Prime number

#include <stdio.h>

int main(void)
{
    int n;
    int prime = 1;

    scanf("%d", &n);

    if (n < 2)
    {
        prime = 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
