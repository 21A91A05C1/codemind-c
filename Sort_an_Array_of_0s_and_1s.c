#include<stdio.h>
int main()
{
    int n,arr[100],brr[100],i,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
        {
            brr[j]=0;
            j+=1;
        }
    }
    i=0;
    while(i<n)
    {
        if(arr[i]==1)
        {
            brr[j]=1;
            j+=1;
        }
        i++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",brr[i]);
    }
}