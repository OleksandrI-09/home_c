// Student ID: D01-148-10
// HW9, Task F12 - Swap minimum and maximum elements

void change_max_min(int size, int a[])
{
    int min_index = 0;
    int max_index = 0;

    for (int i = 1; i < size; i++)
    {
        if (a[i] < a[min_index])
            min_index = i;

        if (a[i] > a[max_index])
            max_index = i;
    }

    int temp = a[min_index];
    a[min_index] = a[max_index];
    a[max_index] = temp;
}
