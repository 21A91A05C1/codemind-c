#include<stdio.h>
int main()
{
    int n,arr[1000],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            c++;
        }
    }
    printf("%d",c);
}