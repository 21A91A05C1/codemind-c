#include<stdio.h>
int main()
{
    int t,d,res=0,n;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        d=n%10;
        res=res*10+d;
        n=n/10;
    }
        if(t==res)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    
    
}