#include<stdio.h>
int main()
{
    int n,rev=0,d,res2,res1,ans=0,k;
    scanf("%d",&n);//12
    res1=n*n;//144
    while(n>0)//12
    {
        d=n%10;//2 1
        rev=rev*10+d;//21
        n=n/10;
        
    }
    res2=rev*rev;//441
    while(res2>0)
    {
        k=res2%10;
        ans=ans*10+k;//144
        res2=res2/10;
        
    }
    if(ans==res1)//144==441
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}