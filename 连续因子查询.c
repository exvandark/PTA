#include <stdio.h>

int main()
{
    int nt, it, t=1, i = 2, n,x=0;
    scanf("%d", &n);
    nt = n;
    it = i;

    for (; ;)
    {
        if (n % i == 0)
        {
 
           n= n / i;
            t += 1;
            i++;
            x = x * i;
        }
        else if (n % i != 0)
        {
            i++;
            t = 1;
            x = x * i;
        }
        if (n < i)
        {
            i = it + 1;
            n = nt;
            it + 1;
            t = 1;
        }
        else if (x > nt)
        {
            i = it + 1;
            n = nt;
            it + 1;
            t = 1;
        }
        else if (n == i)
        {
            break;
        }
    }
    printf("%d\n", t);
    int t1;
    t1 = t;
    for (; t > 1;)
    {
        i=i - 1;
        t=t - 1;
    }
    for (; t1 >= 2;)
    {
        printf("%d*", i);
        i += 1;
        t1 -= 1;
    }
    printf("%d", i);

}