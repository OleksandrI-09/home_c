// Student ID: D01-148-10
// HW10, Task G19 - Build longest palindrome

#include <stdio.h>
#include <string.h>

void make_palindrome(char str[], char result[])
{
    int count[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
        count[str[i] - 'a']++;

    int pos = 0;

    /* First half in lexicographical order */
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < count[i] / 2; j++)
        {
            result[pos] = 'a' + i;
            pos++;
        }
    }

    int half_length = pos;

    /* Smallest letter with odd count goes to the center */
    for (int i = 0; i < 26; i++)
    {
        if (count[i] % 2 != 0)
        {
            result[pos] = 'a' + i;
            pos++;
            break;
        }
    }

    /* Mirror the first half */
    for (int i = half_length - 1; i >= 0; i--)
    {
        result[pos] = result[i];
        pos++;
    }

    result[pos] = '\0';
}

int main(void)
{
    FILE *input;
    FILE *output;

    char str[1002];
    char result[1002];

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    fscanf(input, "%1000s", str);

    make_palindrome(str, result);

    fprintf(output, "%s\n", result);

    fclose(input);
    fclose(output);

    return 0;
}
