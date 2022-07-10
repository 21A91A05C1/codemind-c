#include<stdio.h>
int main()
{
    char str[1000];
    int i,n=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=33 && str[i]<=47 || str[i]>=58
        && str[i]<=64 || str[i]>=91 && str[i]<=96
        || str[i]>=123 && str[i]<=126)
        {
            n++;
        }
    }
    printf("%d",n);
}