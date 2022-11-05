#include <stdio.h>

int main()
{
	int a[20] = { 0 };
	int b[20] = { 0 };

	int a1[20] = { 0 },sum1=1;
	int b1[20] = { 0 },sum2=1;

	int N1,t1=0;
	scanf("%d", &N1);
	for (int i = 0; i < N1; i++)
	{
		scanf("%d", &a[i]);
	}//赋值给a

	int N2,t2=0;
	scanf("%d", &N2);
	for (int i = 0; i < N2; i++)
	{
		scanf("%d",& b[i]);
	}//赋值给b

	a1[0] = a[0];
	for (int i = 0; i < N1; i++)
	{
		for (int z = 0; z < sum1; z++)
		{
			if (a1[z] == a[i])
			{
				t1 = 1;
			}
		}
		if (t1 == 0)
		{
			a1[sum1] = a[i];
			sum1 += 1;
		}
		t1 = 0;
	}//提取a的值


	b1[0] = b[0];
	for (int i = 0; i < N2; i++)
	{
		for (int z = 0; z < sum2; z++)
		{
			if (b1[z] == b[i])
			{
				t2 = 1;
			}
		}
		if (t2 == 0)
		{
			b1[sum2] = b[i];
			sum2 += 1;
		}
		t2 = 0;
	}//提取b的值

	int x=0;
	int final[20]={0}, t3 = 0;//接受最终结果

	
	
for (int i = 0; i < sum1; i++)
{
	for (int z = 0; z < sum2; z++)
	{
		if (a1[i] == b1[z])
		{
			x += 1;
		}
	}
	if (x == 0)
	{
		final[t3] = a1[i];
		t3 += 1;
	}
	x = 0;
}//获取a的值
for (int i = 0; i < sum2; i++)
{
	for (int z = 0; z < sum1; z++)
	{
		if (a1[z] == b1[i])
		{
			x += 1;
		}
	}
	if (x == 0)
	{
		final[t3] = b1[i];
		t3 += 1;
	}
	x = 0;
}//获取b的值

for (int i = 0; i < t3 - 1; i++)
{
	printf("%d ", final[i]);

}
printf("%d", final[t3-1]);//输出

}