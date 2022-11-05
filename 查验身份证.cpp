#include <stdio.h>

int main()
{
	int a[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	int sum=0;
	int z,N,t=0,tx=0;
	char M,b[17]={0},temp=0;

	scanf("%d", &N);

	for (int j = 0; j < N; j++)
	{
		getchar();
		for (int i = 0; i < 17; i++)
		{
			scanf("%c",&temp);
			if (temp == 'X')
			{
				temp = 58;
				b[i] = 'X';
				tx += 1;
				goto pass;
			}
			b[i] = temp;
		pass:;
			sum = sum + (temp -48)* a[i];

		}

		M = getchar()-48;
		z = (sum % 11);
			sum = 0;
		if (z != M||tx!=0)
		{
			for (int i = 0; i < 17; i++)
			{
				printf("%c", b[i]);
			}
			M = M + 48;
			printf("%c\n", M);
			t += 1;
		}
		
	}

	if (t == 0)
	{
		printf("All passed");
	}
}
