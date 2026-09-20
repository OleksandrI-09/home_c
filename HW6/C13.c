// Student ID: D01-148-10
// HW6, Task C13 - Cosine as a series

#include <stdio.h>

float cosinus(float x)
{
    float pi = 3.14159265f;
    float rad = x * pi / 180.0f;

    float term = 1.0f;
    float sum = 0.0f;
    int n = 1;

    while (term > 0.001f || term < -0.001f)
    {
        sum += term;

        term = -term * rad * rad / ((2 * n - 1) * (2 * n));
        n++;
    }

    return sum;
}

int main(void)
{
    float x;

    scanf("%f", &x);

    printf("%.3f\n", cosinus(x));

    return 0;
}
