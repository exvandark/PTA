#include <stdio.h>

int main()
{
	int a[6][6],m,n,t,row;
	scanf("%d%d", &m, &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j < n; j++)
		{
			row = j + m;
			while (row>=n)
			{
				row = row - n ;
			}
			t = a[i][j];
			a[i][j] = a[i][row];
			a[i][row] = t;
		}
	}

	printf("\n");

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}