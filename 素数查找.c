#include <stdio.h>

int main()
{
    int x, y, M, N, key, temp,t=0,t1=0;
    scanf_s("%d", &M);
    scanf_s("%d", &N);

    for (key = M; key <= N; key++)
    {
        for (x = 1; x < key; x++)
        {
            for (y = 1; y < key; y++)
            {
                temp = x * y;
                
                if (temp != key)
                {
                    t += 1;
                }
            }
        }
        if (t == (key - 1) * (key - 1))
        {
            printf("    %2d", key);
            t1 += 1;
        }
        t = 0;
        if (t1 == 10)
        {
            printf("\n");
            t1 = 0;
        }
        if (M > N)
        {
            printf("Invalid.");
        }
    }
    return 0;
}