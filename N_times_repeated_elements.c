#include<stdio.h>
int main()
{
    int i,n,arr[1000],c=0,k=0,j,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        int l;
    scanf("%d",&l);
    for(i=0;i<n;i++)
    { c=1;
        for(j=0;j<n;j++)
        {
            if(i!=j && arr[i]==arr[j] && arr[i]>0)
            {
                c++;
                arr[j]=-1;
            }
        }
        if(c==l)
        {
            flag=1;
            printf("%d ",arr[i]);
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}