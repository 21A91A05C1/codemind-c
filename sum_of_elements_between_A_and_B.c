#include<stdio.h>
int main()
{
    int arr[10000],n,i,m,l,c=0,d=0;
    scanf("%d",&n);
    int a[n],k,sum=0;
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
            sum=sum+a[c];
            
        }
    }
    
        printf("%d ",sum);


}