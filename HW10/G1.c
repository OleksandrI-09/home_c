// Student ID: D01-148-10
// HW10, Task G1 - Print string three times

#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *input;
    FILE *output;

    char str[102];

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    fgets(str, sizeof(str), input);

    str[strcspn(str, "\r\n")] = '\0';

    int length = strlen(str);

    fprintf(output, "%s, %s, %s %d\n",
            str, str, str, length);

    fclose(input);
    fclose(output);

    return 0;
}
