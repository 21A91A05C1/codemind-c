#include<stdio.h>
int main()
{
    long long int t,n,m,ans=-1,i;
    scanf("%lld",&t);
    while(t>0)
    {
        scanf("%lld %lld",&n,&m);
        ans=-1;
        for(i=0;i<=m;i++)
        {
            if((i*i)%m==n)
            {
                ans=i;
                break;
            }
        }
        printf("%lld
",ans);
        t--;
    }
}