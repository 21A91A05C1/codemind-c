#include<stdio.h>
int main()
{
    int n,arr[1000],i,c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            c++;
            if(i%2==0)
            {
                d++;
            }
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