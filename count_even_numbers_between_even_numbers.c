#include<stdio.h>
int main()
{
    int n,i,k1=0,k2=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            k1=i;
            break;
        }
    }
    for(i=n-1;i>1;i--)
    {
        if(arr[i]%2==0)
        {
            k2=i;
            break;
        }
    }
    for(i=k1+1;i<k2;i++)
    {
        if(arr[i]%2==0)
        c++;
    }
    printf("%d",c);
}