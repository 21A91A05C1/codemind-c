#include<stdio.h>
int main()
{
    int n,i,j,c=0,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {  c=0;
            for(j=1;j<=n;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c!=2)
            {
                d++;
            }
        }
    }
    printf("%d",d);
}