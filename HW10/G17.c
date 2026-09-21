// Student ID: D01-148-10
// HW10, Task G17 - Swap neighboring non-space characters

#include <stdio.h>
#include <string.h>

void swap_pairs(char str[])
{
    int first = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' ||
            str[i] == '\n' ||
            str[i] == '\r')
        {
            continue;
        }

        if (first == -1)
        {
            first = i;
        }
        else
        {
            char temp = str[first];
            str[first] = str[i];
            str[i] = temp;

            first = -1;
        }
    }
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

    swap_pairs(str);

    fprintf(output, "%s\n", str);

    fclose(input);
    fclose(output);

    return 0;
}
