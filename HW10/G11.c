// Student ID: D01-148-10
// HW10, Task G11 - Count words ending with a

#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *input;
    FILE *output;

    char word[1001];
    int count = 0;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    while (fscanf(input, "%1000s", word) == 1)
    {
        int length = strlen(word);

        if (length > 0 && word[length - 1] == 'a')
            count++;
    }

    fprintf(output, "%d\n", count);

    fclose(input);
    fclose(output);

    return 0;
}
