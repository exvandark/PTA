#include <stdio.h>

int main()
{
	int N,a[11][11];
	scanf("%d" ,&N);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (j == 0 || j == i - 1)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		for (int n=N-i;n>0;n--)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
}