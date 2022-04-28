#include<stdio.h>
int main()
{
    int i,n,arr[1000],brr[1000],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=n-1;i>=n/2;i--)
    {
        brr[k]=arr[i];
        k++;
    }
    for(i=0;i<n/2;i++)
    {
        brr[k]=arr[i];
        k++;
    }

    for(i=0;i<k;i++)
    {
        printf("%d ",brr[i]);
    }
}