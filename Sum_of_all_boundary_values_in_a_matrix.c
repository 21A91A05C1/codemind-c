#include<stdio.h>
int main()
{
    int arr[100][100],n,i,j,m,sum=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0||j==0||i==n-1||j==n-1)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
}