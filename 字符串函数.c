#include <stdio.h>
#define MAXS 20

void zip(char* p);
 /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    scanf("%s", s);

    zip(s);
    printf("%s\n", s);

    return 0;
}

/* 请在这里填写答案 */

void zip(char* p)
{
    int t = 1;
    int j;

    for (int i = 0; p[i] != '\0'; i++)
    {

        if (p[i] == p[i + 1])
        {
            t = t + 1;
        }
        else if (t != 1)
        {
            if (t < 10)
            {
                p[i - t + 1] = t + 48;
                for (j = i; p[j + 1] != '\0'; j++)
                {
                p[j - t +3] = p[j + 1];
                }
                p[j - t + 3] = '\0';
            }
            else
            {
                p[i - t + 1] = '1';
                p[i - t + 2] = t + 48 - 10;
                for (j = i; p[j + 1] != '\0'; j++)
                {
                    p[j - t + 4] = p[j + 1];
                }
                p[j - t + 4] = '\0';
            }

            t = 1;
        }
    }
}

