#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    int c=0,s=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=m)
        {
            c=c+1;
        }
        else
        {
            s++;
        }
        if(s<2)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    printf("%d",c);
}