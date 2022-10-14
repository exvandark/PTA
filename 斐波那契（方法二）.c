#include <stdio.h>

int main()
{
    int x = 1, y = 1, N;
    scanf_s("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 1)
        {
            printf("%11d", x);
            x = y + x;
        }
        else if (i % 2 != 1)
        {
            printf("%11d", y);
            y = y + x;
        }
        if (i % 5 == 0)
        {
            printf("\n");
        }


    }
    if (N%5 != 0)
    {
        printf("\n");
    }
    if (N < 1)
    {
        printf("Invalid.");
    }
}