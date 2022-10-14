#include <stdio.h>

int main()
{
    int n;
    int a[10] = { 0 };
    int min = a[0], min1;
    scanf("%d", &n);



    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);


    }

    for (int i = 0; i < n; i++)
    {

        if (a[i] < min)
        {
            min = a[i];
            min1 = i;
        }

    }

    printf("%d %d", min, min1);

    /*        for(int i=0;i<n;i++)
        {

            if(a[i]==min)
            {
                printf(" %d",i);
            }

        }*/

}