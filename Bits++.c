#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c=0;
    while(n--)
    {
        char str[10000];
        scanf("%s",str);
        for(int i=0;str[i]!=NULL;i++)
        {
            if(str[i]=='+')
            {
                c=c+1;
                break;
            }
            else if(str[i]=='-')
            {
                c=c-1;
                break;
            }
        }
    }
    printf("%d",c);
}