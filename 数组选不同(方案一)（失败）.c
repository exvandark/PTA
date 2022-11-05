#include <stdio.h>

int main()
{
    int a[20] = { 0 };
    int b[20] = { 0 };
    int c[21] = { 0 };

    int N1, N2, t = 0, t2 = 0, t1 = 0;
    scanf("%d", &N1);

    for (int i = 0; i < N1; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &N2);

    for (int i = 0; i < N2; i++)
    {
        scanf("%d", &b[i]);
    }


    if (N1 > N2)
    {
        for (int i = 0; i < N1; i++)
        {
            for (int z = 0; i < N2; z++)
            {
                if (a[i] == b[z])
                {
                    t1 += 1;
                }
            }
            if (t1 == 0)
            {
                c[t2] = a[i];
                t2++;
            }
            t1 = 0;
        }
    }
    else
    {
        for (int i = 0; i < N2; i++)
        {
            for (int z = 0; z < N1; z++)
            {
                if (a[z] == b[i])
                {
                    t1 += 1;
                }
            }
            if (t1 == 0)
            {
                c[t2] = b[i];
                t2++;
              
            }
            t1 = 0;
        }
    }
    for (int i = 0; i < t2; i++)
    {
        printf("%d ", c[i]);
    }

}