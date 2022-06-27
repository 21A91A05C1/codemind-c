#include<stdio.h>
#include<math.h> 
int main()
{
    int n,d,sum=0,res;
    scanf("%d",&n);//9
	res=n*n;
	while(res>0)
	{
		d=res%10;//1
		sum=sum+d;//0+1
		res=res/10;//8
	}
	
	if(sum==n)
	{
		printf("Neon Number");
	}
	else
	{
		printf("Not Neon Number");
	}
}