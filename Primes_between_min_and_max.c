#include<stdio.h>
int fun(int *arr,int n,int max,int min)
{
    int i,d=0,j,c=0;
    if(max>min)
    {
        for(i=min;i<=max;i++)
        {d=0;
            if(arr[i]==1)
            d=1;
            for(j=2;j<arr[i];j++)
            {
                if(arr[i]%j==0)
                {
                    d++;
                }
            }
            if(d==0)
            {
                c++;
            }
            
        }
        return c;
    }
    else
    {
        for(i=max;i<=min;i++)
        {d=0;
            if(arr[i]==1)
            d=1;
            for(j=2;j<arr[i];j++)
            {
                if(arr[i]%j==0)
                {
                    d++;
                }
            }
            if(d==0)
            {
                c++;
            }
        }
        return c;
    }
}
int main()
{
    int n,arr[1000],i,min=999,max=-999,c,a,b,d=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            a=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            b=i;
        }
    }
    c=fun(arr,n,a,b);
    printf("%d",c);
}
    