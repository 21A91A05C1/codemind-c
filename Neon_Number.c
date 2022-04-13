#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,res,sum=0;
    scanf("%d",&n);
    res=n*n;
    while(res>0)
    {
        d=res%10;
        sum=sum+d;
        res=res/10;
        
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}