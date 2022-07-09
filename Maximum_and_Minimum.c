#include<stdio.h>
int main()
{
    int i,n,arr[1000],c=0,k=0,j,flag=0,p=0,sum=0,max=0,min=9999;
    float avg;
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
            flag=1;
            if(max<arr[i])
            {
                max=arr[i];
            }
            if(min>arr[i])
            {
                min=arr[i];
            }
        }
    }
    if(flag==1)
    printf("%d %d ",min,max);
    else
    {
        printf("-1");
    }
}