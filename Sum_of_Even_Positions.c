#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[1000],i,sum=0,sum1=0,res=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+arr[i];
        }
        
    }
 //   res=abs(sum-sum1);
    printf("%d",sum);
}