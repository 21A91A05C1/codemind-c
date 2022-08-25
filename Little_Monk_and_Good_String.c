#include<stdio.h>
int main()
{
    char st[10000],c=0,d=0;
    scanf("%[^
]s",st);
    for(int i=0;st[i]!=NULL;i++)
    {
        if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u' )
        {
            c++;
        }
        else
        {
            if(c>d)
            {
                d=c;
            }
            c=0;
        }
    }
    if(c>d)
    {
        d=c;
    }
    
    printf("%d",d);
}