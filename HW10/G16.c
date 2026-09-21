// Student ID: D01-148-10
// HW10, Task G16 - Replace Ling with Cao

#include <stdio.h>

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
        if (str[i] == 'L' &&
            str[i + 1] == 'i' &&
            str[i + 2] == 'n' &&
            str[i + 3] == 'g')
        {
            fprintf(output, "Cao");
            i += 4;
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
