#include <stdio.h>

int main()
{
    int N;
    char M;
    int t = 0, sum = 0, z;
    scanf("%d", &N);

    char num[19];

    getchar();
    for (int x = 1; x <= N; x++)
    {
        for (int i = 0; i < 17; i++)
        {
            num[i] = getchar();
            switch (i)
            {
            case 0:t = (num[i] - 48) * 7;
                break;
            case 1:t = (num[i] - 48) * 9;
                break;
            case 2:t = (num[i] - 48) * 10;
                break;
            case 3:t = (num[i] - 48) * 5;
                break;
            case 4:t = (num[i] - 48) * 8;
                break;
            case 5:t = (num[i] - 48) * 4;
                break;
            case 6:t = (num[i] - 48) * 2;
                break;
            case 7:t = (num[i] - 48) * 1;
                break;
            case 8:t = (num[i] - 48) * 6;
                break;
            case 9:t = (num[i] - 48) * 3;
                break;
            case 10:t = (num[i] - 48) * 7;
                break;
            case 11:t = (num[i] - 48) * 9;
                break;
            case 12:t = (num[i] - 48) * 10;
                break;
            case 13:t = (num[i] - 48) * 5;
                break;
            case 14:t = (num[i] - 48) * 8;
                break;
            case 15:t = (num[i] - 48) * 4;
                break;
            case 16:t = (num[i] - 48) * 2;
                break;
            }
        }
        sum += t;

        z = sum % 11;
        if (z <= 10 && z >= 0)
        {
            num[17] = getchar();
            if (z != num[17] - 48)
            {
                printf("%s", num);
            }
        }
    }


}