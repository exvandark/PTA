#include <stdio.h>
#include <malloc.h>


typedef struct way
{
	int f;
	int t;
	int c;
	int d;
	
}w;

typedef struct path
{
	w node;
}path;

int main()
{
	int n, m, q,change,max,temp=1;
	scanf("%d%d%d", &n, &m, &q);

	w* way;
	way = (w*)malloc(sizeof(w) * m);

	path* searcher;
	searcher = (path*)malloc(sizeof(path) * m);

	int* a;
	a = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < m; i++)
	{
		scanf("%d%d%d%d", &(way+i)->f, &(way + i)->t, &(way + i)->c, &(way + i)->d);
		if (way->f >= way->t)
		{
			i--;
		}
		
	}//输入路线

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}//输入汇率

	for (int i = 0; i < q; i++)
	{
		scanf("%d", &change);
		scanf("%d", &a[change]);//改变汇率

		for (;;)
		{
			for (int i = 0; i < m; i++)
			{
				if ((way + i)->f == temp)
				{
					(searcher + i)->node = *(way + i);
					temp = (way + i)->t;
				}
			}//选择路径
		}//(不知道路径应该怎么分开了)


	}


}

	//{
	//	searcher->c = way->c;
	//	searcher->f = way->f;
	//	searcher->t = way->t;
	//	searcher->d = way->d;
	//}