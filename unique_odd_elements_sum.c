#include<stdio.h>
int main()
{
    int i,n,arr[100],j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j && arr[i]!=-100)
            {
                arr[j]=-100;
            }
        }
        if(arr[i]!=-100 && arr[i]%2!=0)
        {
            c=c+arr[i];
        }
    }
    printf("%d",c);
}