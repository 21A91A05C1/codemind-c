#include<stdio.h>
int main()
{
    int i,n,arr[100],m,k,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d%d",&m,&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]<m || arr[i]>k)
        sum=sum+arr[i];
    }
    printf("%d",sum);
}