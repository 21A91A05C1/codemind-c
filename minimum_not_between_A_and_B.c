#include<stdio.h>
int main()
{
    int i,n,arr[100],m,l,k=0,c=0,arr1[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d%d",&m,&l);
    for(i=0;i<n;i++)
    {
        if(arr[i]<m || arr[i]>l)
        {
            c++;
            arr1[k]=arr[i];
            k++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        int min=999;
        for(k=0;k<c;k++)
        {
            if(min>arr1[k])
            {
                min=arr1[k];
            }
        }
        printf("%d",min);
    }
}