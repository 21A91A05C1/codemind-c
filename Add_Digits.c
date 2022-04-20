#include<stdio.h>
int main()
{
    int n,d,sum=0;
    scanf("%d",&n);
    while(sum>9 || sum==0)
    {
        sum=0;
        while(n>0)
        {
            d=n%10;
            sum=sum+d;
            n=n/10;
        }
        n=sum;
    }
     printf("%d",sum);
       
       
        
    
   
}