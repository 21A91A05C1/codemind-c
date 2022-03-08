#include<stdio.h>
int main()
{
    int n,arr[1000],i,j,c=0;
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
                c++;
            }
        }
        if(c>0)
        {
            printf("%d",arr[i]);
            return 0;
        }
    }
}