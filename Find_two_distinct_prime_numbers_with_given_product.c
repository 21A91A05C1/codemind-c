#include<stdio.h>
int isprime (int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()

{
    int n;
    scanf("%d",&n);
    int c=0;
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(isprime(i)==1 and isprime(j)==1)
            {
                if(i*j==n)
                {
                    printf("%d ",i);
                    printf("%d",j);
                    c=1;
                    break;
                }
            }
        }
        
    }
    if(c==0)
    {
        printf("-1");
    }
}