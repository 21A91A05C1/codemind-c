#include<stdio.h>
int main()
{
    int i,n,arr[1000],m,k,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d%d",&m,&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]<m || arr[i]>k)
        {
            printf("%d ",arr[i]);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
    
}