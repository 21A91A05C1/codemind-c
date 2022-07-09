#include<stdio.h>
int main()
{
    int odd[1000],even[1000],i,n,arr[1000],k,c=0,d=0;
    int k1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            c++;
            even[k]=arr[i];
            k++;
        }
        else
        {
            d++;
            odd[k1]=arr[i];
            k1++;
        }
    }
    for(i=0;i<d;i++)
    {
        printf("%d ",odd[i]);
    }
    for(i=0;i<c;i++)
    {
        printf("%d ",even[i]);
    }
}