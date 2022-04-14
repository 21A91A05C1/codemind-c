#include<stdio.h>
int main()
{
    int i, j, n, c=1;
    scanf("%d",&n);
    if(n<3 || n>100)
    {
        printf("The pattern is not possible");
    }
    else
    {
    for(i=1;i<n*2;i++)
    {
        for(j=1; j<=c;j++)
        {
            printf("*");
        }
        if(i<n)
        {
            c++;
        }
        else
        {
            c--;
        }
        printf("
");
    }
    }
}