#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,d1,p=0,r=0;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    while(r!=0)
    {
        d1=r%10;
        if(d1%2!=0)
        {
            p=pow(d1,2);
            printf("%d",p);
        }
    
        r=r/10;
        
        
    }
}