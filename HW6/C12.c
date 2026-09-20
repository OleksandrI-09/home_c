// Student ID: D01-148-10
// HW6, Task C12 - Sine as a series

#include <stdio.h>

float sinus(float x)
{
    float pi = 3.14159265f;
    float rad = x * pi / 180.0f;

    float term = rad;
    float sum = 0.0f;
    int n = 1;

    while (term > 0.001f || term < -0.001f)
    {
        sum += term;

        term = -term * rad * rad / ((2 * n) * (2 * n + 1));
        n++;
    }

    return sum;
}

int main(void)
{
    float x;

    scanf("%f", &x);

    printf("%.3f\n", sinus(x));

    return 0;
}
