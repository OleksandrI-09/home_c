// Student ID: D01-148-10
// HW9, Task F14 - Sum elements in interval

int sum_between_ab(int from, int to, int size, int a[])
{
    int sum = 0;

    if (from > to)
    {
        int temp = from;
        from = to;
        to = temp;
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] >= from && a[i] <= to)
            sum += a[i];
    }

    return sum;
}
