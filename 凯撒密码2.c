#include <stdio.h>

int main()
{
    char a[80];
    gets(a);


    int n;
    scanf("%d", &n);

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            for (; a[i] + n > 'Z';)
            {
                n = n - 26;
            }
            for (; a[i] + n < 'A';)
            {
                n = n + 26;
            }
            a[i] = a[i] + n;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            for (; a[i] + n > 'z';)
            {
                n = n - 26;
            }
            for (; a[i] + n < 'a';)
            {
                n = n + 26;
            }
            a[i] = a[i] + n;
        }
    }

    printf("%s", a);
}