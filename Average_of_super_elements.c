#include<stdio.h>
int main()
{
    int i,n,arr[1000],c=0,k=0,j,flag=0,p=0,sum=0;
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
            p++;
            sum=sum+arr[i];
            avg=(float)sum/p;
        }
    }
    if(flag==1)
    printf("%.2f",avg);
    else
    {
        printf("-1");
    }
}