// Student ID: D01-148-10
// HW9, Task F6 - Two equal elements

int is_two_same(int size, int a[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
                return 1;
        }
    }

    return 0;
}
