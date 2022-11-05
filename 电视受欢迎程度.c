#include <stdio.h>

int main()
{
    int n, t=0;
    scanf("%d", &n);

    int a[8] = { 0 };

    for (int i = 0; i < n; i++)
    {
        scanf("%d", t);
        a[t] += 1;
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%4d %4d", i + 1, a[i]);
    }
}