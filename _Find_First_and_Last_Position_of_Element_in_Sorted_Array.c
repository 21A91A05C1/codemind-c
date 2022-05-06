#include<stdio.h>
int main()
{
    int i,n,arr[10000],j,k,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            flag=1;
            printf("%d ",i);
            break;
            
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==k)
        {
            flag=1;
             printf("%d",i);
            break;
            
        }
    }
    
    if(flag==0)
    {
        printf("-1 -1");
    }

}