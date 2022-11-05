#include <stdio.h>

int main()
{
    int N;
    double sum = 0, z = 2, m = 1;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        double temp;

        sum = sum + z / m;

        temp = z;
        z = z + m;
        m = temp;
    }

    printf("%0.2lf", sum);
}