#include <stdio.h>

int main()
{
    char a[80];
    int n=0,x;

    for (int i = 0;; i++)
    {
        a[i]=getchar();
        n++;
        if (a[i] == '\n')
        {
            break;
        }
    }

    scanf("%d", &x);
    for (;;)
    {
        if (x > 26)
        {
            x = x - 26;
        }
        else
        {
            break;
        }
    }

    if (x > 0)
    {
        for (int i = 0;i<=n; i++)
        {
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                if (a[i] + x > 'z')
                {
                    a[i] = a[i] + x - 26;
                }
                else
                {
                    a[i] = a[i] + x;
                }
            }
            else if (a[i] >= 'A' && a[i] <= 'Z')
            {
                if (a[i] + x > 'Z')
                {
                    a[i] = a[i] + x - 26;
                }
                else
                {
                    a[i] = a[i] + x;
                }
            }
        }

        for (int i = 0;; i++)
        {
            printf("%c", a[i]);
            if (a[i] == '\n')
            {
                break;
            }
        }
    }
}