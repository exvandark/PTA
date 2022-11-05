#include <stdio.h>

void month_day(int year, int yeardy, int* pmonth, int* pday);


int main()
{
	int day, month, year, yearday; /*  定义代表日、月、年和天数的变量*/
	scanf("%d%d", &year, &yearday);
	month_day(year, yearday, &month, &day);/* 调用计算月、日函数  */
	printf("%d %d %d\n", year, month, day);
	return 0;

}

void month_day(int year,int yeardy,int*pmonth, int* pday)
{
	int i = 1;
	if((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0)
	{
		for (; yeardy >= 29; i++)
		{
			switch (i)
			{
			case 1:yeardy = yeardy - 31;
				break;
			case 3:yeardy = yeardy - 31;
				break;
			case 5:yeardy = yeardy - 31;
				break;
			case 7:yeardy = yeardy - 31;
				break;
			case 8:yeardy = yeardy - 31;
				break;
			case 10:yeardy = yeardy - 31;
				break;
			case 12:yeardy = yeardy - 31;
				break;
			case 2:yeardy = yeardy - 29;
				break;
			case 4:yeardy = yeardy - 30;
				break;
			case 6:yeardy = yeardy - 30;
				break;
			case 9:yeardy = yeardy - 30;
				break;
			case 11:yeardy = yeardy - 30;
				break;
			}
		}
		*pmonth = i;
		*pday = yeardy;
	}
	 else
	{
		for (; yeardy >= 28; i++)
		{
			switch (i)
			{
			case 1:yeardy=yeardy - 31;
				break;
			case 3:yeardy = yeardy - 31;
				break;
			case 5:yeardy = yeardy - 31;
				break;
			case 7:yeardy = yeardy - 31;
				break;
			case 8:yeardy = yeardy - 31;
				break;
			case 10:yeardy = yeardy - 31;
				break;
			case 12:yeardy = yeardy - 31;
				break;
			case 2:yeardy = yeardy - 28;
				break;
			case 4:yeardy = yeardy - 30;
				break;
			case 6:yeardy = yeardy - 30;
				break;
			case 9:yeardy = yeardy - 30;
				break;
			case 11:yeardy = yeardy - 30;
				break;
			}
		}
		*pmonth = i;
		*pday = yeardy;
	}
}