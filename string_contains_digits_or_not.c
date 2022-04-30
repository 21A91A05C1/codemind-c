#include<stdio.h>
int main()
{
    int i,c=0,n,j;
    char str[10000];
   scanf("%d",&n);
   for(j=1;j<=n;j++)
   { c=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("Yes
");
    }
    else
    {
        printf("No
");
    }
    }
}