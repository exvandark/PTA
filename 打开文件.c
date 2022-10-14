#include <stdio.h>

int main()
{
	FILE* fp = fopen("钱款.c", "r");
	if (fp)
	{
		printf("OK");
	}
	else
	{
		printf("查无此文件");
	}



}