// Student ID: D01-148-10
// HW10, Task G8 - Extract and sort numbers from string

#include <stdio.h>

int main(void)
{
    FILE *input;
    FILE *output;

    char str[1002];
    int numbers[1000];
    int count = 0;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    fgets(str, sizeof(str), input);

    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            int number = 0;

            while (str[i] >= '0' && str[i] <= '9')
            {
                number = number * 10 + (str[i] - '0');
                i++;
            }

            numbers[count] = number;
            count++;
        }
        else
        {
            i++;
        }
    }

    /* Sort ascending */
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (i > 0)
            fprintf(output, " ");

        fprintf(output, "%d", numbers[i]);
    }

    fprintf(output, "\n");

    fclose(input);
    fclose(output);

    return 0;
}
