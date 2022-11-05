#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000], t = 0, ii, jj;
    int temp = 0,max=0;

    for (int i = 0;; i++)
    {
        a[i] = getchar();
        t += 1;
        if (a[i] == '\n')
        {
            break;
        }
    }

    for (int i = 0; i < t + 1; i++)
    {
        
        for (int j = t; j != i; j--)
        {
            if (a[i] == a[j])
            {
                for (int x = i, y = j; a[x] == a[y]; x++, y--)
                { 
                    temp += 2;
                    if (x == y&&max<temp+1)
                    {
                        max = temp+1;
                        ;
                    }
                    if (x == y - 1&&max<temp)
                    {
                        max = temp;
                       ;
                    }

                }
                temp = 0;
            }
        }
    }
    
    printf("%d", max);
}