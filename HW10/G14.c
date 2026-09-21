// Student ID: D01-148-10
// HW10, Task G14 - Hello name and surname

#include <stdio.h>

int main(void)
{
    FILE *input;
    FILE *output;

    char surname[101];
    char name[101];
    char patronymic[101];

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    fscanf(input, "%100s %100s %100s",
           surname, name, patronymic);

    fprintf(output, "Hello, %s %s!\n", name, surname);

    fclose(input);
    fclose(output);

    return 0;
}
