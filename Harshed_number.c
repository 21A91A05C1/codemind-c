#include<stdio.h>
int main()
{
    int i,d,sum=0,t,n;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    if(t%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}