#include<stdio.h>
int main()
{
    int n,l,r=0;
    scanf("%d",&n);
    while(n!=0)
    {
        l=n%10;
        n=n/10;
        r=r*10+l;
    }
    printf("%d",r);
}
