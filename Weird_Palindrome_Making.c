#include<stdio.h>
int main()
{
    int t,n,arr[10000],c=0,i,j;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        scanf("%d",&n);
        c=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                c++;
            }
        }
    printf("%d
",int(c/2));
    }
}