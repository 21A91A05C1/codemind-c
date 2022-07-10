#include<stdio.h>
int main()
{
    int n,arr[1000],i,j,flag=0,c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {c=1;
        for(j=0;j<n;j++)
        {
            if(arr[j]!=-1 && i!=j )
            {
                if(arr[i]==arr[j])
                {
                    c++;
                    arr[j]=-1;
                }
            }
        } 
        if(arr[i]!=-1)
        {
            printf("%d %d ",arr[i],c);
        }
    }
}