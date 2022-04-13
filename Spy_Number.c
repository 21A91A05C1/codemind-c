#include<stdio.h>
int main()
{
    int n,d,s=0,p=1;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}