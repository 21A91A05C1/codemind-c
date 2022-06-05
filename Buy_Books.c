#include<stdio.h>
int main()
{
    int n,a[100],b[100],s=0,p=0,l,i,o=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for (i=0;i<n;i++)
    {
        s=s+a[i];
    }
    for(i=0;i<n;i++)
    {
        p=p+b[i];
    }
    l=p-s;
    if(l>0)
    {
        printf("%d",l);
    }
    else
    {
        printf("%d",o);
    }
}