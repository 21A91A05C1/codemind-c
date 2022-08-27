#include<stdio.h>
int main()
{
    int n,arr[1000],s=0,max=-9999;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        s=0;

        for(int j=i;j<n;j++)
        {
            s=s+arr[j];
            if(s>max)
            {
                max=s;
            }
        }
    }

    printf("%d",max);
}