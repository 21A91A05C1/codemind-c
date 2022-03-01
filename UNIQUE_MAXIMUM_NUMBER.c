#include<stdio.h>
int main()
{
	int i,n,arr[20],max=0,j,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{ flag=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j] && i!=j)
			{
				flag=1;
			}
			
		}
		if(flag==0)
		{//5 1 3
		
			if(max<arr[i])//0<5
			max=arr[i];//5
			
		}
	}
	if(max==0)
	{
		printf("-1");
	}
	else
	printf("%d",max);
}