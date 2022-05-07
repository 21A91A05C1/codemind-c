#include<stdio.h>
int main()
{
    int n,arr[1000],i,r,rev=0,org=0,dn=0,b=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);//1 1 0 0
    }
    for(i=0;i<n;i++)
    {
        org=org*10+arr[i];//1100
    }
    while(org)
    {
        r=org%10;//0 0 1 1
        dn=dn+(r*b);//0 0 4 12
        org=org/10;//110 11 1 0
        b=b*2;//2 4 8
    }
    printf("%d",dn);
}