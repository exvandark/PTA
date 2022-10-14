#include <stdio.h>

int main()
{
    int N, x = 1, y = 1;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 != 0)
        {
            printf("         %2d", x);
            x = x + y;
        }
        else if (i % 2 == 0)
        {
            printf("         %2d", y);
            y = x + y;
        }

        if (i % 5 == 0)
        {
            printf("\n");
        }
        else if (i == N)
        {
            printf("\n");
        }
    }
    if (N < 1)
    {
        printf("Invalid.");

    }
    return 0;
}