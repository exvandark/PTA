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
		scanf("%d", &n);//输入初始值
		a.size = n;
		a.array = (int*)malloc(sizeof(int) * a.size);

		for (int* i = a.array;i<a.array+n;i++)
		{
			scanf("%d",i);
		}//遍历

		for (int* i = a.array; i < a.array + n; i++)
		{
			printf("%d ", *i);
		}//遍历


		int* sreach;
		int S;
		scanf("%d", &S);//输入查找的位置（从0开始）
		sreach = a.array+S;
		printf("%d", &sreach);//访问单个数组单元

	}