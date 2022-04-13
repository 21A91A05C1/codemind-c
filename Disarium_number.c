#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,c=0,temp=0,res=0,rev=0,d1,p;
    scanf("%d",&n);
    temp=n;
    while(n>0)//175
    { 
        
        d=n%10;//5 7 1
        rev=rev*10+d;//571
        n=n/10;
    }
    n=temp;
    while(rev>0)
    {
        d1=rev%10;//1 7 5
        c++;// 1 2 3
        res=res+pow(d1,c);//1 +49 + 125 =175
        rev=rev/10;
    }
    
    if(res==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}