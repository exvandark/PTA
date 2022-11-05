#include <stdio.h>

int main()
{
	int i, j,T,n,a[10][10],t=0;
	scanf("%d", &T);

	for (int z = 0; z < T; z++)
	{
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				scanf("%d",&a[i][j]);
			}
		}


		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i ; j++)
			{
				if (a[i][j] != 0)
				{
					printf("No\n");
					t++;
					goto No;
				}
			}
		}

		if (t == 0)
		{
			printf("Yes\n");
		}
	No:;
	}
}