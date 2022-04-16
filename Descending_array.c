#include<stdio.h>
int main()
{
    int i,n,arr[100],flag=0,j,d=1,a=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
    {
        
            if(arr[i]<arr[i+1])
            {
                d=0;
            }
            else if(arr[i]>arr[i+1])
            {
                a=0;
            }
       
    }
    if(d==1)
    {
        printf("yes");
    }
    else if(a==1)
    {
        printf("yes");
    }
    else
        printf("no");
        return 0;
}