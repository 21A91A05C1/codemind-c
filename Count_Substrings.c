#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int c=0,n;
        scanf("%d",&n);
        char st[1000];
        scanf("%s",st);
        for(int i=0;st[i]!=NULL;i++)
        {
            for(int j=i;st[j]!=NULL;j++)
            {
                if (st[i]=='1' && st[j]=='1')
                {
                    c+=1;
                }
            }
        }
        printf("%d
",c);
    }
}

