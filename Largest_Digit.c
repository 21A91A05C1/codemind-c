#include<stdio.h>
int main()
{
    int N,lc=0,c=0,d;
    scanf("%d",&N);
    while(N>0)
    {
        d=N%10;
        N=N/10;
        c=d;
        if(lc<c)
        {
            lc=c;
        }
    }
    printf("%d",lc);
}