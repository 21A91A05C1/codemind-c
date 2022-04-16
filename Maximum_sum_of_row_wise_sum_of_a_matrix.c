#include<stdio.h>
int main()
{
    int r,c,i,j,arr[100][100],sum =0,max=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    { sum=0;

        for(j=0;j<c;j++)
        {  
                sum=sum+arr[i][j];// 12 15 18
                
        }
        if(sum>=max)
                {
                    max=sum;
                }
    }
    printf("%d ",max);
 
    
}