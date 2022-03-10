#include<stdio.h>
int main()
{
    int i,j,n,arr[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                arr[j]=-100;
            }
        }
        if(arr[i]!=-100)
        {
            printf("%d ",arr[i]);
        }
    }
}