# include <stdio.h>
int day_of_year(int year, int month, int day);

int main(void)
{
    int day, month, year;

    scanf_s("%d%d%d", &year, &month, &day);
    printf("%d\n", day_of_year(year, month, day));

    return 0;
}

int day_of_year(int year, int month, int day)
{
    int tmp = 0;
    if (year / 4 == 0 && year % 100 != 0)
    {
        for (int i = 0; i <= month - 1; i++)
        {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            {
                tmp = tmp + 31;
            }
            else if (i == 4 || i == 6 || i == 9 || i == 11)
            {
                tmp = tmp + 30;
            }
            else if (i == 2)
            {
                tmp = tmp + 29;
            }
        }
    }
    else if (year % 400 == 0)
    {
        for (int i = 0; i <= month - 1; i++)
        {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            {
                tmp = tmp + 31;
            }
            else if (i == 4 || i == 6 || i == 9 || i == 11)
            {
                tmp = tmp + 30;
            }
            else if (i == 2)
            {
                tmp = tmp + 29;
            }
        }
    }
    else
    {
        for (int i = 0; i <= month - 1; i++)
        {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            {
                tmp = tmp + 31;
            }
            else if (i == 4 || i == 6 || i == 9 || i == 11)
            {
                tmp = tmp + 30;
            }
            else if (i == 2)
            {
                tmp = tmp + 28;
            }
        }

    }
    tmp = tmp + day;
    return tmp;

    }