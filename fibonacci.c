#include<stdio.h>
int main()
{
    int n,i,a,b,res;
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=1;i<=n;i++)//n=10
    {
        printf("%d ",a);
        res=a+b;
        a=b;
        b=res;
    }

}