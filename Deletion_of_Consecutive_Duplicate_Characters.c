#include<stdio.h>
int main()
{
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
    char st[10000];
    scanf("%s",st);
    for(int i=0;st[i]!=NULL;i++)
    {
        if  (st[i]==st[i+1])
        {
            c++;
        }
    }
    printf("%d
",c);
    }
    
}