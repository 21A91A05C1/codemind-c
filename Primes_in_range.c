#include<stdio.h>
int main()
{
    int a,b,i,j,c1=0,c2=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i!=1)
        {
            for(j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    c1++;
                    break;
                }
            }
            if(c1==0)
            c2++;
            c1=0;
        }
    }
    printf("%d",c2);
}