#include<stdio.h>
int main()
{
    int i,n,arr[100],c=0,k=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
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
        if(c==arr[i])
        {
            k++;
        }
    }
    printf("%d",k);
}