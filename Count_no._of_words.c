#include<stdio.h>
int main()
{
    int i,c=1;
    char str[1000];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    { 
        if(str[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c);
}