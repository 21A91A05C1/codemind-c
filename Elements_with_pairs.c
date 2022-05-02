#include<stdio.h>
int main()
{
    int i,n,arr[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum++;
    }
    if(sum%2==0)
    {
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    else
    {
        for(i=0;i<=n;i++)
        {
            arr[n]=0;
            printf("%d ",arr[i]);
        }
    }
    
}