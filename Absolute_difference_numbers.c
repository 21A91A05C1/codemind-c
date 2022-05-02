#include<stdio.h>
#include<math.h>
int abs(int n,int x)
{
    int t,t1,r=1,i=0,c=0,f,l;
    t=n;
    t1=n;
    i=0;
    while(i<x)
    {
        r=r*10;
        i++;
    }
    l=n%r;
    n=t;
    while(n)
    {
        r=n%10;
        n=n/10;
        c++;
    }
    n=t1;
    while(c!=x)
    {
        n=n/10;
        c--;
    }
    f=n;
    return abs(f-l);
}
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    printf("%d",abs(n,x));
}