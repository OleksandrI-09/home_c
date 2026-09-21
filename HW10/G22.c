// Student ID: D01-148-10
// HW10, Task G22 - Soundex

#include <stdio.h>

char soundex_digit(char c)
{
    if (c == 'b' || c == 'f' || c == 'p' || c == 'v')
        return '1';

    if (c == 'c' || c == 'g' || c == 'j' || c == 'k' ||
        c == 'q' || c == 's' || c == 'x' || c == 'z')
        return '2';

    if (c == 'd' || c == 't')
        return '3';

    if (c == 'l')
        return '4';

    if (c == 'm' || c == 'n')
        return '5';

    if (c == 'r')
        return '6';

    return '0';
}

int main(void)
{
    FILE *input;
    FILE *output;

    char word[21];
    char code[5];

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    fscanf(input, "%20s", word);

    code[0] = word[0];

    int pos = 1;
    char previous = '0';

    for (int i = 1; word[i] != '\0' && pos < 4; i++)
    {
        char digit = soundex_digit(word[i]);

        /* Vowels, h, w, y are discarded */
        if (digit == '0')
            continue;

        /* Compress consecutive equal digits */
        if (digit != previous)
        {
            code[pos] = digit;
            pos++;
        }

        previous = digit;
    }

    /* Add zeros until code has four characters */
    while (pos < 4)
    {
        code[pos] = '0';
        pos++;
    }

    code[4] = '\0';

    fprintf(output, "%s\n", code);

    fclose(input);
    fclose(output);

    return 0;
}
