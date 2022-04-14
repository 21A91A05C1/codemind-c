#include<stdio.h>
int main()
{
    int r,c,i,j,arr[1000][1000],max=-9999;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {  max=-9999;
        for(i=0;i<r;i++)
        {  
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
        }
        printf("%d
",max);
    }
}