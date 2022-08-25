#include<stdio.h>
int main()
{
    char st[1000];
    scanf("%[\^n]s",st);
    for(int i=0;st[i]!=NULL;i++)
    {
        if (st[i]=='.')
        {
            printf("[.]");
        }
        else
        {
            printf("%c",st[i]);
        }
    }
}