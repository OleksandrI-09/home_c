// Student ID: D01-148-10
// HW10, Task G2 - Letters and even digits

#include <stdio.h>

int main(void)
{
    FILE *input;
    FILE *output;

    int n;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    fscanf(input, "%d", &n);

    int letter = 0;
    int digit = 2;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(output, "%c", 'A' + letter);
            letter++;
        }
        else
        {
            fprintf(output, "%d", digit);

            digit += 2;

            if (digit > 8)
                digit = 2;
        }
    }

    fprintf(output, "\n");

    fclose(input);
    fclose(output);

    return 0;
}
