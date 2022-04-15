#include<stdio.h>
int main()
{
    int n,i,arr[1000],c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            c++;
            if(i%2!=0)
            d++;
        }
    }
    if(c==d)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}