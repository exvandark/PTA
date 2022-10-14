#include <stdio.h>

int main()
{
    int x=1,y=1,N;
    scanf("%d",&N);
    double sum=0;
    
    for(int i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            sum=sum-(double)x/y;
        }
        else
        {
            sum=sum+(double)x/y;
        }
        x+=1;
        y+=2;
    }
    
    peintf("%0.3f",sum);
    return 0;
}