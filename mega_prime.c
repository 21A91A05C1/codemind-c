#include<stdio.h>
int prime(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
    
    if(n%i==0)
    {
        c++;
    }
    }
    return c;
}
int main()
{
    int n,i,c,d,s=0,k=0,z=0;
    scanf("%d",&n);
    c=prime(n);
    if(c==2)
    {
        while(n>0)
        {k=0;
            d=n%10;
            s++;
            for(i=1;i<=d;i++)
            {
                if(d%i==0)
                {
                    k++;
                }
            }
            n=n/10;
        
            if(k==2)
            {
                z++;
            }
            
            
            
        }
        if(z==s)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
        
    }
    else
    {
        printf("Not Mega Prime");
    }
    
}