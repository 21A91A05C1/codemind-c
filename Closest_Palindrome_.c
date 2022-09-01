#include<stdio.h>
#include<math.h>
int palin(int n)
{
    int t,r=0,d;
    t=n;
    while(n)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if(r==t)
    return 1;
    else
    return 0;
}
int main()
{
    int n,d=0,z=0;
    scanf("%d",&n);
    for(int i=n-10;i<=n;i++)
    {
        if(palin(i))
        {
            d=i;
            break;
        }
    }
    for(int i=n+1;i<=n+10;i++)
    {
        if(palin(i))
        {
            z=i;
            break;
        }
    }

    if(abs(d-n)<abs(z-n))
    printf("%d",d);
    else if(abs(d-n)==abs(z-n))
    {
        printf("%d %d",d,z);
    }
    else
    {
        printf("%d",z);
    }
    
}