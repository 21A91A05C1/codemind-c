#include<stdio.h>
int main()
{
    int n,k,arr[100],res=0,sum=0,i,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+arr[j];
            if(sum==k)
            {
                res=res+1;
                
            }
        }
    }
    printf("%d",res);
}