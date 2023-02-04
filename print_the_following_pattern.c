#include<stdio.h>
int main()
{
    int i , j ,k = 0 , l = 0;
    int n;
    scanf("%d",&n);
    for(i = 0 ; i < n ; i++)
	{	int k=i;
		int l=0;
		for(j = 0 ; j < n-i-1 ; j++)
		{
			//cout<<" "<<" ";
			printf(" ");
		}
		for(j = 0 ; j <i;j++)
		{
			//cout<<k<<" ";
			printf("%d",k);
			k--;
		}
		for(j = 0 ; j <= i ; j++)
		{
			//cout<<l<<" ";
			printf("%d",l);
			l++;
		}
		
		printf("
");
	}
}