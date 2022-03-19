#include<stdio.h>
int main()
{
    int t,flag=0,i;
    char num[20];
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%s",num);
        flag=0;
        for(i=0;num[i]!=NULL;i++)
        { 
            if(num[i]<'0' || num[i]>'9')
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("False
");
        }
        else if(flag==0)
        {
            printf("True
");
        }
        t--;
    }
}