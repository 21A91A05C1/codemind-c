#include<stdio.h>
int main()
{
    int n,k,arr[100],i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        scanf("%d",&k);
     for(i=0;i<n;i++)
     {
         if(k==arr[i])
         {
             flag=1;
         }
         
     }
     if(flag==1)
        printf("True");
        else
            printf("False");
}