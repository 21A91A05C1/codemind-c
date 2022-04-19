#include<stdio.h>
int main()
{
    int i,n,arr[100],d,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {   c=0;
    
        while(arr[i])
        {
            d=arr[i]%10;
            c++;
            arr[i]=arr[i]/10;
        }
        if(c>0)
        {
            printf("%d ",c);
    }
    else
    {
        printf("%d ",c+1);
    }
        }
       
}