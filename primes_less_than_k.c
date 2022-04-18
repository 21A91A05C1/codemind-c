#include<stdio.h>
int main()
{
    int i,n,arr[100],j,d=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    { c=0;
        if(arr[i]==1)
        continue;
        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            c++;
        }
        if(c==0 && arr[i]<=k)
            d++;
    }
    printf("%d",d);
}