#include<stdio.h>
int main()
{
    int arr[100],i,j,d=0,n,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {flag=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            if(arr[i]%2!=0)
            d++;
        }
    }
     printf("%d",d);
}