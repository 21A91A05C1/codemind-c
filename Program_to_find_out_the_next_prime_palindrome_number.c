#include<stdio.h>
int pal(int n)
{
    int d,r=0,temp;
    temp=n;
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if(r==temp)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,d,i,m,c=0;
    scanf("%d",&n);
    for(int i=n+1;i<=100000;i++)
    {
        if(pal(i))
        {
            c=0;
            //printf("%d ",i);
            for(m=1;m<=i;m++)
            {
                if(i%m==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                printf("%d",i);
                break;
            }
        }
        else
        {
            continue;
        }
    }
}