#include<stdio.h>
int main()
{
    int n,arr[1000],i,k=0,a1[100],d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            c++;
            a1[k]=arr[i];
            k++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        int max=0;
        for(k=0;k<c;k++)
        {
        if(max<a1[k])
        {
            max=a1[k];
        }
        }
        printf("%d ",max);
    }
}