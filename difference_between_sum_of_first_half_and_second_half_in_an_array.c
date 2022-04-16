#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,arr[100],sum=0,s=0,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int l=n/2;
    for(i=0;i<=l-1;i++)
    {
        sum=sum+arr[i];
    }
    for(i=l;i<n;i++)
    {
        s=s+arr[i];
    }
    res=abs(sum-s);
    
  printf("%d",res);
    
}