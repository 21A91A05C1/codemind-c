#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                printf("%d ",j-i);
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("%d ",i-i);
        }
    }
}