#include<stdio.h>
int main()
{
   int l,N,r=0;
   scanf("%d",&N);
   while(N>0)
   {
       l=N%10;
       N=N/10;
       r=r*10+l;
       
   }
   printf("%d ",r);
}