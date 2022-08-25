#include<stdio.h>
int main()
{
    char st[10000];
    int c=0,j,i,flag=0;
    scanf("%s",st);
    for(int i=0;st[i]!=NULL;i++)
    { c=0;
        for(int j=0;st[j]!=NULL;j++)
        {
            if(st[i]==st[j])
            {
                c+=1;
            }
        }
        if(c==1)
        {
            printf("%d",i);
            flag=1;
            break;
        }
        else
        {
            continue;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
    
}