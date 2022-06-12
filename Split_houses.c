#include<stdio.h>
int main()
{
    int n,flag=0,d=0,i;
    scanf("%d",&n);
    char c[n];
    scanf("%s",c);
    for (int i=0;c[i]!=NULL;i++)
    {
        d++;
    }
    for(int i=0;i<d;i++)
    {
        if(c[i]=='H'&&c[i+1]=='H')
        {
            flag=1;
        }
        else
        {
            if(c[i]=='.')
            c[i]='B';
        }
    }
    if(flag==1)
    {
    printf("NO
");
    }
    else
{
    printf("YES
");
    printf("%s",c);
}
}