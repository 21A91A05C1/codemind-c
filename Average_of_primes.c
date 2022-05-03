#include<stdio.h>
int main()
{
    int i,n,arr[100],j,c=0,d=0,sum=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    { c=0;
    if(arr[i]==1)
    continue;
    for(j=2;j<arr[i];j++)
    {
        if(arr[i]%j==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        d++;
        sum=sum+arr[i];
        avg=(float)sum/d;
    }
        
    }
    printf("%.2f",avg);
}