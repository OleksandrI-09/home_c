// Student ID: D01-148-10
// HW9, Task F13 - Count elements in interval

int count_between(int from, int to, int size, int a[])
{
    int count = 0;

    if (from > to)
    {
        int temp = from;
        from = to;
        to = temp;
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] >= from && a[i] <= to)
            count++;
    }

    return count;
}
