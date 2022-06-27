#include<stdio.h>
int main()
{
    int arr[1000],n,i,sum=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        while(arr[i]>0)
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            sum=sum+d;
        }
        
    }
    printf("%d",sum);
}