#include<stdio.h>
int main()
{
    int i,n,c=0;
    char str[100];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
             c++;
        }
    }
    printf("%d",c);
    return 0;
}