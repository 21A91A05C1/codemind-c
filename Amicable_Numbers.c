#include<stdio.h>
int main()
{
    int i,j,x,y,sum1=0,sum2=0;
    scanf("%d",&x);
    scanf("%d",&y);
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        {
            sum1=sum1+i;
        }
    }
    for(j=1;j<y;j++)
    {
        if(y%j==0)
        {
            sum2=sum2+j;
        }
    }
    if(sum1==y && sum2==x)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}