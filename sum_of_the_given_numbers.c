#include<stdio.h>
int main()
{
    int i,n,a[100000],b[100000],c[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
        c[i]=a[i]+b[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d
",c[i]);
    }
}