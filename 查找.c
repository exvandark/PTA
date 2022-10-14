#include <stdio.h>

int main()
{
    int n, a[10] = { 0 }, x;
    int t;
    scanf_s("%d", &n);
    scanf_s("%d", &x);

    for (int i = 0; i < n; i++)
    {
        int z;
        scanf_s("%d", &z);
        a[i] = a[i] + z;
    }
    for (int i = 0; i < n; i++)
    {

        if (a[i] == x)
        {
            printf("%d\n", i);
            t += 1;
        }
    }
    if (t == 0)
    {
        printf("Not Found");
    }


    return 0;
}