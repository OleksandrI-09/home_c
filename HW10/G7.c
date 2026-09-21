// Student ID: D01-148-10
// HW10, Task G7 - Count lowercase and uppercase letters

#include <stdio.h>

int main(void)
{
    FILE *input;
    FILE *output;

    char c;
    int lowercase = 0;
    int uppercase = 0;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    while ((c = fgetc(input)) != EOF)
    {
        if (c >= 'a' && c <= 'z')
            lowercase++;
        else if (c >= 'A' && c <= 'Z')
            uppercase++;
    }

    fprintf(output, "%d %d\n", lowercase, uppercase);

    fclose(input);
    fclose(output);

    return 0;
}
