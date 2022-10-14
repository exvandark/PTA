#include <stdio.h>

int main()
{
    int N, x=0, o = 0, j = 0;
   ( scanf_s("%d", &N));

    for (int i = 0; i < N; i++)
    {
        scanf_s("%d",& x);
        if (x % 2 == 0)
        {
            o += 1;
        }
        else
            (x % 2 != 0);
        {
            j += 1;
        }
    }
    printf("%d %d", j, o);

    return 0;
}