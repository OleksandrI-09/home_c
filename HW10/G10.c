// Student ID: D01-148-10
// HW10, Task G10 - Longest word

#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *input;
    FILE *output;

    char word[1001];
    char longest[1001] = "";

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    while (fscanf(input, "%1000s", word) == 1)
    {
        if (strlen(word) > strlen(longest))
            strcpy(longest, word);
    }

    fprintf(output, "%s\n", longest);

    fclose(input);
    fclose(output);

    return 0;
}
