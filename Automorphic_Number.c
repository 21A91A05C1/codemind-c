#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp=0,c=0,p,k,sq,d;
    scanf("%d",&n);
    sq=n*n;
    temp=n;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        c++;
    }
    n=temp;
    p=pow(10,c);
    k=sq%p;
    if(k==n)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}