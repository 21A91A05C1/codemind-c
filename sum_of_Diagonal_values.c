#include<stdio.h>
int main()
{
    int arr[1000][1000],r,c,i,j,sum=0,res=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j || i+j==r-1)
            {
                sum=sum+arr[i][j];
            }
           
            else
            {
                continue;
            }
        }
    }
    printf("%d",sum);
}