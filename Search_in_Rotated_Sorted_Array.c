#include<stdio.h>
int main()
{
    int n,arr[1000],k,flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int i=0 ;i<n;i++)
    {
        if(k==arr[i])
        {
            printf("%d",i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}