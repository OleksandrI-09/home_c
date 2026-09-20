// Student ID: D01-148-10
// HW9, Task F16 - Chessboard cell color

#include <stdio.h>

int main(void)
{
    char column;
    int row;

    scanf("%c%d", &column, &row);

    int col = column - 'A' + 1;

    if ((col + row) % 2 == 0)
        printf("BLACK\n");
    else
        printf("WHITE\n");

    return 0;
}
