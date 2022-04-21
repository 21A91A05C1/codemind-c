#include<stdio.h>
int main()
{
    int arr[100][100],i,j,m,n,sum=0;
    scanf("%d%d",&m,&n);
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
            if(i==j || i+j==n-1)
            {
                sum=sum+arr[i][j];
            }
            
        }
    }
    
    printf("%d",sum);
}