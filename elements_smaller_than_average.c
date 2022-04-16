#include<stdio.h>
int main()
{
    int i,n,arr[100],avg,sum=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg>=arr[i])
        {
            c++;
          //  printf("%d",arr[i]);
        }
    }
    printf("%d",c);
    
}