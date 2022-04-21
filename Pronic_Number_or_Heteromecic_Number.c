#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n==i*(i+1))
        {
            c++;
            //printf("YES");
        }
    }
    if(c>0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}