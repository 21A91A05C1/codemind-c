#include<stdio.h>
int main()
{
    int n,i,k1=0,k2=0,c=0;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=1;i<n-1;i++)
    {
        if(arr[i]%2==1 && arr[i-1]%2==1 && arr[i+1]%2==1)
        {
            c++;
        }
    }
    printf("%d",c);
}