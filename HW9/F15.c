// Student ID: D01-148-10
// HW9, Task F15 - Count elements bigger by absolute value than maximum

int count_bigger_abs(int n, int a[])
{
    int max = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int abs_value;

        if (a[i] < 0)
            abs_value = -a[i];
        else
            abs_value = a[i];

        if (abs_value > max)
            count++;
    }

    return count;
}
