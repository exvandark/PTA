#include <stdio.h>
#include <math.h>

int main()
{
    int N, x = 0, i=0;
    int a[10] = { 0 };
    scanf_s("%d", &N);

    for (; N > 0;)
    {
        if (N > 99999)
        {
            x = x + N % 99999;
            i = x % 10;
            a[i] = a[i] + 1;
            x = x / 10;
            N = N / 99999;
        }
        else if (N < 100000)
        {
            i = N % 10;
            a[i] = a[i] + 1;
            N = N / 10;
        }
    }

    for (int z = 0; z < i; z++)
    {
        if (a[i] != 0)
        {
            printf("%d:%d", i, a[i]);
        }

    }

    return 0;
}