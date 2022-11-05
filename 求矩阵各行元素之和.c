#include <stdio.h>

int main()
{
	int m, n,sum=0,temp;
	scanf("%d%d", &m, &n);

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &temp);
			sum += temp;
		}
		printf("%d\n", sum);
		sum = 0;
	}
}