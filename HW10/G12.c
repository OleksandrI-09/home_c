// Student ID: D01-148-10
// HW10, Task G12 - Split sentence into words

#include <stdio.h>

int main(void)
{
    FILE *input;
    FILE *output;

    char word[1001];

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    while (fscanf(input, "%1000s", word) == 1)
    {
        fprintf(output, "%s\n", word);
    }

    fclose(input);
    fclose(output);

    return 0;
}
