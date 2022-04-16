#include<stdio.h>
int main()
{
    int r,c,i,j,arr[100][100],sum =0,max=0,max1=0,sum1=0;
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
    for(j=0;j<c;j++)
    { sum1=0;

        for(i=0;i<r;i++)
        {  
                sum1=sum1+arr[i][j];// 12 15 18
                if(max1<sum1)
                {
                    max1=sum1;
                    
                }
             
        }
  
    }
   if(max1>max)
   {
       printf("%d",max1);
   }
   else
   {
       printf("%d",max);
   }
 
    
}