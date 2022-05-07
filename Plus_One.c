#include<stdio.h>
int main()
{
    int n,i,d=0,arr[100],sum,r[100],k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        d=d*10+arr[i];
    }
  //  printf("%d",d);
    sum=d+1;
    //printf("%d",sum);

    while(sum!=0)
    {
        r[k++]=sum%10;
        sum=sum/10;
       // k++;
    }
    for(i=k-1;i>=0;i--)
    {
        printf("%d ",r[i]);
    }
    
}