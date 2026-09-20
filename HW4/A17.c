// Student ID: D01-148-10
// HW4, Task A17 - Season

#include <stdio.h>

int main(void)
{
    int month;

    scanf("%d", &month);

    if (month == 12 || month == 1 || month == 2)
        printf("winter\n");
    else if (month >= 3 && month <= 5)
        printf("spring\n");
    else if (month >= 6 && month <= 8)
        printf("summer\n");
    else
        printf("autumn\n");

    return 0;
}
