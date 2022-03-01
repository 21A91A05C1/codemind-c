#include<stdio.h>
int main()
{
    int i,n,arr[100],j,flag=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    { flag=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j )
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            d++;
            printf("%d ",arr[i]);
        }
    }
    if(d==0)
    {
        printf("-1");
    }
}