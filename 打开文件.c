#include <stdio.h>

int main()
{
	FILE* fp = fopen("Ǯ��.c", "r");
	if (fp)
	{
		printf("OK");
	}
	else
	{
		printf("���޴��ļ�");
	}



}