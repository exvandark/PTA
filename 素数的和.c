#include <stdio.h>

int main()
{
    int x, y, M, N, key, temp, t = 0, sum = 0, t1 = 0;
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
            sum = sum + key;
            t1 += 1;
        }
        t = 0;
    }

    printf("%d %d", t1, sum);

    return 0;
}