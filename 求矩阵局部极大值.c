#include <stdio.h>

int main()
{
	int M, N, a[21][20] = { 10 },t=0;
	scanf("%d%d", &M, &N);

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &a[i][j]);
			
		}
		
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i != 0 && j != 0 && i != M - 1 && j != N - 1)
			{
				if (a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j] && a[i][j] > a[i][j + 1] && a[i][j] > a[i][j - 1])
				{
					printf("%d %d %d\n", a[i][j], i + 1, j + 1);
					t++;
				}
			}
		}
	}

	if (t == 0)
	{
		printf("None %d %d", M, N);
	}
}