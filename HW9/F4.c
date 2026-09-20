// Student ID: D01-148-10
// HW9, Task F4

void print_digit(char s[])
{
    int count[10] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            count[s[i] - '0']++;
        }
    }

    for (int digit = 0; digit <= 9; digit++)
    {
        if (count[digit] > 0)
        {
            printf("%d %d\n", digit, count[digit]);
        }
    }
}
