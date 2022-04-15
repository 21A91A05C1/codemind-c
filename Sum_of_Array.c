#include<stdio.h>
int main()
{
    int n,arr[1000],i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
            sum=sum+arr[i];
        
    }
    printf("%d",sum);
}