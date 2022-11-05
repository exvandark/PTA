#include <stdio.h>

void bubble(int a[], int n)
{
    int t;
    int i = 0;
    int j = 1;

    for (int z = 0; z <= n; z++)
    {
        for (; i < n - 1; i++, j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        i = 0, j = 1;
    }
}


void bubble(int a[], int n);
int main(void)
{
    int n, a[10];
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    bubble(a, n);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

/* 请在这里填写答案 */
