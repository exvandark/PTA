#include <stdio.h>
#include <malloc.h>


	typedef struct Array
	{
		int* array;
		int size;

	}Array;

	Array a;

	int main()
	{
		int n;
		scanf("%d", &n);//�����ʼֵ
		a.size = n;
		a.array = (int*)malloc(sizeof(int) * a.size);

		for (int* i = a.array;i<a.array+n;i++)
		{
			scanf("%d",i);
		}//����

		for (int* i = a.array; i < a.array + n; i++)
		{
			printf("%d ", *i);
		}//����


		int* sreach;
		int S;
		scanf("%d", &S);//������ҵ�λ�ã���0��ʼ��
		sreach = a.array+S;
		printf("%d", &sreach);//���ʵ������鵥Ԫ

	}