#include<stdio.h>
int main()
{
    char p[1000];
    int max=0,c=0;
    scanf("%s",p);
    for (int i=0;p[i]!=NULL;i++)
    {
        if (p[i]=='a' || p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u')
        {
            c+=1;
            if(c>max)
            {
                max=c;
            }
        }
        else
        {
            c=0;
        }
    }
    printf("%d",max);
}