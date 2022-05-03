#include<stdio.h>
#include<math.h>
int main()
{
    int k=0,m=0,d,i,c=2,n,j,a[1000],b[1000],p;
    k=0;
    m=0;
    scanf("%d",&n);
    for(i=0;i<n+100;i++)
    {
        c=2;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            a[k]=abs(n-i);
            b[k]=i;
            m++;
            k++;
        }
    }
    d=a[0];
    for(i=0;i<m;i++)
    {
        if(d>a[i])
        {
            d=a[i];
            p=b[i];
        }
    }
    printf("%d",d);
    
}