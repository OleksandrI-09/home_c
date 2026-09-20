// Student ID: D01-148-10
// HW9, Task F7 - Compress binary array

int compression(int a[], int b[], int N)
{
    int k = 0;
    int count = 1;

    if (N == 0)
        return 0;

    if (a[0] == 1)
    {
        b[k] = 0;
        k++;
    }

    for (int i = 1; i < N; i++)
    {
        if (a[i] == a[i - 1])
        {
            count++;
        }
        else
        {
            b[k] = count;
            k++;
            count = 1;
        }
    }

    b[k] = count;
    k++;

    return k;
}
