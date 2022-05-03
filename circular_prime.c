#include<stdio.h>
int main()
{
    int n,i,d,r,c=2,z=2,j;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    {
        while(n>0)
        {
            d=n%10;
            r=r*10+d;
            n=n/10;
        }
    }
    for(j=2;j<r;j++)
        {
            if(r%j==0)
            z++;
        }
    if(c==2 && z==2)
        printf("circular prime");
    if(c==2 && z!=2)
    {
        printf("prime but not a circular prime");
    }
    else if(c!=2)
    {
        printf("not prime");
    }
    
    
}