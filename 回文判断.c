#include <stdio.h>
#include <string.h>

int main()
{
    char a[80] = { '\0' };
    int n = 0;

    for (int i = 0;a[i]!='\n'; i++)
    {
        a[i]= getchar();
        n++;
        printf("%c", a[i]);
        //if (a[i] == '\n')
        //{
        //    break;
        //}
    }

    for (int i = 0; i < n + 1; i++)
    {
        if (i = n - i)
        {
            for (int j = 0; j < n + 1; j++)
            {
                printf("%s", a);
            }
            printf("Yes");
        }

        if (a[i] == a[n - i])
        {
            ;
        }
        else
        {
            for (int j = 0; j < n + 1; j++)
            {
                printf("%s", a);
            }
            printf("No");
        }
    }
}