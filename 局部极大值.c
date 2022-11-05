#include<stdio.h>

int main()
{
    int A[20][21]; int M; int N; int sum = 0;
    scanf("%d %d", &M, &N);
    for (int i = 1; i <= M; ++i) 
    {
        for (int j = 1; j <= N; ++j) 
        {
            scanf("%d", &A[i][j]);

        }

    }
    for (int i = 2; i < M; ++i) 
    {
        for (int j = 2; j < N; ++j)
        {
            if (A[i][j] > A[i - 1][j] && A[i][j] > A[i][j + 1] && A[i][j] > A[i + 1][j] && A[i][j] > A[i][j - 1]) 
            {
                printf("%d %d %d\n", A[i][j], i, j); sum++;
            }

        }

    }if (sum == 0) { printf("None %d %d", M, N); }

    return 0;
}