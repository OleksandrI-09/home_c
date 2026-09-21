// Student ID: D01-148-10
// HW10, Task G18 - Remove extra spaces

#include <stdio.h>
#include <string.h>

void remove_extra_spaces(char str[])
{
    int read = 0;
    int write = 0;
    int space = 0;

    /* Skip spaces at the beginning */
    while (str[read] == ' ')
        read++;

    while (str[read] != '\0')
    {
        if (str[read] == ' ')
        {
            space = 1;
        }
        else
        {
            if (space && write > 0)
                str[write++] = ' ';

            str[write++] = str[read];
            space = 0;
        }

        read++;
    }

    str[write] = '\0';
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

    remove_extra_spaces(str);

    fprintf(output, "%s\n", str);

    fclose(input);
    fclose(output);

    return 0;
}
