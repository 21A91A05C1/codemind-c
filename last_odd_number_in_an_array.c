#include<stdio.h>
int main()
{
    int i,n,arr[100],c=0;
    scanf("%d",&n);
    int a[100],k;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
     k=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            c++;
            a[k]=arr[i];
            k++;
        }
    }
    printf("%d",a[c-1]);
        
}