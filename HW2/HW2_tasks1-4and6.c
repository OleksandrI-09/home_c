// Student ID: D01-148-10
// HW2

#include <stdio.h>

int main(void)
{
    printf("1. decimal(12345678) is hexadecimal(BC614E)\n");
    printf("   decimal(1000000) is hexadecimal(F4240)\n\n");
    printf("2. hexadecimal(12345678) is decimal(305419896)\n");
    printf("   hexadecimal(1000000) is decimal(16777216)\n\n");
    printf("3. X=A&&B&&(!C||C)=A&&B\n\n");
    printf("4. . A . B . !A . !B . !A||B . BifA . A&&B . !A&&!B . (A&&B)||(!A&&!B) . AeqB .\n");
    printf("   . 0 . 0 .  1 . 1  .    1  .   1  .   0  .    1   .        1         .   1  .\n");
    printf("   . 0 . 1 .  1 . 0  .    1  .   1  .   0  .    0   .        0         .   0  .\n");
    printf("   . 1 . 0 .  0 . 1  .    0  .   0  .   0  .    0   .        0         .   0  .\n");
    printf("   . 1 . 1 .  0 . 0  .    1  .   1  .   1  .    0   .        1         .   1  .\n");
    printf("So, {if A than B}=!A||B; and {A equals B}=(A&&B)||(!A&&!B).\n\n");
    printf("5. Please see attachedscreenshot\n\n");
    printf("6. X=(if B than A)*!(A+B)*(if A than C)=!A*!B\n");

    return 0;
}
