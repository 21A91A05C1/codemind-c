#include<stdio.h>
int main()
{
    int n,arr[100],c0=0,c1=0,c2=0,c3=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if(arr[i]%4==0)
        {
            c0++;
        }
        else if(arr[i]%4==1)
        {
            c1++;
        }
        else if(arr[i]%4==2)
        {
            c2++;
        }
        else if(arr[i]%4==3)
        {
            c3++;
        }
    }
    if(c0%2==0 &&  c1%2==0 && c2%2==0 && c3%2==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}