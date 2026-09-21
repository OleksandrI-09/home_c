// Student ID: D01-148-10
// HW10, Task G13 - Change file extension to .html

#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *input;
    FILE *output;

    char path[1002];

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    fgets(path, sizeof(path), input);

    path[strcspn(path, "\r\n")] = '\0';

    int last_slash = -1;
    int last_dot = -1;

    for (int i = 0; path[i] != '\0'; i++)
    {
        if (path[i] == '/')
            last_slash = i;

        if (path[i] == '.')
            last_dot = i;
    }

    if (last_dot > last_slash)
        path[last_dot] = '\0';

    fprintf(output, "%s.html\n", path);

    fclose(input);
    fclose(output);

    return 0;
}
