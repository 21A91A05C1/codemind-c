#include<stdio.h>
int isprime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	return c;
}

int main()
{
	int z=0,n,s=0,c,d,r,i,k=0;
	scanf("%d",&n);
	c=isprime(n);
	if(c==2)
	{
		while(n!=0)
		{//54
		k=0;
			d=n%10;//4 5
			s++;
			for(i=1;i<=d;i++)
			{
				if(d%i==0)
				{
					k++;
				}
			}
			n=n/10;
		
		if(k==2)
			{
				z++;
			}
		}
		if(s==z)
		{
			printf("Mega Prime");
		}
		else
		{
			printf("Not Mega Prime");
		}
	}
	else
	{
		printf("Not Mega Prime");
	}
}