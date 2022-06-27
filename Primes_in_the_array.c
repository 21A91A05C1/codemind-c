#include<stdio.h>
int main()
{
    int arr[1000],i,n,c=0,d=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {c=0;
    if(arr[i]==1)
    continue;
        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            d++;
        }
    }
    printf("%d",d);
}