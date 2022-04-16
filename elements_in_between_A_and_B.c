#include<stdio.h>
int main()
{
    int arr[10000],n,i,m,l,c=0,d=0;
    scanf("%d",&n);
    int a[n],k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&m,&l);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=m && arr[i]<=l)
        {
            a[c]=arr[i];
            c++;
        }
    }
    
    for(i=0;i<c;i++)
    {
        printf("%d ",a[i]);
    }
    if(c==0)
    {
        printf("-1");
    }
}