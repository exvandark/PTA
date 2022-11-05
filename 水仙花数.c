#include <stdio.h>

int main()
{
	int n,b,s,g;
	scanf("%d", &n);
	if (n >= 100 && n < 999)
	{
		b = n / 100;
		s = n / 10 % 10;
		g = n % 100 % 10;

		b = b * b * b;
		s = s * s * s;
		g = g * g * g;

		if (n == b + s + g)
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}
	}
	else
	{
		printf("Invalid Value.");
	}
}