#include<stdio.h>
int main()
{
    int n,arr[1100],max=0,k;
    scanf("%d",&n);
    for(int i=0;i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                k=arr[j]-arr[i];
                if(k>max)
                {
                    max=k;
                }
            }
        }
    }
    printf("%d",max);
}