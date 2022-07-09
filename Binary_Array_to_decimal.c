#include<stdio.h>
int main()
{
    int arr[1000],org=0,dn=0,b=1,i,r,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        org=org*10+arr[i];
    }
    while(org)
    {
        r=org%10;
        dn=dn+(r*b);
        org=org/10;
        b=b*2;
    }
    printf("%d",dn);
}