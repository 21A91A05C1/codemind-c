#include<stdio.h>
int main()
{
    int i,n,arr[100],r=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {  r=0;
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            r=r*10+d;
            arr[i]=arr[i]/10;
        }
        printf("%d ",r);
    }
}