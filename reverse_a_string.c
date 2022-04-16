#include<stdio.h>
int stringlen(char *str)
{
    int i=0;
    for(i=0;str[i]!=NULL;i++);
    return i;
}
int stringrever(char *str)
{
    char temp;
    int i,j,len;
    len=stringlen(str);
    i=0;
    j=len-1;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
        
    }
}
int main()
{
    char str1[100];
    int n,len;
    scanf("%[^
]s",&str1);
    len=stringlen(str1);
    stringrever(str1);
    printf("%s",str1);
    
}