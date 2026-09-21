// Student ID: D01-148-10
// HW10, Task G21 - Equilateral triangle from stars

#include <stdio.h>

int main(void)
{
    FILE *input;
    FILE *output;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    int c;
    int stones = 0;

    while ((c = fgetc(input)) != EOF)
    {
        if (c == '*')
            stones++;
    }

    int rows = 0;
    int sum = 0;

    while (sum < stones)
    {
        rows++;
        sum += rows;
    }

    if (sum != stones || stones == 0)
    {
        fprintf(output, "NO\n");
    }
    else
    {
        for (int row = 1; row <= rows; row++)
        {
            /* Leading spaces */
            for (int i = 0; i < rows - row; i++)
                fprintf(output, " ");

            /* Stars */
            for (int i = 1; i <= row; i++)
            {
                fprintf(output, "*");

                if (i < row)
                    fprintf(output, " ");
            }

            fprintf(output, "\n");
        }
    }

    fclose(input);
    fclose(output);

    return 0;
}
