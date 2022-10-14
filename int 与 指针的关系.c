#include <stdio.h>

int main()
{
	int b = 0;
	int* p;
	p = &b;

	int a;
	a = p;

	printf("%d\n", a);
	printf("%d\n", a);
	printf("%d\n", a);
	printf("%d\n", a);
	printf("%d\n", a);
	printf("%d\n", a);
}