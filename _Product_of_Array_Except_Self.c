#include<stdio.h>
int main()
{
    int i,n,j,arr[1000],mul=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    { mul=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]!=arr[j])
            {
                mul=mul*arr[j];
            }
        }
        printf("%d ",mul);
    }
}