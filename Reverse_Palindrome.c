#include<stdio.h>
int fun(int n)
{
    int d,r=0;
    while(n!=0)
        {
            d=n%10;
            r=r*10+d;
            n=n/10;
        }
    return r;
}
int main()
{
    int n,r=0,d,temp;
    scanf("%d",&n);
    temp=n;
   // printf("%d",fun(n));
    while(n)
    {
        n=n+fun(n);
        if(n==fun(n))
        {
            printf("%d",n);
            break;
        }
    }
}