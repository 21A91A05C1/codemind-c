#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    { 
        int c=0,n,arr[10000],i;
        scanf("%d",&n);
        for (i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
     c=1;
        for (i=0;i<n-1;i++)
        {
            if (arr[i]>arr[i+1])
            {
                c++;
            }       
        }
    printf("%d
",c);
    t--;
    }
    
}