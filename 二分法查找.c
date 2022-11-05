#include <stdio.h>

int main()
{
    int n, key;
    scanf("%d%d", &n, &key);

    int a[10] = { 0 };

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i > 1)
        {
            if (a[i - 1] >= a[i])
            {
                printf("Invalid Value");
                goto finish;
            }
        }
    }

    int left = 0, right = n - 1, mid;



    for (;;)
    {
        mid = (left + right) / 2;

        printf("[%d,%d][%d]\n", left, right, mid);

        if (a[mid] == key)
        {
            printf("%d", mid);
            break;
        }
        else if (a[mid] > key)
        {
            right = mid - 1;
        }
        else if (a[mid] < key)
        {
            left = mid + 1;
        }

        if (left > right)
        {
            printf("Not Found");
            break;
        }
    }

finish:;
}