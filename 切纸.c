#include <stdio.h>
#include <malloc.h>


typedef struct Array
{
	int* array;
	int size;

}Array;

Array a;
Array b;
Array num;

int main()
{
	int n;
	scanf("%d", &n);//�����ʼֵ
	a.size = n;
	a.array = (int*)malloc(sizeof(int) * a.size);

	for (int* i = a.array; i < a.array + n; i++)
	{
		scanf("%d", i);
	}//��������

	int M;
	scanf("%d",&M);
	num.size = M;
	num.array = (int*)malloc(sizeof(int) * a.size);

	int k,may,temp1,n=0;

	for (int i=0; i < M; i++)
	{
		scanf("%d", &k);//�����ʼֵ
		b.size = k;
		b.array = (int*)malloc(sizeof(int) * b.size);

		for (int* i = b.array; i < b.array + k; i++)
		{
			scanf("%d", i);
		}//��������

		for (int* i = a.array; i < a.array + n; i++)
		{
			temp1 = i;
			if (*b.array == *i)
			{
				for (int* j = b.array; j < b.array + k; j++,i++)
				{
					if (*j != *i)
					{
						goto No;
					}
				}
				*(num.array+n)=*i;
				n += 1;
			}
		No:;
			i = temp1;
		}//Ѱ��λ��

	}

	for (int *i=num.array;i<num.array+M;i++)
	{
		if()
	}


	free(a.array);

}