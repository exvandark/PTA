#include <stdio.h>




int main()
{
    int x,z;
    double a[1000][3] = { {0,0,0} };

    int M;
    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
        scanf("%lf", &a[i][0]);
        scanf("%lf", &a[i][1]);
        scanf("%lf", &a[i][2]);
    }


 

    int N;
 
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &x);
        for ( z = 0; z < M; z++)
        {

            if (x == a[z][1])
            {
                printf("%0.f %0.f\n", a[z][0], a[z][2]);
            }

        }
        z = 0;
    }
}