#include<stdio.h>
int main()
{
    int i,n,arr[100],d,c=0,k,l=0,s=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(i=0;i<n;i++)
    {   
        c=0;
        while(arr[i])
        {
            d=arr[i]%10;
            c++;
            arr[i]=arr[i]/10;
        }
        if(k==c && c>0)
        {
             l++;
        }
        if(c==0)
        {
            c=c+1;
            if(c==k)
            {
                s++;
            }
        }
    }
    printf("%d ",l+s);
       
}