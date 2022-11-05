#include <stdio.h>

int main()
{
    int N;
    char c;
    scanf("%d%c", &N, &c);

    for (int i = 0; i < N; i++)
    {
        for (int z = 0; z < N; z++)
        {
            printf("%c", c);
        }
        printf("\n");
    }


}