#include <stdio.h>

int main()
{
    int M;
    scanf_s("%d", &M);

    if (M <= 0)
    {
        printf("No");

    }
    else if (M == 1)
    {
        printf("No");
    }
    else if (M == 2)
    {
        printf("Yes");
    }
    else
    {
        for (int i = 1; i < M; i++)
        {
            for (int z = 1; z < M; z++)
            {
                if (i * z == M)
                {
                    printf("No");
                    goto no;
                }
            }
        }
        printf("Yes");
    }


no:return 0;
}