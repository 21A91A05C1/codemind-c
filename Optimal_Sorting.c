#include<stdio.h>
int main()
{
    int n,t,arr[10000];
    scanf("%d",&t);
    while(t--)
    {
        int max=-99,p=0;
        int min=1000,flag=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for (int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    continue;
                }
                else
                {
                    for(int i=0;i<n;i++)
                    {
                    if(arr[i]>max)
                    {
                        max=arr[i];
                    }
                    if(arr[i]<min)
                    {
                        min=arr[i];
                    }
                    }
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            printf("%d",p);
        }
        else
        {
            printf("%d
",max-min);
        }
        
        
    }
}