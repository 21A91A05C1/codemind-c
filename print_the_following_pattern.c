#include<stdio.h>
int main() 
{
  int n,i,j,k;
  scanf("%d",&n);
  for (i=0;i<n;i++)//0 1 2 3 4
{
    for (j=1;j<=n-i-1;j++)// 1
    {
      printf(" ");//  
    }
    for (k=1;k<=2*i+1;k++)//1
    {
      printf("%d", i+1);//1
    }
    printf("
");
  }
  return 0;
}