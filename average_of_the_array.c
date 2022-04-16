#include<stdio.h>
int main()
{
    int n,arr[100],i,sum=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=(float)(sum)/n;
    printf("%.2f",avg);
}