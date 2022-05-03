#include<stdio.h>
int main()
{
    int n,m,arr[100],brr[100],i,j,k,crr[100],l=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&brr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<m-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                m--;
                j--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i]==brr[j])
            {
                l++;
            }
        }
    }
    
    
    
    printf("%d",l);
    
    
}