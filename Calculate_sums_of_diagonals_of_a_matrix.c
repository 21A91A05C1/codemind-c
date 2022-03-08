#include<stdio.h>
int main()
{
    int arr[1000][1000],r,c,i,j,sum=0,res=0;
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
            if(i+j==r-1)
            {
                res=res+arr[i][j];
            }
            else
            {
                continue;
            }
        }
    }
    printf("Principal Diagonal:%d
",sum);
    printf("Secondary Diagonal:%d",res);
}