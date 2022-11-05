#include <stdio.h>

int main()
{
    int N, temp, max = 0;
    char num;
    int a[10] = { 0 };
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        temp = getchar();
        switch (temp)
        {
            case 1:a[1] += 1;
                break;
            case 2:a[2] += 2;
                break;
            case 3:a[3] += 1;
                break;
            case 4:a[4] += 2;
                break;
            case 5:a[5] += 1;
                break;
            case 6:a[6] += 2;
                break;
            case 7:a[7] += 1;
                break;
            case 8:a[8] += 1;
                break;
            case 9:a[9] += 2;
                break;
            case 0:a[0] += 1;
                break;

        }
            

    }
    
    for (int i = 0; i < N; i++)
    {
        if (max < a[i])
        {
            num = i;
        }

    }
    printf("%d:%d",max,num);
    for (int i = 0; i < N; i++)
    {
        if (max == a[i])
        {
            num = i;
            printf(" %d",num);
        }

    }


}