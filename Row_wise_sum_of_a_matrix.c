#include<stdio.h>
int main()
{
    int n,m,i,j,arr[1000][1000],sum=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    { sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+arr[i][j];
        }
        printf("%d ",sum);
    }
}