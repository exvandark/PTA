#include <stdio.h>
enum MONTH  {
	jan=31,feb1=28,feb2=29,mar=31,apr=30,may=31,jun=30,jul=31,aug=31,sep=30,oct=31,nov=30,dec=31
};

int main()
{
	int year, month, day;
	scanf("%d/%d/%d", &year, &month, &day);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		for (int i=1;i<=month;i++ )
		{
			switch (i)
			{
			case 1:day + jan;
				break;
			case 2:day + feb2;
				break;
			case 3:day + feb1;
				break;
			case 4:day + mar;
				break;
			case 5:day;
			default:
				break;
			}
		}
	}
}