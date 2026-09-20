// Student ID: D01-148-10
// HW9, Task F5

int find_max_array(int size, int a[])
{
    int max = a[0];

    for (int i = 1; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    return max;
}
