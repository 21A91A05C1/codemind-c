#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int m,n,i;
    scanf("%[^
]s",s);
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<m+1;i++)
    {
        printf("%c",s[i]);
    }
}