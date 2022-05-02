#include<stdio.h>
int main()
{
    int m,n,i,t,j,c=0;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    { c=0;
        scanf("%d%d",&m,&n);
        for(i=m;i<=n;i++)
        {
            if(i%10==2 || i%10==3 || i%10==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}