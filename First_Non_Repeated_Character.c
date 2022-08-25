#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n;
        scanf("%d",&n);
        char str[n];
        int y=0;
        scanf("%s",str);
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<n;j++)
            {
                if(str[i]==str[j])
                {
                    c++;
                }
            }
            if(c==1)
            {
                printf("%c
",str[i]);
                y=1;
                break;
            }
        }
        if(y==0)
        {
            printf("-1
");
        }
        t=t-1;
    }
}