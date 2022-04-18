#include<stdio.h>
int main()
{
    int i,c=0;
    char str[1000];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=33 && str[i]<=47 || str[i]>=91 && 
        str[i]<=96|| str[i]>=123 && str[i]<=126
        ||str[i]>=58 && str[i]<=64)
        {
             c++;
        }
    }
    printf("%d",c);
    return 0;
}