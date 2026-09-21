// Student ID: D01-148-10
// HW10, Task G4 - Letters occurring once in both words

#include <stdio.h>

int main(void)
{
    FILE *input;
    FILE *output;

    char word1[101];
    char word2[101];

    int count1[26] = {0};
    int count2[26] = {0};

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    fscanf(input, "%100s %100s", word1, word2);

    for (int i = 0; word1[i] != '\0'; i++)
        count1[word1[i] - 'a']++;

    for (int i = 0; word2[i] != '\0'; i++)
        count2[word2[i] - 'a']++;

    int first = 1;

    for (int i = 0; i < 26; i++)
    {
        if (count1[i] == 1 && count2[i] == 1)
        {
            if (!first)
                fprintf(output, " ");

            fprintf(output, "%c", 'a' + i);
            first = 0;
        }
    }

    fprintf(output, "\n");

    fclose(input);
    fclose(output);

    return 0;
}
