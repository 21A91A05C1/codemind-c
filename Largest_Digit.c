#include<stdio.h>
int main()
{
    int N,d,c=0,lc=0;
    scanf("%d",&N);//9876
    while(N>0)
    {
    	d=N%10;//6
       	N=N/10;//987
       	c=d;
       	if(lc<c)//6<7
    	{
        	lc=c;//7
    	}
    }
    printf("%d",lc); 
}