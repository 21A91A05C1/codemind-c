#include<stdio.h>
int main()
{
    int arr[1000],i,n,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c++;
    }
    for(i=0;i<n;i++)
    {
        if(c%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    for(i=0;i<=n;i++)
    {
        if(c%2!=0)
        {
            arr[n]=0;
            printf("%d ",arr[i]);
        }
    }

}