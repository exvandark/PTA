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
		
	}//����·��

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}//�������

	for (int i = 0; i < q; i++)
	{
		scanf("%d", &change);
		scanf("%d", &a[change]);//�ı����

		for (;;)
		{
			for (int i = 0; i < m; i++)
			{
				if ((way + i)->f == temp)
				{
					(searcher + i)->node = *(way + i);
					temp = (way + i)->t;
				}
			}//ѡ��·��
		}//(��֪��·��Ӧ����ô�ֿ���)


	}


}

	//{
	//	searcher->c = way->c;
	//	searcher->f = way->f;
	//	searcher->t = way->t;
	//	searcher->d = way->d;
	//}