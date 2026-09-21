// Student ID: D01-148-10
// HW10, Task G9 - Remove repeated characters and spaces

#include <stdio.h>

int main(void)
{
    FILE *input;
    FILE *output;

    char str[1002];
    int used[256] = {0};

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    fgets(str, sizeof(str), input);

    for (int i = 0; str[i] != '\0'; i++)
    {
        unsigned char c = str[i];

        if (c == ' ' || c == '\n' || c == '\r')
            continue;

        if (!used[c])
        {
            fprintf(output, "%c", c);
            used[c] = 1;
        }
    }

    fprintf(output, "\n");

    fclose(input);
    fclose(output);

    return 0;
}
