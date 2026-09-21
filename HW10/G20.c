// Student ID: D01-148-10
// HW10, Task G20 - Check if palindrome can be formed

#include <stdio.h>
#include <string.h>

int is_palindrom(char str[])
{
    int count[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            count[str[i] - 'a']++;
    }

    int odd = 0;

    for (int i = 0; i < 26; i++)
    {
        if (count[i] % 2 != 0)
            odd++;
    }

    if (odd <= 1)
        return 1;

    return 0;
}

int main(void)
{
    FILE *input;

    char str[1002];

    input = fopen("input.txt", "r");

    fgets(str, sizeof(str), input);

    str[strcspn(str, "\r\n")] = '\0';

    if (is_palindrom(str))
        printf("YES\n");
    else
        printf("NO\n");

    fclose(input);

    return 0;
}
