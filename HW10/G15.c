// Student ID: D01-148-10
// HW10, Task G15 - Replace Cao with Ling

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

    for (int i = 0; str[i] != '\0'; )
    {
        if (str[i] == 'C' &&
            str[i + 1] == 'a' &&
            str[i + 2] == 'o')
        {
            fprintf(output, "Ling");
            i += 3;
        }
        else
        {
            fputc(str[i], output);
            i++;
        }
    }

    fclose(input);
    fclose(output);

    return 0;
}
