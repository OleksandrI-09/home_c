// Student ID: D01-148-10
// HW10, Task G6 - Palindrome check

#include <stdio.h>
#include <string.h>

int is_palindrom(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        if (str[left] != str[right])
            return 0;

        left++;
        right--;
    }

    return 1;
}

int main(void)
{
    FILE *input;
    FILE *output;

    char str[1002];

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    fgets(str, sizeof(str), input);

    str[strcspn(str, "\r\n")] = '\0';

    if (is_palindrom(str))
        fprintf(output, "YES\n");
    else
        fprintf(output, "NO\n");

    fclose(input);
    fclose(output);

    return 0;
}
