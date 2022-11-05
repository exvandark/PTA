#include <stdio.h>

int fib(int n);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", fib(n));

    return 0;
}

/* 你的代码将被嵌在这里 */

int fib(int n)
{
    int temp1 = 1, temp2 = 1, i;

    for (i = 3; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            temp1 += temp2;
        }
        else
        {
            temp2 += temp1;
        }
    }
    if (temp1 > temp2)
    {
        printf("%d", temp1);
    }
    else
    {
        printf("%d", temp2);
    }
}