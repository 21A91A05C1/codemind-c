#include<stdio.h>
int main()
{
    int n,k,arr[1000],ma=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if (arr[i]>ma)
            ma=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if (arr[i]+k>=ma)
            printf("True ");
        else
        printf("False ");
    }
}