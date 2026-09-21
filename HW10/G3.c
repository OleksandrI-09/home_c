// Student ID: D01-148-10
// HW10, Task G3 - Positions matching last character

#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *input;
    FILE *output;

    char str[1002];

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    fgets(str, sizeof(str), input);

    str[strcspn(str, "\r\n")] = '\0';

    int length = strlen(str);
    char last = str[length - 1];

    int first = 1;

    for (int i = 0; i < length - 1; i++)
    {
        if (str[i] == last)
        {
            if (!first)
                fprintf(output, " ");

            fprintf(output, "%d", i);
            first = 0;
        }
    }

    fprintf(output, "\n");

    fclose(input);
    fclose(output);

    return 0;
}
