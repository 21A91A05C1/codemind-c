#include<stdio.h>
int main()
{
     
     int i,n,j;
     scanf("%d",&n);
     for( i=1;i<=n;i++)
     {
         for(j=1;j<=n;j++)
         {
             if(i<n)
             {
                 if(j==1|| j==i)
                 {
                    printf("*");
                 }
                  else
                  {
                     printf(" ");
                  }
             }
             if(i==n && j<=n)
             {
                printf("*");
             }
         }
         printf("
");
     }
     
}