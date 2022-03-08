#include<stdio.h>
int main()
{
    int i,n,arr[1000],sum=0,d=0,c=0,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=t)
        {
            c++;
        }
        else
        {
            d=d+2;
        }
        sum=c+d;
    }
    printf("%d",sum);
}