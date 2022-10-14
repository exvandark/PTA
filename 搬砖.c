#include <stdio.h>
#define m cnt_m
#define w cnt_w
#define c cnt_c
#pragma warning(disable : 4996)

int main()
{
    int cnt_m, cnt_w, cnt_c;
    int n, i = 0;
    scanf("%d", &n);

    for (cnt_m = 0; cnt_m < 45; cnt_m++)
    {
        for (cnt_w = 0; cnt_w < 45; cnt_w++)
        {
            for (cnt_c = 0; cnt_c < 45; cnt_c += 2)
            {
                if (cnt_m * 3 + cnt_w * 2 + cnt_c / 2 == n && cnt_m + cnt_w + cnt_c == 45)
                {
                    printf("men = %d, women = %d, child = %d\n", m, w, c);
                    i += 1;
                }
            }
        }
    }
    if (i==0)
    {
        printf("None");
    }
    return 0;
}