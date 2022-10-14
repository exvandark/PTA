#include <stdio.h>

int main()
{
    int N, min, x, temp;
    scanf_s("%d", &N);
    int a[10] = { 0 };
        min = 1000000;
    for (int i = 0; i < N; i++)
    {
        scanf_s("%d", &a[i]);

        if (min > a[i])
        {
            min = a[i];
            x = i;
        }
    }

    temp = a[0];
    a[0] = a[x];
    a[x] = temp;

    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
}