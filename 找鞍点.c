#include <stdio.h>

typedef struct T
{
	int placex;
	int placey;
	int item;
}T;

int main()
{
	int n, a[6][6],t=0,temp;
	T min[6], max[6];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		max[i].item = a[i][0];
		for (int j = 0; j < n; j++)
		{
			
			if (a[i][j] > max[i].item)
			{
				max[i].item = a[i][j];
				max[i].placex = i;
				max[i].placey = j;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		min[i].item = a[0][i];
		for (int j = 0; j < n; j++)
		{

			if (a[j][i] < min[i].item)
			{
				min[i].item = a[j][i];
				min[i].placex = j;
				min[i].placey = i;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (min[i].item == max[j].item)
			{
				temp = i;
				t += 1;
			}
		}
	}

	if (n > 1)
	{
		if (t == 0)
		{
			printf("NONE");
		}
		else
		{
			printf("%d %d", min[temp].placex, min[temp].placey);
		}
	}
	else
	{
		printf("0 0");
	}
}