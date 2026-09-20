// Student ID: D01-148-10
// HW9, Task F2

void sort_even_odd(int n, int a[])
{
    int temp[n];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            temp[k] = a[i];
            k++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            temp[k] = a[i];
            k++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }
}
