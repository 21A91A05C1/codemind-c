#include<stdio.h>
int isprime(int s2)
{
    int i;
    for(i=2;i<s2;i++)
    {
        if(s2%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int fun(int s1)
{
    int s2,i;
    for(i=1;i<=10;i++)
    {
        s2=s1+i;
        if(isprime(s2))
        {
            return i;
        }
        
    }
}
int main()
{
    int a,b,s1,s2,c=0,n,i,j,k=0;
    scanf("%d%d",&a,&b);
    s1=a+b;
    k=fun(s1);
    printf("%d",k);
}