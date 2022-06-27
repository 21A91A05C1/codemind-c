#include<stdio.h>
int main()
{
	int N,d,rev=0,T;
	scanf("%d",&N);
	T=N;
	while(N!=0)
	{
		d=N%10;
		rev=rev*10+d;
		N=N/10;
	}
	if(T==rev)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}