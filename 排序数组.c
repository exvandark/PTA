#include <stdio.h>

int main()
{
    int a[11]={0};
    int N, X, num, temp, temp1, temp2;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &temp);
    if (temp >= a[N-1])
    {
        a[N ] = temp;
    }
    else if (temp <= a[0])
    {
        temp1 = a[0];
        a[0] = temp;
        for (int i = 0; i < N; i++)
        {
            temp2 = a[i + 1];
            a[i + 1] = temp1;
            temp1 = temp2;
        }
    }
    else
    {
        for (int i = 0; i < N; i++)
        {

            if (temp <= a[i] && temp >= a[i - 1])
            {
                temp1 = a[i];
                a[i] = temp;
                for (; i < N; i++)
                {
                    temp2 = a[i + 1];
                    a[i + 1] = temp1;
                    temp1 = temp2;
                }
            }

        }
    }
    if (N != 0)
    {
        for (int i = 0; i <= N; i++)
        {
            printf("%d ", a[i]);
        }
    }
}