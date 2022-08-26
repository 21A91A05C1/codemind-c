#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        char n[10000];
        int c=0,j;
        scanf("%s",n);
        for( j=0;n[j]!=NULL;j++)
        {
            c=c+1;
        }
        int k=1;
        for(j=0;j<c;j++)
        {
            if(n[j]!=n[c-j-1])
            {
                k=0;
                break;
            }
        }
        if(k==0)
        {
            printf("NO
");
        }
        else
        {
            if(c%2==0)
            {
                printf("YES EVEN
");
            }
            else
            {
                printf("YES ODD
");
            }
        }
    }
    
}