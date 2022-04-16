#include<stdio.h>
int main()
{
    int i,j,arr[1000][1000],n,m,sum=0,sum1=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]%2==0)
            {
                sum=sum+arr[i][j];
            }
            else
            {
                sum1=sum1+arr[i][j];
            }
        }
    }
    printf("%d %d",sum,sum1);
    
}