#include<stdio.h>
int main()
{
    char str[1000];
    int i,n=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            n++;
        }
        else
        {
            continue;
        }
    }
    printf("%d",n);
}