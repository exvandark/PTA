#include <stdio.h>
#include <string.h>

typedef struct hei
{
	char h[1001][20];
	int sex;
	int partner;
}hei;

int main()
{
	char a[1001][20] = { '\n' }, temp[7] = { '\n' };
	int n, t = 0;
	scanf("%d", &n);

	getchar();

	for (int i = 0; i < n; i++)
	{
		gets(a[i]);
	}//获取可能暗恋对象

	int M;
	scanf("%d", &M);



	hei H;

	for (int i = 0; i < M; i++)
	{
		getchar();
		for (int j = 0; H.h[i][j - 1] != ' '; j++)
		{
			H.h[i][j] = getchar();
			t = j;
		}//获取名字

		H.h[i][t] = '\0';

		for (int j = 0; temp[j - 1] != ' '; j++)
		{
			temp[j] = getchar();
		}//获取性别

		if (temp[0] == 'f')
		{
			H.sex = 1;
		}
		else if (temp[0] == 'm')
		{
			H.sex = 0;
		}

		scanf("%d", &H.partner);

		for (int j = 0, x = 0; j < n; j++, x++)
		{
			if (strcmp(a[j],H.h[i])==0 && H.sex == 1 && H.partner == 1)
			{
				printf("%s", H.h[i]);
				a[j][0] = '\0';
			}
		}

	}


}