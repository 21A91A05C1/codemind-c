#include<stdio.h>
int main()
{
    int n,i,j,arr[1000],d,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    k=n-1;
    d=k/2;
    for(i=0;i<=k;i++,k--)
    {
        if(n%2!=0)
        {
            if(i!=d && k!=d)
            {
                printf("%d %d ",arr[i],arr[k]);
            }
        
        if(i==d)
        {
        printf("%d ",arr[k]);
        printf("0");
        }
        if(i>d)
        break;
        }
        else
        {
            printf("%d %d ",arr[i],arr[k]);
        }
    }
    
}