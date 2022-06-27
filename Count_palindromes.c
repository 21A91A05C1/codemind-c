#include<stdio.h>
int main()
{
    int arr[1000],i,n,rev=0,c=0,d,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {rev=0;
    p=arr[i];
        while(arr[i]>0)
        {
            d=arr[i]%10;
            rev=rev*10+d;
            arr[i]=arr[i]/10;
        }
        if(rev==p)
        {
            c++;
        }
    }
    printf("%d",c);
}