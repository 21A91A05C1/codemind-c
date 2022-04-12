#include<stdio.h>
int main()
{
	int n,i,flag=0,arr[100],min=9999,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	for(i=min;i>=1;i--)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(arr[j]%i!=0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d ",i);
			break;
		}
	}
	return 0;
	
}