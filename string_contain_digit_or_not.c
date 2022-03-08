#include<stdio.h>
int main()
{
    int i,c=0;
    char str[10000];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("Contains %d digit",c);
    }
    else
    {
        printf("Doesn't contain digit");
    }
}