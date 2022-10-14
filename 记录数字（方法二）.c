#include <stdio.h>

int main()
{
    double a[1000][3] = { {0,0,0} };

    int M;
    scanf_s("%d", &M);

    for (int i = 0; i < M; i++)
    {
        scanf_s("%lf", a[i][1]);
        scanf_s("%lf", a[i][2]);
        scanf_s("%lf", a[i][3]);
    }

    double b[1000][3] = { {0,0,0} };

    int N;
    scanf_s("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf_s("%lf", b[i][3]);
    }

    for (int i = 0; i < M; i++)
    {
        if (b[i][3] == a[i][3])
        {
            printf("%0.lf %0.lf", a[i][1], a[i][2]);
        }
    }
}